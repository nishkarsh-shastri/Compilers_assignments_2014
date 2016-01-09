#include "ass5_12CS10034_translator.h"
#include <iostream>
using namespace std;


std::vector<Quad*> quadVector;//the vector of quads
int quadPointer=0;//will store the number of quads

symbolTable *global = new symbolTable();//the global symbol table class pointer
symbolTable *symTab = global;//symTab will always point to current symbol table
Type *globalType; //The globalType, it is used to update the types
Symbol *curSym = 0;//The curSym pointer, used for efficient handling of fucntions
string array_name;//The array_name, used as a base address in case of arrays, makes it easier to implement