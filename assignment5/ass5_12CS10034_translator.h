//enum classifiers to identify types
#include <iostream>
#include <string>
#include <list>
#include <vector>

#define MAX_SYMBOLS 1000 //maximum number of symbols allowed in a symbol table
#define MAX_QUADS 10000 //maximum number of quads that can be emitted

using namespace std; //I have majorly used C++ as coding language

//The enumeration of all the possible types an identifier can have
typedef enum type_enum
{
	_VOID = 0,
	_CHAR,
	_INT,
	_DOUBLE,
	_BOOL,
	_ARRAY,
	_POINTER,
	_FUNCTION
}type_enum;


//enum classifiers to identify opCode for quad
typedef enum opCode
{
	PLUS,
	MINUS,
	MULT,
	DIVIDE,
	MODULUS,
	LOGICAL_AND,
	LOGICAL_OR,
	LESS_THAN,
	GREATER_THAN,
	LESS_THAN_EQUAL,
	GREATER_THAN_EQUAL,
	EQUAL_TO,
	NOT_EQUAL_TO,
	LEFT_SHIFT,
	RIGHT_SHIFT,
	UMINUS,
	UPLUS,
	UPOINTER,
	UADDRESS,
	UNEGATION,
	UBITNEGATION,
	BIT_AND,
	BIT_XOR,
	BIT_OR,
	COPY,
	ARRAYRIGHT,
	ARRAYLEFT,
	_goto,
	_if,
	PARAM,
	CALL,
	_RETURN,
	inttobool,//The type conversions functions assumed to be present in machine
	inttodbl,
	chartodbl,
	dbltoint,
	chartoint,
	dbltochar,
	intTochar,
	ENDPROGRAM, //to emit the end of program statement
	FUNCTION_OP // to emit a quad which will say when the function definition is being started
}opCode;

/********************************************************************/
// The class type structure for identifying the type of an identifier
typedef struct Type
{
	type_enum type;
	int width;	
	struct Type *next; //in case of array and pointers
	int count; //count in case of array
}Type;

Type* createType(type_enum); //It will create a type* of given type code along with its associated width

int getTypeSize(type_enum t); // It will give the size associated with given type code

string getTypeID(type_enum); // It will give the name of type as string return type given a type code.

Type* getBaseType(Type *t); // It is useful in case of array and pointers to return the base type for them



/***********************************************************************/
// definition of an item i.e. symbol in symbol table class
typedef struct Symbol
{
	string tableName;
	string name; //name of symbol
	Type* type; //Type pointer to structure type
	string init_value; //initial value
	int 	size; //size of the variable
	int 	offset; //offset associated
	class symbolTable* symTabPointer; //pointer to the nested function symbol table in case of type being function
}Symbol;

void updateSymbol(Symbol* s,Type* t);//It will change the give symbol type to the target type given in input
void updateSymbolInitVal(Symbol *s,string val); //To change the initial value of the symbol
Symbol* createSymbol(string s); //To create a symbol pointer with all the initializations with given name string s

/***********************************************************************/
//definition of a symbol table class
class symbolTable
{
     public:
	 std::vector<Symbol*> symbols; //The vector will contain the pointers of all the symbol items
	 int tempcount; //The count of temporaries in the symbol table
	 int param; //The number of parameters in case of a function
	 symbolTable* parent; //The parent symbolTable if it has been declared from global
	 
	//constructor
	symbolTable(); 
	//methods

	//The lookup method
	Symbol*  lookup(string name); //Will lookup a name for its existence in symbol table and return its pointer
	//If the name is not present, it will create the symbol with that name
	//The gentemp method
	Symbol* gentemp(); //The method to generate new temporary symbol and return its pointer

	//The update field
	void update(); //It will update the size and offset of all the symbols in symbol table

	void print();//It will print all the symbols of the symbol table in a nice tabular format
};

