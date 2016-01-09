#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip> 
#include "y.tab.h"
#include "ass6_12CS10034_translator.h"
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
extern symbolTable *external;
extern int labelcount;
extern int stringcount;
extern std::vector<label> labelTable;

int main()
{
	//yydebug = 1;

	//Make the function entries for the external Library
	createExternalTable();

	//parse the input file
	yyparse();

	global->update();//update the symbol tables with types and offsets
	createLabelTable(quadVector);//Create the labels for all the target quad indices

	//Uncomment These lines to see the symbol table
/*
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

	external->print();
*/

	//Set the appropriate offset values for all the symbols
	global->createMemoryBinding();


	//Uncomment following lines to see the symbol table with appropriate offsets


	for(int i=0;i<global->symbols.size();i++)
	{
		if(global->symbols[i]->symTabPointer!=NULL)
		{	

			/*cout<<std::setw(35)<<"****************************** "<<std::setw(10)<<global->symbols[i]->name<<std::setw(40)<<" SYMBOL TABLE **********************************"<<endl;
			cout<<std::setw(90)<<"---------------------------------------------------------------------------------------"<<endl;
			cout << std::setw(15) << "Symbol Name";
			cout << std::setw(30) << "Symbol Type";
			cout << std::setw(15) << "Initial Value";
			cout << std::setw(10) << "Size";
			cout << std::setw(10) << "Offset";
			cout << std::setw(20) << "function pointer"<<endl;*/
			global->symbols[i]->symTabPointer->createMemoryBinding();
			/*global->symbols[i]->symTabPointer->print();//call print function for nested function
			cout<<std::setw(90)<<"---------------------------------------------------------------------------------------"<<endl;
			cout<<endl;*/
		}
	}
	//cout<<endl<<endl;

	//Uncomment followig lines to see the quads being printed

	//print the vector of quads
/*	for(int i=0;i<quadVector.size();i++)
	{
		cout<< i<<") ";
		quadVector[i]->print();
	}

	cout<<endl<<endl;*/

	//To view the labelTable, uncommment the following function

	/*printLabelTable();
	cout<<endl<<endl;*/

	//Printing the assembly code
	//The string part of the code
	cout<<".data\n ";
	createStringLabel();
	cout<<endl;

	//The text part of the code
	cout<<".text\n ";
	symTab = global;//setting the symbol table to the global table
	for(int i=0;i<quadVector.size();i++)
	{
		quadVector[i]->printAssembly(i);
	}

	//all assembly instructions printed
}