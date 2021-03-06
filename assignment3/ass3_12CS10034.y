
%{
    #include <stdio.h>
   	void yyerror(const char*);
    extern int yylex(void);
 %}

%union{
	int intval;
	char* cval;
	float fval;
	char* sval;
	char* id;
}

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN
%token FLOAT FOR GOTO IF INLINE INT LONG REGISTER RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH
%token TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE BOOL COMPLEX IMAGINARY
%token <id>IDENTIFIER 
%token <intval>INTEGER_CONSTANT 
%token <fval>FLOATING_CONSTANT 
%token ENUMERATION_CONSTANT 
%token <cval>CHARACTER_CONSTANT 
%token <ival>STRING_LITERAL
%token POINTER INCREMENT DECREMENT LEFT_SHIFT_OP RIGHT_SHIFT_OP LESS_THAN_EQUAL_TO GREATER_THAN_EQUAL_TO
%token EQUALS_TO NOT_EQUALS_TO AND_OP OR_OP ELLIPSIS ASSIGN_OP MULT_ASSIGN DIV_ASSIGN MOD_ASSIGN SUM_ASSIGN
%token SUBTRACT_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN SINGLE_LINE_COMMENT

%%
start:;
%%
void yyerror(const char* s)
{
	printf("%s",s);
}