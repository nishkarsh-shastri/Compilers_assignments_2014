#include "ass5_12CS10034_translator.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <sstream>
#include <iomanip>  //the manipulation of cout done by this library


using namespace std;
//All the following variables are declared in globalVariables.c file
extern std::vector<Quad*> quadVector; 
extern int quadPointer;
extern symbolTable *global;
extern symbolTable *symTab;
extern Symbol* curSym;
extern Type *globalType;
extern string array_name;

/*******************************************************************/
//The function definitions for the functions associated with structure function

//It will create a type* of given type code along with its associated width
Type* createType(type_enum tcode)
{
	Type *t = new Type;
	(*t).type = tcode;
	(*t).width=getTypeSize(tcode);
	(*t).count = 1;
	t->next = NULL;
	return t;
}

// It will give the size associated with given type code
int getTypeSize(type_enum t)
{
	switch(t)
	{
		case _INT : return 4;
		case _CHAR : return 1;
		case _DOUBLE : return 8;
		case _POINTER : return 4;
		default: return 0;
	}
}
// It will give the name of type as string return type given a type code.
string getTypeID(type_enum t)
{
	switch(t)
	{
		case 0: return "void";
		case 1: return "char";
		case 2: return "int";
		case 3: return "double";
		case 4: return "bool";
		case 5: return "array";
		case 6: return "pointer";
		case 7: return "function";
	}
}

// It is useful in case of array and pointers to return the base type for them
Type* getBaseType(Type *t)
{
	Type *head = t;
	while(head->next!=NULL)
		head = head->next;
	return createType(head->type);
}



/*********************************************************************************************************************/
//To create a symbol pointer with all the initializations with given name string s
Symbol* createSymbol(string s)//Rest values are initialized
{
	Symbol* smb = new Symbol;
	smb->name = string(s);//assigning the name.
	smb->tableName = "0";
	smb->type = createType(_VOID);//Initially type void is given which is updated accordingly
	smb->init_value = "NULL";
	smb->size = 0;
	smb->offset = 0;
	smb->symTabPointer=0;
	return smb; //Return the pointer to symbol created
}

//It will change the give symbol type to the target type given in input
void updateSymbol(Symbol* symp,Type* t)
{
	//creating a copy of Type t, in case of pointer conflicts, i.e. change in pointer type
	symp->type = createType(t->type);
	Type *symType = symp->type;
	Type *temp = t;
	symType->type = temp->type;
	symType->width = temp->width;
	temp = temp->next;
	while(temp!=NULL)//creating the complete copy
	{
		symType->next = createType(temp->type);
		symType=symType->next;
		symType->width = temp->width;
		temp=temp->next;
	}	
}
//Updates the initial value of a symbol
void updateSymbolInitVal(Symbol *s,string val)
{
	s->init_value=val;
}
/********************************************************************************************************************/
//The functions and methods associated with symbol table
//The constructor
symbolTable::symbolTable()
{
	symbols.clear();
	tempcount=0;
	parent = NULL;
	param = 0;
}

//The lookup function will return the symbol* for given string if it is present
//else will create it and then return the pointer to created symbol
Symbol* symbolTable::lookup(string s){
	int i=0;
	int j=0;
	Symbol* temp_symbol;
	for(i=0;i<symbols.size();i++){
		if(symbols[i]->name.compare(s)==0)//searching in present table
			{
				return symbols[i];
			}
	}
	//In case of global declarations
	for(j=0;j<global->symbols.size();j++){
		if(global->symbols[j]->name.compare(s)==0)//searching in global table
			{
				return global->symbols[j];
			}
	}
	//generate the new symbol
	if(i<MAX_SYMBOLS){
		temp_symbol=createSymbol(s);//creating a symbol of that name
		symbols.push_back(temp_symbol);	//add it to vector	
		return symbols[i]; //return the pointer
	}
	cerr<<"Too many symbols"<<endl;//capacity exceeded
	return 0;
}

//The function to generate temporary, add it to symbol table and return its pointer
Symbol* symbolTable::gentemp(){
	char temp[10];
	sprintf(temp,"_tmp%03d",tempcount);//create the temporary name
	tempcount++;//add the temporary count
	Symbol* ptr=lookup(temp);//add it to table
	return ptr;//return the pointer
}

