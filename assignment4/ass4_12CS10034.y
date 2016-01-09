
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
}

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN
%token FLOAT FOR GOTO IF INLINE INT LONG REGISTER RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH
%token TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE BOOL COMPLEX IMAGINARY
%token IDENTIFIER 
%token <intval>INTEGER_CONSTANT 
%token <fval>FLOATING_CONSTANT 
%token ENUMERATION_CONSTANT 
%token <cval>CHARACTER_CONSTANT 
%token <sval>STRING_LITERAL
%token POINTER INCREMENT DECREMENT LEFT_SHIFT_OP RIGHT_SHIFT_OP LESS_THAN_EQUAL_TO GREATER_THAN_EQUAL_TO
%token EQUALS_TO NOT_EQUALS_TO AND_OP OR_OP ELLIPSIS ASSIGN_OP MULT_ASSIGN DIV_ASSIGN MOD_ASSIGN SUM_ASSIGN
%token SUBTRACT_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN SINGLE_LINE_COMMENT MULT_LINE_COMMENT



//%nonassoc unary_operator

%start translation_unit

%%
//	External Definitions
translation_unit:		external_declaration									|
						translation_unit external_declaration
						;

external_declaration:	function_definition										|
						declaration
						;

function_definition:	declaration_specifiers declarator declaration_list_opt compound_statement
						;

declaration_list_opt:	declaration_list 										|
						/*epsilon*/
						;

declaration_list:		declaration 											|
						declaration_list declaration
						;
//  Statements
statement:				labeled_statement										|
						compound_statement										|
						expression_statement									|
						selection_statement										|
						iteration_statement										|
						jump_statement		
						;

labeled_statement:		IDENTIFIER ':' statement 								|
						CASE constant_expression ':' statement 					|
						DEFAULT ':' statement 
						;

compound_statement:		'{' block_item_list_opt '}'
						;

block_item_list_opt:	block_item_list 										|	
						/*epsilon*/
						;

block_item_list:		block_item 												|
						block_item_list block_item
						;

block_item:				declaration 											|
						statement
						;						

expression_statement:	expression_opt ';'
						;

expression_opt:			expression 												|
						/*epsilon*/
						;

selection_statement:	IF '(' expression ')' statement ELSE statement			|
						IF '(' expression ')' statement 						|
						SWITCH '(' expression ')' statement
						;

iteration_statement:	WHILE '(' expression ')' statement 												|
						DO statement WHILE '(' expression ')' ';' 										|
						FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement 		|
						FOR '(' declaration expression_opt ';' expression_opt ')' statement
						;

jump_statement:			GOTO IDENTIFIER ';' 									|
						CONTINUE ';' 											|
						BREAK ';' 												|
						RETURN expression_opt ';' 
						;

// Declarations 

declaration:			declaration_specifiers init_declarator_list_opt ';' 
						;

init_declarator_list_opt: init_declarator_list 									|
						/*epsilon*/
						;

declaration_specifiers:	storage_class_specifier declaration_specifiers_opt 		|
						type_specifier declaration_specifiers_opt 				|
						type_qualifier declaration_specifiers_opt 				|
						function_specifier declaration_specifiers_opt
						;

declaration_specifiers_opt: declaration_specifiers 								|
						/*epsilon*/
						;

init_declarator_list:	init_declarator 										|
						init_declarator_list ',' init_declarator
						;

init_declarator:		declarator 												|
						declarator ASSIGN_OP initializer
						;

storage_class_specifier: 	EXTERN 												|
							STATIC  											|
							AUTO 												|
							REGISTER
						;

type_specifier:			VOID 													|
						CHAR 													|
						SHORT 													|
						INT														|
						LONG 													|
						FLOAT 													|
						DOUBLE 													|
						SIGNED													|
						UNSIGNED 												|
						BOOL 													|
						COMPLEX 												|
						IMAGINARY 												|
						enum_specifier
						;			

specifier_qualifier_list: type_specifier specifier_qualifier_list_opt 			|
						type_qualifier specifier_qualifier_list_opt
						;	

specifier_qualifier_list_opt: specifier_qualifier_list 							|
						/*epsilon*/
						;

enum_specifier:			ENUM identifier_opt '{' enumerator_list '}' 			|
						ENUM identifier_opt '{' enumerator_list ',' '}' 		|																			
						ENUM IDENTIFIER
						;

identifier_opt:			IDENTIFIER 												|
						/*epsilon*/
						;

enumerator_list:		enumerator 												|
						enumerator_list ',' enumerator
						;

enumerator:				enumeration_constant 									|
						enumeration_constant ASSIGN_OP constant_expression
						;

type_qualifier:			CONST 													|
						RESTRICT 												|
						VOLATILE
						;

function_specifier:		INLINE
						;

declarator :			pointer_opt direct_declarator
						;

pointer_opt:			pointer 												|
						/*epsilon*/
						;

direct_declarator:		IDENTIFIER 																			|
						'(' declarator ')' 																	|
						direct_declarator '[' type_qualifier_list_opt assignment_expression_opt ']' 		|																										
						direct_declarator '[' STATIC type_qualifier_list_opt assignment_expression ']' 		|
						direct_declarator '[' type_qualifier_list STATIC assignment_expression ']' 			|
						direct_declarator '[' type_qualifier_list_opt '*' ']' 								|
						direct_declarator '(' parameter_type_list ')' 										|
						direct_declarator '(' identifier_list_opt ')'
						;

