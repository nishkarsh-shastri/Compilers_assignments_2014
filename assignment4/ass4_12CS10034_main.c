#include <stdio.h>
#include "y.tab.h"
extern int yylex();
extern int yydebug;
int main()
{
	yydebug=1;
	//This will print all the grammar rules matched with current file.
	yyparse();
}