//The function to print a symbol table
void symbolTable::print()
{
	for(int i=0;i<symbols.size();i++)
	{
		cout << std::setw(15) << symbols[i]->name; //the text formatting is done using setw()
		if(symbols[i]->type->type==_ARRAY) //Case when array is present, then we have to print in the perfect format
		{
			//reversing for ease of output format
			
			cout<<std::setw(30)<<printArrayType(symbols[i]->type);//Calling the function to print in the format wanted
			
			//removing any effect of reversing
		}
		else if(symbols[i]->type->type==_POINTER)
		{
			cout<<std::setw(30)<<printPointerType(symbols[i]->type);//handling case of pointers 
		}
		else
			cout << std::setw(30) << getTypeID(symbols[i]->type->type);//else print directly
		cout << std::setw(10) << symbols[i]->init_value;
		cout << std::setw(10) << symbols[i]->size;
		cout << std::setw(10) << symbols[i]->offset;

		if(symbols[i]->symTabPointer!=NULL)//having a nested function
		{
			cout << std::setw(20)<<"function-ST"<<endl;
		}
		else //no nested function
		{
			cout << std::setw(20)<<"NULL"<<endl;
		}
	}
}

//To update the types and offset of all the tables.
void symbolTable::update()
{
	int offset = 0;//initial offset
	for(int i=0;i<symbols.size();i++)
	{
		/* This condition is written based on my implementation of arrays, in case of type of temporaray being an array
		which happens when I use more than one dimensional array, then I will update the type of my temporary by this condition at the end.
		Note that it doesn't make any difference during computations.
		*/
		if(symbols[i]->name[0]=='_' && symbols[i]->name[1]=='t' && symbols[i]->name[2]=='m' && symbols[i]->name[3]=='p' && symbols[i]->type->type ==_ARRAY)
		{
			symbols[i]->type = createType(_INT);
		}

		int width = symbols[i]->type->width;
		symbols[i]->size = width;//updating the size
		symbols[i]->offset = offset;//updating the offset
		offset+=width;//increasing the offset
		if(symbols[i]->symTabPointer!=NULL)
		{
			symbols[i]->symTabPointer->update(); //calling the same function for nested function
		}
	}
}

//The following function will print array in format given in slides
//The following function will print array in format given in slides
string printArrayType(Type *t)
{
	Type* head = t;
	string s;
	if(head->type==_ARRAY)
	{
		s="array(";
		s.append(to_string(head->count));
		s.append(", ");
		s.append(printArrayType(head->next));//recursive call
		s.append(")");
	}
	else
	{
		s=getTypeID(head->type);
	}
	return s;

}
//The following function will print pointer in format given in slides
string printPointerType(Type *t)
{
	Type* head = t;
	string s;
	if(head->type==_POINTER)
	{
		s="pointer(";
		s.append(printPointerType(head->next));//recursive call
		s.append(")");
	}
	else
	{
		s=getTypeID(head->type);
	}
	return s;

}


/********************************************************************************************************************/

//Simple funciton to change to result to target string label
void Quad::update(string label)
{
	result = label;
}

