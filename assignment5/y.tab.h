/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    BOOL = 292,
    COMPLEX = 293,
    IMAGINARY = 294,
    IDENTIFIER = 295,
    INTEGER_CONSTANT = 296,
    FLOATING_CONSTANT = 297,
    ENUMERATION_CONSTANT = 298,
    CHARACTER_CONSTANT = 299,
    STRING_LITERAL = 300,
    POINTER = 301,
    INCREMENT = 302,
    DECREMENT = 303,
    LEFT_SHIFT_OP = 304,
    RIGHT_SHIFT_OP = 305,
    LESS_THAN_EQUAL_TO = 306,
    GREATER_THAN_EQUAL_TO = 307,
    EQUALS_TO = 308,
    NOT_EQUALS_TO = 309,
    AND_OP = 310,
    OR_OP = 311,
    ELLIPSIS = 312,
    ASSIGN_OP = 313,
    MULT_ASSIGN = 314,
    DIV_ASSIGN = 315,
    MOD_ASSIGN = 316,
    SUM_ASSIGN = 317,
    SUBTRACT_ASSIGN = 318,
    LEFT_ASSIGN = 319,
    RIGHT_ASSIGN = 320,
    AND_ASSIGN = 321,
    XOR_ASSIGN = 322,
    OR_ASSIGN = 323,
    SINGLE_LINE_COMMENT = 324,
    MULT_LINE_COMMENT = 325
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define BOOL 292
#define COMPLEX 293
#define IMAGINARY 294
#define IDENTIFIER 295
#define INTEGER_CONSTANT 296
#define FLOATING_CONSTANT 297
#define ENUMERATION_CONSTANT 298
#define CHARACTER_CONSTANT 299
#define STRING_LITERAL 300
#define POINTER 301
#define INCREMENT 302
#define DECREMENT 303
#define LEFT_SHIFT_OP 304
#define RIGHT_SHIFT_OP 305
#define LESS_THAN_EQUAL_TO 306
#define GREATER_THAN_EQUAL_TO 307
#define EQUALS_TO 308
#define NOT_EQUALS_TO 309
#define AND_OP 310
#define OR_OP 311
#define ELLIPSIS 312
#define ASSIGN_OP 313
#define MULT_ASSIGN 314
#define DIV_ASSIGN 315
#define MOD_ASSIGN 316
#define SUM_ASSIGN 317
#define SUBTRACT_ASSIGN 318
#define LEFT_ASSIGN 319
#define RIGHT_ASSIGN 320
#define AND_ASSIGN 321
#define XOR_ASSIGN 322
#define OR_ASSIGN 323
#define SINGLE_LINE_COMMENT 324
#define MULT_LINE_COMMENT 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 23 "ass5_12CS10034.y" /* yacc.c:1909  */

	int intval; //to store the integer values
	char* cval; //to store the character values
	float fval; //to store the double king of values
	char* sval; //to store the string values.Not implemented this time
	struct Symbol *loc; //the SymbolItem pointer 
	struct funcPointer *funcP; //the pointer structure contataining the symbolTable pointer. We have to enclose it in struct because class can't be used as type in lex inside union
	struct arg_list* args; //list of expression pointers
	struct Expression *expr; //The main structue which is expression pointer
	struct Type* typeptr; //The type is used to contain the type pointers for different type specifiers.
	struct opPointer *op;//The operation code pointer contatining op_code, for unary opearators

#line 207 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
