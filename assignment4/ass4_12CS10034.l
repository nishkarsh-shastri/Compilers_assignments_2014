%{
	#include "y.tab.h"
	extern void yyerror(const char *);
	static void comment();
%}

digit	 				[0-9]
letter					[a-zA-Z_]		
integer_constant 		[1-9][0-9]*
identifier				{letter}({letter}|{digit})*
exponent				[Ee][+-]?{digit}+
fractional_constant 	[0-9]*?"."[0-9]+|[0-9]+"."[0-9]*
floating_constant  		{fractional_constant}{exponent}?|{digit}+{exponent}
sign 					[+-]
enumeration_constant 	{letter}({digit}|{letter})*
escape_sequence			\\['"\?\\abfnrtv] 
character_constant		"\'"([^'\\\n]|{escape_sequence})"\'"
string_literal			"\""([^"\\\n]|{escape_sequence})+"\""
WS						[ \t\n]	
%%


"auto"					{ return(AUTO); }
"break"					{ return(BREAK); }
"case"					{ return(CASE); }
"char"					{ return(CHAR); }
"const"					{ return(CONST); }
"continue"				{ return(CONTINUE); }
"default"				{ return(DEFAULT); }
"do"					{ return(DO); }
"double"				{ return(DOUBLE); }
"else"					{ return(ELSE); }
"enum"					{ return(ENUM); }
"extern"				{ return(EXTERN); }
"float"					{ return(FLOAT); }
"for"					{ return(FOR); }
"goto"					{ return(GOTO); }
"if"					{ return(IF); }
"inline"				{ return(INLINE); }
"int"					{ return(INT); }
"long"					{ return(LONG);}
"register"				{ return(REGISTER); }
"restrict"				{ return(RESTRICT); }
"return"				{ return(RETURN); }
"short"					{ return(SHORT); }
"signed"				{ return(SIGNED); }
"sizeof"				{ return(SIZEOF); }
"static"				{ return(STATIC); }
"struct"				{ return(STRUCT); }
"switch"				{ return(SWITCH); }
"typedef"				{ return(TYPEDEF); }
"union"					{ return(UNION); }
"unsigned"				{ return(UNSIGNED); }
"void"					{ return(VOID); }
"volatile"				{ return(VOLATILE); }
"while"					{ return(WHILE); }
"_BOOL"					{ return(BOOL); }
"_COMPLEX"     			{ return(COMPLEX); }
"_IMAGINARY"			{ return(IMAGINARY); }

{identifier} 			{ return(IDENTIFIER);}
{integer_constant}		{ yylval.intval=atoi(yytext);return(INTEGER_CONSTANT);}
{floating_constant}		{ yylval.fval=atof(yytext);return (FLOATING_CONSTANT);}	 
{character_constant}	{ yylval.cval=yytext;return (CHARACTER_CONSTANT);} 
{string_literal} 		{yylval.sval=yytext;return(STRING_LITERAL);}

"["      				{ return('[');}
"]"      				{ return(']');}
"("      				{ return('(');}
")"      				{ return(')');}
"{"      				{ return('{');}
"}"      				{ return('}');}
"."      				{ return('.');}
"->"      				{ return(POINTER);}
"++"      				{ return(INCREMENT);}
"--"      				{ return(DECREMENT);}
"&"      				{ return('&');}
"*"      				{ return('*');}
"+"      				{ return('+');}
"-"      				{ return('-');}
"~"      				{ return('~');}
"!"      				{ return('!');}
"/"      				{ return('/');}
"%"      				{ return('%');}
"<<"      				{ return(LEFT_SHIFT_OP);}
">>"      				{ return(RIGHT_SHIFT_OP);}
"<"       				{ return('<');}
">"      				{ return('>');}
"<="      				{ return(LESS_THAN_EQUAL_TO);}
">="      				{ return(GREATER_THAN_EQUAL_TO);}
"=="      				{ return(EQUALS_TO);}
"!="      				{ return(NOT_EQUALS_TO);}
"^"      				{ return('^');}
"|"      				{ return('|');}
"&&"      				{ return(AND_OP);}
"||"      				{ return(OR_OP);}
"?"      				{ return('?');}
":"      				{ return(':');}
";"      				{ return(';');}
"..."      				{ return(ELLIPSIS);}
"="      				{ return(ASSIGN_OP);}
"*="      				{ return(MULT_ASSIGN);}
"/="      				{ return(DIV_ASSIGN);}
"%="      				{ return(MOD_ASSIGN);}
"+="      				{ return(SUM_ASSIGN);}
"-="      				{ return(SUBTRACT_ASSIGN);}
"<<="      				{ return(LEFT_ASSIGN);}
">>="      				{ return(RIGHT_ASSIGN);}
"&="      				{ return(AND_ASSIGN);}
"^="      				{ return(XOR_ASSIGN);}
"|="      				{ return(OR_ASSIGN);}
","      				{ return(',');}
"#"      				{ return('#');}
"/*"					{comment();}
"//"[^\n]*				{}
{WS}					{}
.						{}

%%
static void comment()
{
	int c;
	while((c=input())!= -1)
	{
		if(c=='*')
		{
			while((c=input())=='*');
			if(c == '/')
				return;
			if(c==-1)
				break;
		}
	}
	yyerror("Bad statement\n");
}