//It will print the quads based on op code. The code below is self explanatory
void Quad::print()
{
	switch(op)
	{
		case PLUS:
		{
			cout<<result<<" = "<<arg1<<" + "<<arg2<<endl;
			break;
		}
		case MINUS:
		{
			cout<<result<<" = "<<arg1<<" - "<<arg2<<endl;
			break;
		}
		case MULT:
		{
			cout<<result<<" = "<<arg1<<" * "<<arg2<<endl;
			break;
		}
		case DIVIDE:
		{
			cout<<result<<" = "<<arg1<<" / "<<arg2<<endl;
			break;
		}
		case MODULUS:
		{
			cout<<result<<" = "<<arg1<<" % "<<arg2<<endl;
			break;
		}
		case LOGICAL_AND:
		{
			cout<<result<<" = "<<arg1<<" && "<<arg2<<endl;
			break;
		}
		case LOGICAL_OR:
		{
			cout<<result<<" = "<<arg1<<" || "<<arg2<<endl;
			break;
		}
		case LESS_THAN:
		{
			cout<<"if "<<arg1<<"<"<<arg2<<" goto "<<result<<endl;
			break;
		}
		case GREATER_THAN:
		{
			cout<<"if "<<arg1<<">"<<arg2<<" goto "<<result<<endl;
			break;
		}
		case LESS_THAN_EQUAL:
		{
			cout<<"if "<<arg1<<"<="<<arg2<<" goto "<<result<<endl;
			break;
		}
		case GREATER_THAN_EQUAL:
		{
			cout<<"if "<<arg1<<">="<<arg2<<" goto "<<result<<endl;
			break;
		}
		case EQUAL_TO:
		{
			cout<<"if "<<arg1<<"=="<<arg2<<" goto "<<result<<endl;
			break;
		}
		case NOT_EQUAL_TO:
		{
			cout<<"if "<<arg1<<"!="<<arg2<<" goto "<<result<<endl;
			break;
		}
		case LEFT_SHIFT:
		{
			cout<<result<<" = "<<arg1<<"<<"<<arg2<<endl;
			break;
		}
		case RIGHT_SHIFT:
		{
			cout<<result<<" = "<<arg1<<">>"<<arg2<<endl;
			break;
		}
		case UMINUS:
		{
			cout<<result<<" = "<<"-"<<arg1<<endl;
			break;
		}
		case UPLUS:
		{
			cout<<result<<" = "<<"+"<<arg1<<endl;
			break;
		}
		case UPOINTER:
		{
			cout<<result<<" = "<<"*"<<arg1<<endl;
			break;
		}
		case UADDRESS:
		{
			cout<<result<<" = "<<"&"<<arg1<<endl;
			break;
		}
		case UNEGATION:
		{
			cout<<result<<" = "<<"!"<<arg1<<endl;
			break;
		}
		case UBITNEGATION:
		{
			cout<<result<<" = "<<"~"<<arg1<<endl;
			break;
		}
		case BIT_AND:
		{
			cout<<result<<" = "<<arg1<<" & "<<arg2<<endl;
			break;
		}
		case BIT_XOR:
		{
			cout<<result<<" = "<<arg1<<" ^ "<<arg2<<endl;
			break;
		}
		case BIT_OR:
		{
			cout<<result<<" = "<<arg1<<" | "<<arg2<<endl;
			break;
		}
		case COPY:
		{
			cout<<result<<" = "<<arg1<<endl;
			break;
		}
		case ARRAYRIGHT:
		{
			cout<<result<<" = "<<arg1<<"["<<arg2<<"]"<<endl;
			break;
		}
		case ARRAYLEFT:
		{
			cout<<result<<"["<<arg1<<"]"<<" = "<<arg2<<endl;
			break;
		}
		case _goto:
		{
			cout<<"goto "<<result<<endl;
			break;
		}
		case _if:
		{
			cout<<"if ("<<arg1<<")"<<" goto "<<result<<endl;
			break;
		}
		case PARAM:
		{
			cout<<"param "<<result<<endl;
			break;
		}
		case CALL:
		{
			cout<<result<<" = "<<"call "<<arg1<<", "<<arg2<<endl;
			break;
		}
		case _RETURN:
		{
			if(result.compare("NULL")==0)
			{
				cout<<"return"<<endl;
			}
			else
				cout<<"return "<<result<<endl;
			break;
		}
		case inttobool:
		{
			cout<<result<<" = "<<"inttobool("<<arg1<<")"<<endl;
			break;
		}
		case inttodbl:
		{
			cout<<result<<" = "<<"inttodbl("<<arg1<<")"<<endl;
			break;
		}
		case chartodbl:
		{
			cout<<result<<" = "<<"chartodbl("<<arg1<<")"<<endl;
			break;
		}
		case dbltoint:
		{
			cout<<result<<" = "<<"dbltoint("<<arg1<<")"<<endl;
			break;
		}
		case chartoint:
		{
			cout<<result<<" = "<<"chartoint("<<arg1<<")"<<endl;
			break;
		}
		case dbltochar:
		{
			cout<<result<<" = "<<"dbltochar("<<arg1<<")"<<endl;
			break;
		}
		case intTochar:
		{
			cout<<result<<" = "<<"inttochar("<<arg1<<")"<<endl;
			break;
		}
		case ENDPROGRAM:
		{
			cout<<"END of PROGRAM"<<endl;
			break;
		}
		case FUNCTION_OP:
		{
			cout<<" FUNCTION "<<result<<":"<<endl;
		}
	}
}

//Following codes create a quad pointer based on inputs given.
Quad* createQuad(opCode op,string s,string s2){
	Quad *p = new Quad;
	p->op= op;
	p->result=s;
	p->arg1 = s2;
	p->arg2 = "NULL";
	return p;
}

Quad* createQuad(opCode op,string s,string s1,string s2){
	Quad *p = new Quad;
	p->op= op;
	p->result=s;
	p->arg1 = s1;
	p->arg2 = s2;
	return p;
}