string printArrayType(Type *t);  //a global function helpful to print an array in the format given in slides
string printPointerType(Type *t);//a global function helpful to print a pointer in the format given in slides

/***********************************************************************/

//The class storing the quad values
class Quad
{
	public:
	opCode op; //the opcode 
	string arg1;//argument 1
	string arg2;//argument 2
	string result;//the result 

	public:
	Quad(){} //constructor
	void print(); //print a quad based on opCode
	void update(string);//Updates the result field of quad class. Used for backpatching
};

Quad* createQuad(opCode op,string s,string s2); //Create a Quad pointer with opCode = op,result = s,arg1 =s2
Quad* createQuad(opCode op,string s,string s1,string s2);//Create a Quad pointer with opCode = op,result = s,arg1 =s1,arg2 = s2
Quad* createQuad(opCode op,string s);//Create a Quad pointer with opCode = op,result = s

//The global functions to emit quad based on the instrucitons given
void emit(opCode,string,string,string); //emit a quad, add it to quad vector
void emit(opCode,string,string); //emit a quad, add it to quad vector
void emit(opCode,string);//emit a quad, add it to quad vector

/**************************************************************************/
//The expression attributes

//It is an important structure as it will be used to handle types for statements and expressions
typedef struct Expression
{
	Symbol* loc; //the location of symbol table pointer
	Type* type; //the type of symbol
	list<int>* truelist; //In case of boolean it is used
	list<int>* falselist; //Again used in case of boolean operators
	list<int>* nextlist; //This is used in statements for having a nextlist of dangling quads
	int array_oc; //Will determine whether it is an array
	int int_val;  //Stores the int_val of the constant, useful for array width computation
	double double_val;//although not used but can be used for initialization if needed
	string char_val;
	int isPointer;//checks whether the given expression is of pointer type or not.
	//The expression constructor and initialization
	Expression()
	{
		loc = 0;
		type = createType(_VOID);
		truelist = 0;
		falselist = 0;
		nextlist = 0;
		array_oc = 0;
		isPointer = 0;
	}
}expression;

/**************************************************************************/
// Some utility types declaration
//As enum was not suppported inside union, so I used this for unary operators.
typedef struct opPointer
{
	opCode op;
}opPointer;
// Used to discern the function table and make the type for augmenting variable F
typedef struct funcPointer
{
	symbolTable* symTabP;
	funcPointer()
	{
		symTabP=0;
	}
}funcPointer;

//Very important type to create a list of arguments, to be passed to the function
typedef struct arg_list
{
	list<expression*> *args;//A list of expression pointers to store the pointers
	int number;
	arg_list()//constructor
	{
		args=0;
		number=0;
	}
}arg_list;

list<expression*>* makelistArgs(expression *i); //To make a new arglist with given expression pointer
list<expression*>* mergeArgs(list<expression*>* L1, list<expression*>* L2);//merge two different argument lists

/*************************************************************************************************/
//global function declarations will be here

list<int>* makelist(int i); //Used for makint a list with given int

list<int>* merge(list<int>* l1,list<int>* l2); //merge two list pointers

void backpatch(list<int>* l1, int i); //backpatch int i to the result of all the quads' indices present in the List pointer L

void typecheck(expression* expr1, expression* expr2);//To check the two expressions for their type and convert to right type if the need arises

void conv2bool(expression *e); //convert a non boolean expression to boolean type using if condition

// Create a temp variable and assign it value according to relational statement given
// Also generate the truelist and falselist
expression* relationEvaluate(opCode op,expression *e1,expression *e2);

//Convert an expression from one type to another by generating proper conversion functions and adjusting the same in expression pointer
expression* convert(expression *t, type_enum targetcode);


//The following utility funcitons are used to convert a given type to string
string to_string(int x);
string to_string(double x);
string to_string(char x);
string to_string(string x);

//Reverse a list of Type* , very helpful in case of arrays
void reverse(Type** head_ref);