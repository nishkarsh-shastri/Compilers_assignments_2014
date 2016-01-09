#include <stdio.h>
#include "y.tab.h"
extern int yylex();

int main()
{
	int token;
	while(token=yylex())
	{
		switch(token)
		{
			case AUTO:					printf("<keyword,auto> ");break;
			case BREAK:					printf("<keyword,break> ");break;
			case CASE:					printf("<keyword,case> ");break;
			case CHAR:					printf("<keyword,char> ");break;
			case CONST:					printf("<keyword,const> ");break;
			case CONTINUE:				printf("<keyword,continue> ");break;
			case DEFAULT:				printf("<keyword,default> ");break;
			case DO:					printf("<keyword,do> ");break;
			case DOUBLE:				printf("<keyword,double> ");break;
			case ELSE:					printf("<keyword,else> ");break;
			case ENUM:					printf("<keyword,enum> ");break;
			case EXTERN:				printf("<keyword,extern> ");break;
			case FLOAT:					printf("<keyword,float> ");break;
			case FOR:					printf("<keyword,for> ");break;
			case GOTO:					printf("<keyword,goto> ");break;
			case IF:					printf("<keyword,if> ");break;
			case INLINE:				printf("<keyword,inline> ");break;
			case INT:					printf("<keyword,int> ");break;
			case LONG:					printf("<keyword,long> ");break;
			case REGISTER:				printf("<keyword,register> ");break;
			case RESTRICT:				printf("<keyword,restrict> ");break;
			case RETURN:				printf("<keyword,return> ");break;
			case SHORT:					printf("<keyword,short> ");break;
			case SIGNED:				printf("<keyword,signed> ");break;
			case SIZEOF:				printf("<keyword,sizeof> ");break;
			case STATIC:				printf("<keyword,static> ");break;
			case STRUCT:				printf("<keyword,struct> ");break;
			case SWITCH:				printf("<keyword,switch> ");break;
			case TYPEDEF:				printf("<keyword,typedef> ");break;
			case UNION:					printf("<keyword,union> ");break;
			case UNSIGNED:				printf("<keyword,unsigned> ");break;
			case VOID:					printf("<keyword,void> ");break;
			case VOLATILE:				printf("<keyword,volatile> ");break;
			case WHILE:					printf("<keyword,while> ");break;
			case BOOL:					printf("<keyword,_bool> ");break;
			case IMAGINARY:				printf("<keyword,_imaginary> ");break;
			case COMPLEX:				printf("<keyword,_complex> ");break;


			case IDENTIFIER:			printf("<identifier,%s> ",yylval.id);break;


			case INTEGER_CONSTANT:		printf("<int_constant,%d > ",yylval.intval );break;
			case FLOATING_CONSTANT:		printf("<float_constant, %f > ",yylval.fval);break;
			case ENUMERATION_CONSTANT:	printf("<enum_constant,enum > ");break;
			case CHARACTER_CONSTANT:	printf("<char_constant,%s > ",yylval.cval);break;

			case STRING_LITERAL:		printf("<stringliteral,%s > ",yylval.sval);break;

			case '[' :					printf("<punctuator,'['> ");break;
			case ']' :					printf("<punctuator,']'> ");break;
			case '(' :					printf("<punctuator,'('> ");break;
			case ')' :					printf("<punctuator,')'> ");break;
			case '{' :					printf("\n<punctuator,'{'> \n");break;
			case '}' :					printf("\n<punctuator,'}'> \n");break;
			case '.' :					printf("<punctuator,'.'> ");break;
			case POINTER :				printf("<punctuator,'->'> ");break;
			case INCREMENT :			printf("<punctuator,'++'> ");break;
			case DECREMENT :			printf("<punctuator,'--'> ");break;
			case '&' :					printf("<punctuator,'&'> ");break;
			case '*' :					printf("<punctuator,'*'> ");break;
			case '+' :					printf("<punctuator,'+' ");break;
			case '-' :					printf("<punctuator,'-'> ");break;
			case '~' :					printf("<punctuator,'~'> ");break;
			case '!' :					printf("<punctuator,'!'> ");break;
			case '/' :					printf("<punctuator,'/'> ");break;
			case '%' :					printf("<punctuator,percentage >  ");break;
			case LEFT_SHIFT_OP :		printf("<punctuator,'<<'> ");break;
			case RIGHT_SHIFT_OP :		printf("<punctuator,'>>'> ");break;
			case '<' :					printf("<punctuator,'<'> ");break;
			case '>' :					printf("<punctuator,'>'> ");break;
			case LESS_THAN_EQUAL_TO:	printf("<punctuator,'<='> ");break;
			case GREATER_THAN_EQUAL_TO:	printf("<punctuator,'>='> ");break;
			case EQUALS_TO :			printf("<punctuator,'=='> ");break;
			case NOT_EQUALS_TO :		printf("<punctuator,'!='> ");break;
			case '^' :					printf("<punctuator,'^'> ");break;
			case '|' :					printf("<punctuator,'|'> ");break;
			case AND_OP :				printf("<punctuator,'&&'> ");break;
			case OR_OP :				printf("<punctuator,'||'> ");break;
			case '?' :					printf("<punctuator,'?'> ");break;
			case ':' :					printf("<punctuator,':'> ");break;
			case ';' :					printf("<punctuator,';'> \n");break;
			case ELLIPSIS :				printf("<punctuator,'...'> ");break;
			case ASSIGN_OP :			printf("<punctuator,'='> ");break;
			case MULT_ASSIGN :			printf("<punctuator,'*='> ");break;
			case DIV_ASSIGN :			printf("<punctuator,'/='> ");break;
			case MOD_ASSIGN :			printf("< punctuator,mod_assign > ");break;
			case SUM_ASSIGN :			printf("<punctuator,'+='> ");break;
			case SUBTRACT_ASSIGN :		printf("<punctuator,'-='> ");break;
			case LEFT_ASSIGN :			printf("<punctuator,'<<='> ");break;
			case RIGHT_ASSIGN :			printf("<punctuator,'>>='> ");break;
			case AND_ASSIGN :			printf("<punctuator,'&='> ");break;
			case XOR_ASSIGN :			printf("<punctuator,'^='> ");break;
			case OR_ASSIGN :			printf("<punctuator,'|='> ");break;
			case ',' :					printf("<punctuator,','> ");break;
			case '#' :					printf("<punctuator,'#'> ");break;
			default : break;			
		}
	}
}