Quad* createQuad(opCode op,string s)
{
	Quad *p=new Quad;
	p->op= op;
	p->result=s;
	p->arg1 = "NULL";
	p->arg2 = "NULL";
	return p;
}



/********************************************************************************************************************/

//Emit function will create a quad pointer and add it to the quadvector and increment the count of quadpointer

void emit(opCode op,string res,string s1,string s2)
{
	Quad *new_quad = createQuad(op,res,s1,s2);
	quadVector.push_back((new_quad));
	quadPointer++;
}


void emit(opCode op,string res,string s1)
{
	Quad *new_quad = createQuad(op,res,s1);
	quadVector.push_back(new_quad);
	quadPointer++;
}

void emit(opCode op,string res)
{
	Quad *new_quad = createQuad(op,res);
	quadVector.push_back(new_quad);
	quadPointer++;
}




/********************************************************************************************************************/

//The backpatch function to backpatch given value to all the target quadpointers
void backpatch(list<int>* L, int target)
{
	if(L!=NULL)//If L ==NUll then no action will take place
	for(list<int>::iterator it = (*L).begin();it != (*L).end(); ++it){
		int index = *it;
		string res = to_string(target);
		quadVector[index]->update(res);
	}
}

//Will make a list of integer with index i and return the pointer to that list
list<int>* makelist(int i){
	list<int>* ptr = new list<int>(1,i);
	return ptr;
}

//Will merge to lists given their pointers and will return pointer to the merged list
list<int>* merge(list<int>* L1, list<int>* L2)
{
	list<int>* L;
	
	if(L2!=NULL && L1!=NULL)
	{
		L = L1;
		(*L).merge(*L2);

	}
	else
	{
		if(L1==NULL && L2!=NULL)
		{
			L = L2;
		}
		else if(L1!=NULL && L2==NULL)
		{
			L = L1;
		}
		else
		{
			L = NULL;
		}
	}	
	return L;
}
/*********************************************************************/

//It will make a list of arguments i.e. will make a list of expression pointers to be used during taking function argument/parameters
list<expression*>* makelistArgs(expression *i){
	list<expression*>* ptr = new list<expression*>(1,i);
	return ptr;
}
//Merge function. Similar as merge of list of integers.
list<expression*>* mergeArgs(list<expression*>* L1, list<expression*>* L2)
{
	list<expression*>* L;
	
	if(L2!=NULL && L1!=NULL)
	{
		L = L1;
		(*L).merge(*L2);

	}
	else
	{
		if(L1==NULL && L2!=NULL)
		{
			L = L2;
		}
		else if(L1!=NULL && L2==NULL)
		{
			L = L1;
		}
		else
		{
			L = NULL;
		}
	}	
	return L;
}
/*********************************************************************/

//The following function will check the type of two expressions pointers
//if they are not of the same type, then it would convert them according to the higher width type
void typecheck(expression* expr1, expression* expr2){

	if(expr1->loc->type->type!=_BOOL && expr2->loc->type->type!=_BOOL)//None of the expressions are boolean
	{
		if(expr1->loc->type->type != expr2->loc->type->type){//their type is not same
			if(expr1->loc->type->type > expr2->loc->type->type){
			//convert expr2 to the type of expr1 by generating a temporary and calling proper conversion function of the machine
				expression *temp = new expression;
				temp = convert(expr2,expr1->loc->type->type);			
				expr2->truelist = 0;
				expr2->falselist = 0;
			}
			else{
			//convert expr1 to the type of expr1 by generating a temporary and calling proper conversion function of the machine
				expression *temp = new expression;
				temp = convert(expr1,expr2->loc->type->type);					
				expr1->truelist = 0;
				expr1->falselist = 0;			
			}
		}
	}
	else
	{
		// In case of bool type, convert it to int after proper backpatching to the lists
		if(expr1->loc->type->type==_BOOL)
		{
			backpatch(expr1->truelist,quadPointer);//backpatching the next quads
			backpatch(expr1->falselist,quadPointer);//backpatching the next quads
			updateSymbol(expr1->loc,createType(_INT));//changing type
			expr1->type = createType(_INT);
			typecheck(expr1,expr2);//call typecheck on new expression
		}
		if(expr2->loc->type->type==_BOOL)//similar as above
		{
			backpatch(expr2->truelist,quadPointer);
			backpatch(expr2->falselist,quadPointer);
			updateSymbol(expr2->loc,createType(_INT));
			expr2->type = createType(_INT);
			typecheck(expr1,expr2);//call typecheck on new expression
		}

	}
}

