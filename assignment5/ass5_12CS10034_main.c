#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip> 
#include "y.tab.h"
#include "ass5_12CS10034_translator.h"
using namespace std;
extern int yylex();
extern int yydebug;
extern std::vector<Quad*> quadVector;
extern int quadPointer;
extern symbolTable *global;
extern symbolTable *symTab;
extern Symbol* curSym;
extern Type *globalType;
extern Symbol *curSym;
extern string array_name;
extern int side;
using namespace std;
extern Quad* q;

int main()
{
	//parse the input file
	yyparse();
	
	global->update();//update the symbol tables with types and offsets
	//Print the symbol table in nice format
	cout<<std::setw(90)<<"******************************** GLOBAL SYMBOL TABLE **********************************"<<endl;
	cout<<std::setw(90)<<"---------------------------------------------------------------------------------------"<<endl;
	cout << std::setw(15) << "Symbol Name";
	cout << std::setw(30) << "Symbol Type";
	cout << std::setw(15) << "Initial Value";
	cout << std::setw(10) << "Size";
	cout << std::setw(10) << "Offset";
	cout << std::setw(20) << "function pointer"<<endl;
	global->print();//call print function
	cout<<std::setw(90)<<"---------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	for(int i=0;i<global->symbols.size();i++)
	{
		if(global->symbols[i]->symTabPointer!=NULL)
		{	

			cout<<std::setw(35)<<"****************************** "<<std::setw(10)<<global->symbols[i]->name<<std::setw(40)<<" SYMBOL TABLE **********************************"<<endl;
			cout<<std::setw(90)<<"---------------------------------------------------------------------------------------"<<endl;
			cout << std::setw(15) << "Symbol Name";
			cout << std::setw(30) << "Symbol Type";
			cout << std::setw(15) << "Initial Value";
			cout << std::setw(10) << "Size";
			cout << std::setw(10) << "Offset";
			cout << std::setw(20) << "function pointer"<<endl;
			global->symbols[i]->symTabPointer->print();//call print function for nested function
			cout<<std::setw(90)<<"---------------------------------------------------------------------------------------"<<endl;
			cout<<endl;
		}
	}
	cout<<endl<<endl;

	//print the vector of quads
	for(int i=0;i<quadVector.size();i++)
	{
		cout<< i<<") ";
		quadVector[i]->print();
	}

}