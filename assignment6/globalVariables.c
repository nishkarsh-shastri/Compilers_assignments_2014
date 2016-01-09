#include "ass6_12CS10034_translator.h"
#include <iostream>
using namespace std;


std::vector<Quad*> quadVector;//the vector of quads
int quadPointer=0;//will store the number of quads

symbolTable *global = new symbolTable();//the global symbol table class pointer
symbolTable *external = new symbolTable();
symbolTable *symTab = global;//symTab will always point to current symbol table
Type *globalType; //The globalType, it is used to update the types
Symbol *curSym = 0;//The curSym pointer, used for efficient handling of fucntions
string array_name;//The array_name, used as a base address in case of arrays, makes it easier to implement
int labelcount = 1;//It will help us to keep track of number of labels used for target statement
int stringcount = 1;//It will help us create the string label
std::vector<label> labelTable; //A label table vector.


	