//The function will generate a temporary which will have the casted value of the symbol.
//The expression pointer will start pointing to the new location to have the consistency during binary operations
expression* convert(expression *t, type_enum targetcode)
{
	expression* temp = new expression;
	Type *tp = createType(targetcode);
	temp->loc = symTab->gentemp();//new temporary
	updateSymbol(temp->loc,tp);//update type
	temp->type = tp;	

	if(t->type->type == _INT && targetcode == _DOUBLE){
		emit(inttodbl,temp->loc->name,t->loc->name);//function calling for machine
		t->loc = temp->loc;//change the expression pointer
		t->type = temp->type;//change its type
		return temp;
	}
	//The rest of the statements follow the same methodology as above
	if(t->loc->type->type == _CHAR && targetcode == _DOUBLE){
		emit(chartodbl,temp->loc->name,t->loc->name);
		t->loc = temp->loc;
		t->type = temp->type;
		return temp;
	}
	if(t->loc->type->type == _DOUBLE && targetcode == _INT){
		emit(dbltoint,temp->loc->name,t->loc->name);
		t->loc = temp->loc;
		t->type = temp->type;
		return temp;
	}
	if(t->loc->type->type == _CHAR && targetcode == _INT){
		emit(chartoint,temp->loc->name,t->loc->name);
		t->loc = temp->loc;
		t->type = temp->type;
		return temp;
	}
	if(t->loc->type->type == _DOUBLE && targetcode == _CHAR){
		emit(dbltochar,temp->loc->name,t->loc->name);
		t->loc = temp->loc;
		t->type = temp->type;
		return temp;
	}
	if(t->loc->type->type == _INT && targetcode == _CHAR){
		emit(intTochar,temp->loc->name,t->loc->name);
		t->loc = temp->loc;
		t->type = temp->type;
		return temp;
	}
	if(t->loc->type->type == _BOOL && targetcode == _INT){
		cout<<"Exe"<<endl;
		backpatch(t->truelist,quadPointer);
		backpatch(t->falselist,quadPointer);
		t->type = temp->type;
		updateSymbol(t->loc,temp->type);
		return temp;
	}
	return 0;
}

//This is a simple function which will convert a given expression into bool using if statements
void conv2bool(expression *e)
{
	if(((e->loc)->type)->type!=_BOOL){
		e->truelist = makelist(quadPointer);//the truelist
		e->falselist = makelist(quadPointer+1);//the falselist
		emit(_if,"---",(e->loc)->name,"0");
		emit(_goto,"---");
	}
}


//*********************************************utility*************************************************************************//


//For all the relational operations this function is called
//Its working is simple: It will create a boolean type temporary which will be having truelist and falselist
//More over if the temporary is getting true then we have assigned it to 1 for ease in further calcualtions with arithmetic operators
//else for false condition, it will first assign temporary as 0 then generate the falselist
expression* relationEvaluate(opCode op,expression *e1,expression *e2)
{
	list<int>* L1 = new list<int>(1,quadPointer);
	list<int>* L2 = new list<int>(1,quadPointer+1);
	emit(op,"---",e1->loc->name,e2->loc->name);//it will be the conditional check
	emit(_goto,"---");//for false condition
	backpatch(L1,quadPointer);//the next will be evaluated in case of expression being true
	expression *e = new expression;
	e->loc = symTab->gentemp();
	e->type = createType(_BOOL);
	updateSymbol(e->loc,e->type);
	emit(COPY,e->loc->name,"1");//true assignment
	e->truelist = makelist(quadPointer);
	emit(_goto,"---");//the truelist generated
	backpatch(L2,quadPointer);//the false condition
	emit(COPY,e->loc->name,"0");//false assignment
	e->falselist = makelist(quadPointer);
	emit(_goto,"---");//falselist generated
	return e;//return the resultant bool expression
}

//following are the self explanatory codes of overloaded functions to_string()
string to_string(int x)
{
	char str[15];
	sprintf(str, "%d", x);
	string s(str);
	return s;
}
string to_string(double x)
{
	char str[15];
	sprintf(str, "%lf", x);
	string s(str);
	return s;
}
string to_string(char x)
{
	char str[5];
	sprintf(str, "%c", x);
	string s(str);
	return s;
}
string to_string(string x)
{
	return x;
}

//To reverse a list of type pointers
//Useful in case of handling of arrays

void reverse(Type** head_ref)
{
    struct Type* prev   = NULL;
    struct Type* current = *head_ref;
    struct Type* next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    *head_ref = prev;
}