type_qualifier_list_opt:type_qualifier_list 									|
						/*epsilon*/
						;

assignment_expression_opt:assignment_expression 								|
						/*epsilon*/
						;

identifier_list_opt:	identifier_list 										|
						/*epsilon*/
						;

pointer:				'*' type_qualifier_list_opt 							|
						'*' type_qualifier_list_opt pointer
						;

type_qualifier_list:	type_qualifier 											|
						type_qualifier_list type_qualifier
						;

parameter_type_list:	parameter_list 											|
						parameter_list ',' ELLIPSIS
						;

parameter_list:			parameter_declaration 									|
						parameter_list ',' parameter_declaration
						;

parameter_declaration:	declaration_specifiers declarator 						|
						declaration_specifiers
						;

identifier_list :		IDENTIFIER 												|
						identifier_list ',' IDENTIFIER
						;

type_name:				specifier_qualifier_list
						;

initializer:			assignment_expression 									|
						'{' initializer_list '}' 								|
						'{' initializer_list ',' '}'
						;

initializer_list:		designation_opt initializer 							|
						initializer_list ',' designation_opt initializer
						;																																															

designation_opt:		designation 											|
						/*epsilon*/
						;

designation:			designator_list ASSIGN_OP
						;

designator_list:		designator 												|
						designator_list designator
						;

designator:				'[' constant_expression ']' 							|
						'.' IDENTIFIER
						;

// Expressions 

expression :			assignment_expression 									|
						expression ',' assignment_expression
						;

constant_expression:	conditional_expression
						;

assignment_expression:	conditional_expression 									|
						unary_expression assignment_operator assignment_expression	
						;																																			

assignment_operator:	ASSIGN_OP 													|
						MULT_ASSIGN 											|
						DIV_ASSIGN 												|
						MOD_ASSIGN 												|
						SUM_ASSIGN 												|
						SUBTRACT_ASSIGN 												|
						LEFT_ASSIGN 										|
						RIGHT_ASSIGN 										|
						AND_ASSIGN 												|
						XOR_ASSIGN 												|
						OR_ASSIGN
						;

conditional_expression: logical_OR_expression 									|
						logical_OR_expression '?' expression ':' conditional_expression	
						;

logical_OR_expression:	logical_AND_expression 									|
						logical_OR_expression OR_OP logical_AND_expression
						;

logical_AND_expression:	inclusive_OR_expression 								|
						logical_AND_expression AND_OP inclusive_OR_expression
						;

inclusive_OR_expression:exclusive_OR_expression 								|
						inclusive_OR_expression '|' exclusive_OR_expression
						;

exclusive_OR_expression:AND_expression 											|
						exclusive_OR_expression '^' AND_expression
						;

AND_expression :		equality_expression 									|
						AND_expression '&' equality_expression
						;

equality_expression:	relational_expression 									|
						equality_expression EQUALS_TO relational_expression 			|
						equality_expression NOT_EQUALS_TO relational_expression
						;

relational_expression:	shift_expression 										|
						relational_expression '<' shift_expression 				|
						relational_expression '>' shift_expression 				|
						relational_expression LESS_THAN_EQUAL_TO shift_expression 				|
						relational_expression GREATER_THAN_EQUAL_TO shift_expression
						;

shift_expression:		additive_expression 									|
						shift_expression LEFT_SHIFT_OP additive_expression 			|
						shift_expression RIGHT_SHIFT_OP additive_expression
						;

additive_expression :	multiplicative_expression 								|
						additive_expression '+' multiplicative_expression 		|
						additive_expression '-' multiplicative_expression
						;

multiplicative_expression:	cast_expression 									|
						multiplicative_expression '*' cast_expression 			|
						multiplicative_expression '/' cast_expression 			|
						multiplicative_expression '%' cast_expression
						;

cast_expression : 		unary_expression 										|
						'(' type_name ')' cast_expression
						;

unary_operator	:		'&' 													|
						'*'										 				|
						'+' 													|
						'-' 													|
						'~' 													|
						'!' 
						;

unary_expression:		postfix_expression 										|
						INCREMENT unary_expression 								|
						DECREMENT unary_expression 								|
						unary_operator cast_expression 							|
						SIZEOF unary_expression 								|
						SIZEOF '(' type_name ')'
						;

argument_expression_list_opt:
						argument_expression_list 								|
						/*epsilon*/
						;

argument_expression_list:
						assignment_expression 									|
						argument_expression_list ',' assignment_expression
						;

postfix_expression :	primary_expression 										|
						postfix_expression '[' expression ']' 					|
						postfix_expression '(' argument_expression_list_opt ')' |
						postfix_expression '.' IDENTIFIER 						|
						postfix_expression POINTER IDENTIFIER 		|
						postfix_expression INCREMENT 							|
						postfix_expression DECREMENT 							|
						'(' type_name ')' '{' initializer_list '}' 				|
						'(' type_name ')' '{' initializer_list ',' '}'
						;

primary_expression:		IDENTIFIER 												|
						constant 												|
						STRING_LITERAL 												|
						'(' expression ')'
						;

constant :				INTEGER_CONSTANT 												|
						FLOATING_CONSTANT 												|
						CHARACTER_CONSTANT
						;

enumeration_constant:	IDENTIFIER
						;						
							
							
%%

void yyerror(const char* s){
    printf("%s",s);
}