/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "ass5_12CS10034.y" /* yacc.c:339  */

    #include <stdio.h>
    #include "ass5_12CS10034_translator.h"//the header file for translator
    #include<iostream>
    #include<string>
    #include<list>
    //These variables are declared in globalVariables.c file
   	void yyerror(const char*);
    extern int yylex(void);
    extern std::vector<Quad*> quadVector;
	extern int quadPointer;
	extern symbolTable* global;
	extern symbolTable *symTab;
	extern Symbol* curSym;
	extern Type* globalType;
	extern string array_name;
    using namespace std;//the c++ library is used most of the time

 

#line 87 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 22 "ass5_12CS10034.y" /* yacc.c:355  */

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

#line 280 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 295 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1014

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  204
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  357

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    93,     2,     2,     2,    91,    85,     2,
      75,    76,    80,    88,    77,    89,    81,    90,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    71,    74,
      86,     2,    87,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,    84,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,    83,    73,    92,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   156,   156,   165,   166,   169,   170,   180,   189,   189,
     193,   194,   199,   215,   225,   226,   227,   228,   229,   230,
     233,   234,   235,   239,   247,   249,   256,   257,   265,   267,
     270,   273,   274,   279,   292,   312,   316,   329,   343,   356,
     360,   361,   362,   363,   408,   414,   419,   422,   423,   430,
     431,   434,   435,   438,   439,   442,   443,   451,   452,   453,
     454,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   473,   474,   477,   478,   481,   482,
     483,   486,   487,   490,   491,   494,   495,   498,   499,   500,
     503,   506,   524,   525,   528,   535,   541,   564,   565,   566,
     567,   585,   602,   603,   606,   607,   610,   610,   615,   620,
     634,   635,   638,   639,   642,   643,   646,   647,   650,   651,
     654,   657,   658,   659,   662,   663,   666,   666,   670,   673,
     674,   677,   678,   683,   684,   687,   690,   691,   747,   748,
     770,   772,   788,   791,   807,   808,   821,   822,   850,   851,
     863,   865,   871,   878,   879,   885,   890,   896,   902,   903,
     920,   937,   938,   949,   961,   962,   973,   984,   997,  1021,
    1031,  1036,  1041,  1046,  1051,  1056,  1062,  1067,  1075,  1083,
    1117,  1118,  1122,  1124,  1128,  1134,  1143,  1149,  1180,  1217,
    1219,  1221,  1231,  1241,  1242,  1245,  1254,  1256,  1258,  1261,
    1274,  1288,  1301,  1305,  1309
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL",
  "COMPLEX", "IMAGINARY", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "ENUMERATION_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "POINTER", "INCREMENT", "DECREMENT", "LEFT_SHIFT_OP",
  "RIGHT_SHIFT_OP", "LESS_THAN_EQUAL_TO", "GREATER_THAN_EQUAL_TO",
  "EQUALS_TO", "NOT_EQUALS_TO", "AND_OP", "OR_OP", "ELLIPSIS", "ASSIGN_OP",
  "MULT_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "SUM_ASSIGN",
  "SUBTRACT_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "SINGLE_LINE_COMMENT", "MULT_LINE_COMMENT",
  "':'", "'{'", "'}'", "';'", "'('", "')'", "','", "'['", "']'", "'*'",
  "'.'", "'?'", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'/'",
  "'%'", "'~'", "'!'", "$accept", "start_exec", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", "F", "H", "statement", "labeled_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "expression_opt",
  "selection_statement", "iteration_statement", "jump_statement",
  "declaration", "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "expression", "constant_expression", "assignment_expression",
  "conditional_expression", "logical_OR_expression",
  "logical_AND_expression", "inclusive_OR_expression",
  "exclusive_OR_expression", "AND_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_operator",
  "unary_expression", "argument_expression_list_opt",
  "argument_expression_list", "postfix_expression", "primary_expression",
  "constant", "enumeration_constant", "M", "N", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,    58,   123,   125,    59,    40,    41,    44,    91,    93,
      42,    46,    63,   124,    94,    38,    60,    62,    43,    45,
      47,    37,   126,    33
};
# endif

#define YYPACT_NINF -235

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-235)))

#define YYTABLE_NINF -205

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     975,  -235,  -235,  -235,  -235,     9,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,    66,   975,  -235,  -235,  -235,    21,   975,   975,
    -235,   975,   975,    14,    26,  -235,  -235,    30,    29,    75,
    -235,   653,   -18,  -235,  -235,  -235,  -235,  -235,  -235,    91,
    -235,    78,    30,  -235,    78,   655,  -235,   975,  -235,    21,
    -235,    78,   -51,  -235,   -29,  -235,    84,  -235,  -235,  -235,
     109,   728,  -235,  -235,  -235,  -235,  -235,   744,   744,   -35,
     569,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
      31,   119,    93,   101,   112,   139,   -31,   129,   107,    65,
    -235,   798,   142,    63,  -235,  -235,  -235,  -235,   128,  -235,
      12,  -235,   -10,   798,   569,  -235,   569,  -235,  -235,   798,
     169,    35,   655,  -235,    62,  -235,   300,  -235,   300,   135,
     126,  -235,  -235,   140,  -235,   798,  -235,   798,   798,   798,
     798,   798,   798,   798,   798,   798,   798,   798,   798,   798,
     798,  -235,  -235,   798,   177,  -235,  -235,   798,   798,   184,
     162,  -235,   937,    30,   814,   125,  -235,  -235,  -235,  -235,
     163,   164,   159,  -235,  -235,    18,  -235,  -235,  -235,  -235,
    -235,  -235,   674,  -235,   798,   798,  -235,   798,   101,   798,
     139,   -31,   -31,   129,   129,   129,   129,   107,   107,    65,
      65,  -235,  -235,  -235,  -235,  -235,  -235,   165,   167,   -43,
    -235,   256,  -235,  -235,    53,   166,   170,   168,  -235,   171,
     798,   173,   174,  -235,   798,   175,   175,  -235,  -235,   655,
     -35,  -235,  -235,   119,   798,    93,   112,  -235,   798,  -235,
     176,   798,   182,   178,  -235,   183,   217,   210,   798,   212,
    -235,   228,  -235,  -235,  -235,   215,   229,  -235,  -235,   231,
    -235,  -235,  -235,  -235,   232,  -235,  -235,  -235,   898,   268,
     233,  -235,  -235,   235,  -235,    74,   232,  -235,  -235,   239,
    -235,   485,   485,   431,   242,   798,   243,   798,   244,   485,
    -235,   347,  -235,  -235,  -235,  -235,  -235,  -235,  -235,    99,
     247,   485,  -235,  -235,   248,   798,  -235,   138,  -235,   144,
     798,  -235,  -235,  -235,  -235,  -235,   288,  -235,   253,  -235,
     485,   150,   798,   254,   798,   798,  -235,  -235,  -235,  -235,
     798,  -235,   264,   485,  -235,   152,   258,   485,  -235,   485,
    -235,  -235,  -235,   330,  -235,   269,   798,  -235,  -235,  -235,
     485,   270,  -235,  -235,  -235,   485,  -235
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    59,    62,    87,    67,    82,    57,    66,    90,    64,
      65,    60,    88,    63,    68,    58,    69,    61,    89,    70,
      71,    72,     0,     2,     3,     5,     6,    93,    52,    52,
      73,    52,    52,    80,     0,     1,     4,   103,     0,    45,
      53,    55,     0,    92,    51,    47,    48,    49,    50,     0,
     110,   108,   102,    44,    93,     0,    12,     8,    10,    93,
      94,    93,    91,   202,     0,    83,    85,   109,   111,    54,
      55,     0,   195,   199,   200,   201,   197,     0,     0,   127,
       0,   171,   170,   172,   173,   174,   175,    56,   121,   136,
     138,   140,   142,   144,   146,   148,   150,   153,   158,   161,
     164,     0,   168,   176,   186,   196,    13,    11,     0,    12,
     103,    78,     0,     0,     0,   180,     0,   177,   178,     0,
       0,     0,     0,   126,     0,   129,    77,   120,    77,     0,
       0,   133,   203,     0,   203,     0,   203,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,   168,     0,     0,   191,   192,   183,     0,     0,
       0,    95,   107,   103,   105,   102,    79,    84,    86,   135,
       0,     0,     0,   132,   122,   127,   124,   128,   130,    76,
      74,    75,     0,   198,     0,     0,   203,     0,   145,     0,
     149,   151,   152,   156,   157,   154,   155,   159,   160,   162,
     163,   165,   166,   167,   137,   190,   184,     0,   182,     0,
     189,    25,     7,   118,    93,     0,     0,   112,   114,   106,
       0,   171,     0,   104,     0,   181,     0,   131,   123,     0,
     127,   169,   134,   141,     0,   143,   147,   188,     0,   187,
       0,     0,     0,     0,   203,     0,     0,     0,    32,     0,
     203,   195,    29,    14,    15,     0,   203,    26,    16,     0,
      17,    18,    19,    28,    31,   116,   101,   100,     0,     0,
       0,    99,    96,     0,   125,     0,   204,   185,    42,     0,
      41,    32,    32,    32,     0,     0,     0,     0,     0,    32,
      23,    32,    30,   113,   115,   119,    97,    98,   193,   127,
       0,    32,    22,   203,     0,    32,    40,     0,    43,     0,
       0,    20,    27,   194,   203,    21,     0,   203,     0,   204,
      32,     0,     0,     0,    32,    32,   203,    35,   204,   139,
       0,   204,     0,    32,   203,     0,     0,    32,   204,    32,
     204,   203,    39,    34,    36,     0,    32,   203,    37,   204,
      32,     0,   204,   203,    33,    32,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -235,  -235,  -235,   324,  -235,  -235,  -235,   250,  -235,  -132,
    -235,   216,  -235,  -235,    87,  -235,  -159,  -235,  -235,  -235,
     -40,  -235,     0,   132,  -235,   325,  -235,   -64,   -21,   262,
    -235,  -235,  -235,   281,   -26,  -235,   -23,  -235,  -235,   -95,
    -235,  -235,   345,   287,  -235,  -235,   130,  -235,    54,  -104,
     172,  -173,  -235,  -235,   275,   -75,  -105,   -30,  -106,  -235,
     218,   213,   266,   219,   267,    92,    41,    88,    90,   -89,
    -235,   -68,  -235,  -235,  -235,  -235,  -235,  -235,  -128,  -234
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    25,    56,    57,   106,   160,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
      26,    38,    59,    45,    39,    40,    28,    29,   127,   180,
      30,    34,    64,    65,    31,    32,    70,    42,    62,    51,
     222,   215,    43,    52,   216,   217,   218,   219,   129,    87,
     121,   122,   123,   124,   125,   264,   168,   131,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   207,   208,   103,   104,   105,    66,   185,   133
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    58,   229,   115,    41,   130,   187,   169,   189,   117,
     118,    50,   151,   169,   172,   164,   126,   107,   176,     3,
     140,   141,    60,    27,   109,    88,    68,   110,    44,    44,
      63,    44,    44,   152,   184,    12,   239,     3,   108,   130,
     163,   130,   300,   119,   111,   152,   120,    18,   112,    33,
     126,   152,   126,    12,   128,   142,   143,    61,   234,   201,
     202,   203,   126,   166,   126,    18,    35,   152,   220,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   209,    50,   326,   -81,   132,   128,   286,
     128,   228,    88,   231,   334,   -46,   119,   336,    49,   120,
     128,    37,   128,    53,   343,   179,   345,   179,   174,   154,
     155,   156,   175,  -204,   152,   351,   282,   152,   354,   152,
     177,   152,   288,   204,   304,   274,   229,   206,   291,  -117,
    -117,    63,     3,    37,   223,   169,   279,    50,   157,    68,
     119,   158,   113,   120,   159,   148,   318,   298,    12,   302,
     303,   299,    54,   224,   232,   149,   150,   311,    37,   276,
      18,    46,   214,    47,    48,   331,   332,    55,   170,   315,
     171,   263,   313,   152,   134,   316,   135,   119,   144,   145,
     120,   193,   194,   195,   196,   136,   322,   349,   327,   324,
     270,   265,   138,   139,   273,   146,   147,   137,   333,    88,
     153,   338,   183,   184,   161,   342,   339,   344,   277,   173,
     307,   182,   309,   346,   319,   184,   329,   205,   352,   350,
     320,   184,   186,   356,   210,   355,   328,   184,   340,   184,
     191,   192,   197,   198,   211,   321,   199,   200,   227,   225,
     226,   237,   266,   305,   238,   268,   267,   230,   269,   281,
     278,   263,   271,   272,   152,   335,   280,   284,   283,     1,
     240,   241,     2,     3,   242,   243,   244,     4,   214,     5,
       6,     7,   245,   246,   247,     8,     9,    10,    11,    12,
     248,    13,    14,    71,    15,   285,   249,   287,   290,    16,
      17,    18,   250,    19,    20,    21,   251,    73,    74,   289,
      75,    76,   -24,    77,    78,   292,     2,     3,   295,   184,
     301,     4,   296,     5,   297,     7,   306,   308,   314,   310,
       9,    10,   317,    12,   323,    13,    14,   325,   211,   330,
     -32,    80,   341,    16,    17,    18,    81,    19,    20,    21,
     337,    82,   347,   348,    83,    84,   353,    36,    85,    86,
       1,   240,   241,     2,     3,   242,   243,   244,     4,   162,
       5,     6,     7,   245,   246,   247,     8,     9,    10,    11,
      12,   248,    13,    14,    71,    15,   212,   249,   312,    69,
      16,    17,    18,   250,    19,    20,    21,   251,    73,    74,
     181,    75,    76,   167,    77,    78,    67,   165,   294,   178,
     235,   188,   275,   233,   190,     0,     0,     0,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   211,
       0,     0,    80,     0,     0,     0,     0,    81,     0,     0,
       0,     0,    82,     0,     1,    83,    84,     2,     3,    85,
      86,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,    13,    14,    71,    15,
       0,     0,     0,     0,    16,    17,    18,     0,    19,    20,
      21,    72,    73,    74,     0,    75,    76,     0,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   240,
     241,     0,     0,   242,   243,   244,     0,     0,     0,     0,
       0,   245,   246,   247,     0,     0,    80,     0,     0,   248,
       0,    81,    71,     0,     0,   249,    82,     0,     0,    83,
      84,   250,     0,    85,    86,   251,    73,    74,     0,    75,
      76,     0,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   211,     0,     0,
      80,     0,     0,     0,     0,    81,     0,     0,     0,     0,
      82,     0,     0,    83,    84,     2,     3,    85,    86,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     0,     9,
      10,     0,    12,     0,    13,    14,    71,     0,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,    72,
      73,    74,     0,    75,    76,     0,    77,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,    81,
       0,     0,     0,     0,    82,     0,     1,    83,    84,     2,
       3,    85,    86,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,    71,     0,     0,     0,    16,    17,    18,     0,
      19,    20,    21,     0,     0,    72,    73,    74,     0,    75,
      76,    71,    77,    78,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     0,    72,    73,    74,     0,    75,    76,
       0,    77,    78,     0,     0,    -9,     0,    79,     0,     0,
      80,     0,     0,     0,     0,    81,     0,     0,     0,     0,
      82,     0,     0,    83,    84,     0,   230,    85,    86,    80,
       0,     0,     0,     0,    81,    71,     0,     0,     0,    82,
       0,     0,    83,    84,     0,     0,    85,    86,    72,    73,
      74,    71,    75,    76,     0,    77,    78,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,     0,    75,    76,
       0,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,     0,    81,     0,
       0,     0,     0,    82,     0,     0,    83,    84,     0,   116,
      85,    86,     0,     0,    81,    71,     0,     0,     0,    82,
       0,     0,    83,    84,     0,     0,    85,    86,    72,    73,
      74,    71,    75,    76,     0,    77,    78,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,     0,    75,    76,
       0,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,    81,     0,
       0,     0,     0,    82,     0,     0,    83,    84,     0,    80,
      85,    86,     0,     0,   221,     0,     0,     0,     0,    82,
       0,     1,    83,    84,     2,     3,    85,    86,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,   293,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,   213,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    41,   175,    71,    27,    80,   134,   113,   136,    77,
      78,    37,   101,   119,   119,   110,    80,    57,   122,     7,
      51,    52,    40,    23,    75,    55,    52,    78,    28,    29,
      40,    31,    32,   101,    77,    23,    79,     7,    61,   114,
      28,   116,   276,    78,    73,   113,    81,    35,    77,    40,
     114,   119,   116,    23,    80,    86,    87,    75,   186,   148,
     149,   150,   126,    73,   128,    35,     0,   135,   163,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   158,   110,   319,    72,    56,   114,   248,
     116,    73,   122,   182,   328,    74,    78,   331,    72,    81,
     126,    80,   128,    74,   338,   126,   340,   128,    73,    46,
      47,    48,    77,    82,   182,   349,   244,   185,   352,   187,
      58,   189,   250,   153,   283,   229,   299,   157,   256,    76,
      77,    40,     7,    80,   164,   241,   241,   163,    75,   165,
      78,    78,    58,    81,    81,    80,   305,    73,    23,   281,
     282,    77,    77,    28,   184,    90,    91,   289,    80,   234,
      35,    29,   162,    31,    32,   324,   325,    58,   114,   301,
     116,   211,    73,   241,    55,   303,    83,    78,    49,    50,
      81,   140,   141,   142,   143,    84,   314,   346,   320,   317,
     220,   214,    53,    54,   224,    88,    89,    85,   326,   229,
      58,   333,    76,    77,    76,   337,   334,   339,   238,    40,
     285,    76,   287,   341,    76,    77,   322,    40,   350,   347,
      76,    77,    82,   355,    40,   353,    76,    77,    76,    77,
     138,   139,   144,   145,    72,   310,   146,   147,    79,    76,
      76,    76,    76,   283,    77,    77,    76,    72,    77,    71,
      74,   291,    79,    79,   322,   330,    74,    40,    75,     3,
       4,     5,     6,     7,     8,     9,    10,    11,   268,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    75,    30,    75,    73,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    71,
      44,    45,    73,    47,    48,    74,     6,     7,    40,    77,
      71,    11,    79,    13,    79,    15,    74,    74,    71,    75,
      20,    21,    74,    23,    36,    25,    26,    74,    72,    75,
      74,    75,    74,    33,    34,    35,    80,    37,    38,    39,
      76,    85,    12,    74,    88,    89,    76,    23,    92,    93,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   109,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   160,    30,   291,    54,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     128,    44,    45,   112,    47,    48,    51,   110,   268,   124,
     187,   135,   230,   185,   137,    -1,    -1,    -1,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    85,    -1,     3,    88,    89,     6,     7,    92,
      93,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    -1,    44,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    75,    -1,    -1,    24,
      -1,    80,    27,    -1,    -1,    30,    85,    -1,    -1,    88,
      89,    36,    -1,    92,    93,    40,    41,    42,    -1,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,     6,     7,    92,    93,    -1,
      11,    -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    -1,    44,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    85,    -1,     3,    88,    89,     6,
       7,    92,    93,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    28,    27,    -1,    -1,    -1,    33,    34,    35,    -1,
      37,    38,    39,    -1,    -1,    40,    41,    42,    -1,    44,
      45,    27,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    40,    41,    42,    -1,    44,    45,
      -1,    47,    48,    -1,    -1,    72,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    -1,    72,    92,    93,    75,
      -1,    -1,    -1,    -1,    80,    27,    -1,    -1,    -1,    85,
      -1,    -1,    88,    89,    -1,    -1,    92,    93,    40,    41,
      42,    27,    44,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    -1,    44,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,    75,
      92,    93,    -1,    -1,    80,    27,    -1,    -1,    -1,    85,
      -1,    -1,    88,    89,    -1,    -1,    92,    93,    40,    41,
      42,    27,    44,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    -1,    44,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,    75,
      92,    93,    -1,    -1,    80,    -1,    -1,    -1,    -1,    85,
      -1,     3,    88,    89,     6,     7,    92,    93,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    57,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    40,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,    95,    96,    97,    98,   114,   116,   120,   121,
     124,   128,   129,    40,   125,     0,    97,    80,   115,   118,
     119,   130,   131,   136,   116,   117,   117,   117,   117,    72,
     128,   133,   137,    74,    77,    58,    99,   100,   114,   116,
      40,    75,   132,    40,   126,   127,   171,   136,   128,   119,
     130,    27,    40,    41,    42,    44,    45,    47,    48,    72,
      75,    80,    85,    88,    89,    92,    93,   143,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   168,   169,   170,   101,   114,   130,    75,
      78,    73,    77,    58,    75,   165,    75,   165,   165,    78,
      81,   144,   145,   146,   147,   148,   121,   122,   128,   142,
     149,   151,    56,   173,    55,    83,    84,    85,    53,    54,
      51,    52,    86,    87,    49,    50,    88,    89,    80,    90,
      91,   163,   165,    58,    46,    47,    48,    75,    78,    81,
     102,    76,   101,    28,   133,   137,    73,   127,   150,   152,
     142,   142,   150,    40,    73,    77,   143,    58,   148,   122,
     123,   123,    76,    76,    77,   172,    82,   172,   156,   172,
     158,   159,   159,   160,   160,   160,   160,   161,   161,   162,
     162,   163,   163,   163,   151,    40,   151,   166,   167,   149,
      40,    72,   105,    40,   116,   135,   138,   139,   140,   141,
     133,    80,   134,   151,    28,    76,    76,    79,    73,   145,
      72,   163,   151,   154,   172,   155,   157,    76,    77,    79,
       4,     5,     8,     9,    10,    16,    17,    18,    24,    30,
      36,    40,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   149,   130,    76,    76,    77,    77,
     151,    79,    79,   151,   143,   144,   149,   151,    74,   150,
      74,    71,   172,    75,    40,    75,   110,    75,   172,    71,
      73,   172,    74,    57,   140,    40,    79,    79,    73,    77,
     173,    71,   103,   103,   110,   114,    74,   149,    74,   149,
      75,   103,   108,    73,    71,   103,   172,    74,   110,    76,
      76,   149,   172,    36,   172,    74,   173,   103,    76,   152,
      75,   110,   110,   172,   173,   149,   173,    76,   103,   172,
      76,    74,   103,   173,   103,   173,   172,    12,    74,   110,
     172,   173,   103,    76,   173,   172,   103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    97,    97,    98,    99,    99,
     100,   100,   101,   102,   103,   103,   103,   103,   103,   103,
     104,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     109,   110,   110,   111,   111,   111,   112,   112,   112,   112,
     113,   113,   113,   113,   114,   115,   115,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   120,
     120,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   122,   122,   123,   123,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   128,
     129,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     142,   143,   143,   143,   144,   144,   145,   145,   146,   147,
     147,   148,   148,   149,   149,   150,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   158,   158,   159,   159,   159,   159,   159,   160,   160,
     160,   161,   161,   161,   162,   162,   162,   162,   163,   163,
     164,   164,   164,   164,   164,   164,   165,   165,   165,   165,
     165,   165,   166,   166,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   169,   169,   169,   169,   170,
     170,   170,   171,   172,   173
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     6,     1,     0,
       1,     2,     0,     0,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     3,     1,     0,     1,     3,     1,     1,
       2,     1,     0,    12,     8,     5,     8,    10,    14,     8,
       3,     2,     2,     3,     3,     1,     0,     2,     2,     2,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     5,     6,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     0,     1,     3,     5,     6,     6,     5,
       5,     5,     1,     0,     1,     0,     1,     0,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     3,     4,     2,     4,     1,     0,     2,     1,
       2,     3,     2,     1,     3,     1,     1,     3,     1,     9,
       1,     4,     1,     4,     1,     3,     1,     4,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     4,     1,     0,     1,     3,     1,     4,     4,     3,
       3,     2,     2,     6,     7,     1,     1,     1,     3,     1,
       1,     1,     1,     0,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 157 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							//Notice the nextlist attribute used
							backpatch((yyvsp[0].expr)->nextlist,quadPointer);//clearly we have to point all the dangling pointers to the end of prgram
							emit(ENDPROGRAM,"----");//The endprogram quad
						}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 171 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc = (yyvsp[0].loc);
						}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 181 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							symTab = (yyvsp[-2].funcP)->symTabP->parent;//Going back to earlier symbol table
							(yyval.expr) = new expression;
							(yyval.expr)->nextlist = (yyvsp[0].expr)->nextlist;//The nextlist will be taken up the order
							quadVector[(yyvsp[-1].intval)]->result=(yyvsp[-4].loc)->name;//Telling the name of function
						}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 199 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.funcP) = new funcPointer;
							if(curSym->symTabPointer)
							{
								(yyval.funcP)->symTabP = curSym->symTabPointer;
								(yyval.funcP)->symTabP->parent = symTab;
							}
							else
							{
								(yyval.funcP)->symTabP = new symbolTable;
								(yyval.funcP)->symTabP->parent = symTab;
							}
							symTab = (yyval.funcP)->symTabP;//making the symbol table pointer to point to the desired table
						}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 215 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.intval) = quadPointer;
							emit(FUNCTION_OP,"----");
						}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 233 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 234 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 235 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 240 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
								(yyval.expr) = new expression;
								(yyval.expr)->nextlist = (yyvsp[-1].expr)->nextlist;
							}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 249 "ass5_12CS10034.y" /* yacc.c:1646  */
    {	
							(yyval.expr) = new expression;
							(yyval.expr)->nextlist = 0;
						}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 258 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							backpatch((yyvsp[-2].expr)->nextlist,(yyvsp[-1].intval));//backpatching the dangling goto's to next instruction
							(yyval.expr)->nextlist = (yyvsp[0].expr)->nextlist;//associating the nextlist with the new block_item
						}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 265 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr)->nextlist = 0;}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 274 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr)=0;}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 280 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							backpatch((yyvsp[-7].expr)->nextlist,quadPointer);
							if((yyvsp[-9].expr)->loc->type->type!=_BOOL)//checking the expression type,if it is not bool,then convert it to bool
								conv2bool((yyvsp[-9].expr));//converting the expression to bool type
							backpatch((yyvsp[-9].expr)->truelist,(yyvsp[-6].intval));
							backpatch((yyvsp[-9].expr)->falselist,(yyvsp[-2].intval));
							list<int>* temp1 = merge((yyvsp[-5].expr)->nextlist,(yyvsp[-4].expr)->nextlist);
							list<int>* temp2 = (yyvsp[0].expr)->nextlist;
							(yyval.expr)->nextlist = merge(temp1,temp2);//creating the nextlist
						}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 293 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							if((yyvsp[-5].expr)->type->type!=_BOOL)
							{	
								conv2bool((yyvsp[-5].expr));
							}
							backpatch((yyvsp[-3].expr)->nextlist,quadPointer);							
							backpatch((yyvsp[-5].expr)->truelist,(yyvsp[-2].intval));
							if((yyvsp[-1].expr)->nextlist!=NULL)
							{	
								list<int>* temp = merge((yyvsp[-1].expr)->nextlist,(yyvsp[0].expr)->nextlist);
								(yyval.expr)->nextlist = merge((yyvsp[-5].expr)->falselist,temp);
							}
							else
							{
								(yyval.expr)->nextlist = merge((yyvsp[-5].expr)->falselist,(yyvsp[0].expr)->nextlist);
							}
						}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 312 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 317 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							emit(_goto,to_string((yyvsp[-6].intval)));
							backpatch((yyvsp[-2].expr)->nextlist,quadPointer);
							if((yyvsp[-4].expr)->loc->type->type!=_BOOL)//again conversion to bool expression
							conv2bool((yyvsp[-4].expr));
							backpatch((yyvsp[-4].expr)->truelist,(yyvsp[-1].intval));//backpatching truelist
							backpatch((yyvsp[0].expr)->nextlist,(yyvsp[-6].intval));
							(yyval.expr)->nextlist = (yyvsp[-4].expr)->falselist;// assigning nextlist
						}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 330 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							backpatch((yyvsp[-1].expr)->nextlist,quadPointer);//To make it go to the next instruction							
							if((yyvsp[-3].expr)->loc->type->type!=_BOOL)//again bool type checking
							conv2bool((yyvsp[-3].expr));
							backpatch((yyvsp[-3].expr)->truelist,(yyvsp[-8].intval));//backpatching truelist
							backpatch((yyvsp[-7].expr)->nextlist,(yyvsp[-6].intval));
							(yyval.expr)->nextlist = (yyvsp[-3].expr)->falselist;//assigning nextlist
							
						}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 344 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							emit(_goto,to_string((yyvsp[-5].intval)));
							backpatch((yyvsp[-7].expr)->nextlist,quadPointer);
							if((yyvsp[-8].expr)->loc->type->type!=_BOOL)
							conv2bool((yyvsp[-8].expr));
							backpatch((yyvsp[-8].expr)->truelist,(yyvsp[-1].intval));
							backpatch((yyvsp[-3].expr)->nextlist,(yyvsp[-9].intval));
							backpatch((yyvsp[0].expr)->nextlist,(yyvsp[-5].intval));							
							(yyval.expr)->nextlist = (yyvsp[-8].expr)->falselist;//generated nextlist
						}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 356 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 364 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							Symbol* symb = symTab->lookup("$return_value$");
							//do the typechecking with the return type of the function
							if((yyvsp[-1].expr))
							{

								if(symb->type->type==(yyvsp[-1].expr)->loc->type->type)
								{
							
									emit(_RETURN,(yyvsp[-1].expr)->loc->name);//return the value given in case of same type
								}
								else
								{
							
									if(symb->type->type==_VOID)
									{
										cerr<<"Wrong return type"<<endl;//No return value 
									}
									else
									{
										convert((yyvsp[-1].expr),symb->type->type);//type casting
										emit(_RETURN,(yyvsp[-1].expr)->loc->name);//emitting the return
									}
									
								}
							}
							else
							{

								if(symb->type->type==_VOID)
								{
							
									emit(_RETURN,"NULL");//void type return. Will simply print return
								}
								else
								{
									cerr<<"Wrong return type"<<endl;
								}
							}
						}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 409 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.loc) = (yyvsp[-1].loc);
						}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 415 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.loc)=(yyvsp[0].loc);
						}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 419 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.loc) =0;}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 424 "ass5_12CS10034.y" /* yacc.c:1646  */
    {

							(yyval.typeptr)=createType((yyvsp[-1].typeptr)->type);
							globalType = createType((yyvsp[-1].typeptr)->type);						
						}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 435 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 444 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							updateSymbolInitVal((yyvsp[-2].loc),(yyvsp[0].expr)->loc->name);
							(yyval.loc) = (yyvsp[-2].loc);
							
						}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 457 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=createType(_VOID); globalType = createType(_VOID);}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 458 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=createType(_CHAR);globalType = createType(_CHAR);}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 459 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 460 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=createType(_INT);globalType = createType(_INT);}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 461 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 462 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 463 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=createType(_DOUBLE);globalType = createType(_DOUBLE);}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 464 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 465 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 466 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 467 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 468 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 469 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 473 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=(yyvsp[-1].typeptr);}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 474 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 478 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 487 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr)->loc = 0;(yyval.expr)->int_val=-1;}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 507 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							if((yyvsp[-1].typeptr)!=0)
							{
								Type *ptr;
								ptr = (yyvsp[-1].typeptr);
								while(ptr->next)ptr=ptr->next;
								ptr->next = (yyvsp[0].loc)->type;
								updateSymbol((yyvsp[0].loc),(yyvsp[-1].typeptr));
								(yyval.loc) = (yyvsp[0].loc);
							}
							else
							{
								(yyval.loc) = (yyvsp[0].loc);
							}
						}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 524 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=(yyvsp[0].typeptr);}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 525 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 529 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							curSym=(yyvsp[0].loc);//It will hold the value of current symbol being read.
							//It will help us to decide the function table pointer handling in the F non terminal grammar
							(yyval.loc) = (yyvsp[0].loc);
							updateSymbol((yyvsp[0].loc),globalType);//upadating the type
						}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 536 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.loc) = (yyvsp[-1].loc);
						}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 542 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							if((yyvsp[-1].expr)->int_val>0)//Will happen only when we have integer value inside square brackets
							{
								(yyval.loc) = (yyvsp[-4].loc);				
								//my type append like int->array->array so I reverse it to get array->array->int
								//Reversing and appending and again reversing helps me to get the desired list of Types.				
								reverse(&((yyvsp[-4].loc)->type));
								Type *temp = createType(_ARRAY);
								Type *t = (yyvsp[-4].loc)->type;
								while(t->next!=NULL)t=t->next;
								t->next = temp;	
								temp->width = (yyvsp[-1].expr)->int_val * t->width;
								temp->count = (yyvsp[-1].expr)->int_val;//handling the count for calculating the width
								reverse(&((yyvsp[-4].loc)->type));
													
							}
							else//error handling
							{
								cerr<<"Wrong array declaration"<<endl;
							}
						}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 568 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							//funciton declaration 
							//Note that F will make the symTab to point to the symbolTable associated with currentSymbol being read curSym
							curSym = (yyvsp[-4].loc);
							(yyvsp[-4].loc)->symTabPointer = (yyvsp[-2].funcP)->symTabP;
							if((yyvsp[-2].funcP)->symTabP->param==0)//it will help to know the number of parameters in a function which would prove beneficial during function calling
							{
								(yyvsp[-2].funcP)->symTabP->param = (yyvsp[-2].funcP)->symTabP->symbols.size();
							}
							Type* temp = createType((yyvsp[-4].loc)->type->type);
							Type *t = createType(_FUNCTION);//making the function type
							updateSymbol((yyvsp[-4].loc),t);
							Symbol *retval = symTab->lookup("$return_value$");//adding the return value in the _FUNCTION symbol table for type checking in future
							updateSymbol(retval,temp);
							symTab=(yyvsp[-2].funcP)->symTabP->parent;
						}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 586 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							curSym = (yyvsp[-4].loc);
							(yyvsp[-4].loc)->symTabPointer = (yyvsp[-2].funcP)->symTabP;
							if((yyvsp[-2].funcP)->symTabP->param==0)
							{
								(yyvsp[-2].funcP)->symTabP->param = (yyvsp[-2].funcP)->symTabP->symbols.size();
							}
							Type* temp = createType((yyvsp[-4].loc)->type->type);
							Type *t = createType(_FUNCTION);
							updateSymbol((yyvsp[-4].loc),t);
							Symbol *retval = symTab->lookup("$return_value$");
							updateSymbol(retval,temp);
							symTab=(yyvsp[-2].funcP)->symTabP->parent;
						}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 603 "ass5_12CS10034.y" /* yacc.c:1646  */
    {}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 607 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr) = new expression;(yyval.expr)->loc = 0;(yyval.expr)->int_val=-1;}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 616 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.typeptr) = createType(_POINTER);
						}
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 621 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							if((yyvsp[0].typeptr) != NULL)
							{
								(yyval.typeptr) = createType(_POINTER);
								(yyval.typeptr)->next = (yyvsp[0].typeptr);
							}
							else
							{
								(yyval.typeptr) = createType(_POINTER);
							}
						}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 658 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[-1].expr);}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 659 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[-2].expr);}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 692 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							
							if((yyvsp[-2].expr)->array_oc==0 && (yyvsp[-2].expr)->isPointer==0)//when the left side is neither array nor pointer
							{	

								if((yyvsp[0].expr)->loc->type->type!=_BOOL)//bool type is handled separately	
								{	
							
									
									if((yyvsp[0].expr)->loc->type->type!=(yyvsp[-2].expr)->type->type)														
										convert((yyvsp[0].expr),(yyvsp[-2].expr)->type->type);//typechecking and subsequent conversion
									
									emit(COPY,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
									(yyval.expr) = (yyvsp[-2].expr);								
								}
								else
								{  //handling of bool type
									backpatch((yyvsp[0].expr)->truelist,quadPointer);
									backpatch((yyvsp[0].expr)->falselist,quadPointer);
									emit(COPY,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
									(yyval.expr) = (yyvsp[-2].expr);
								}						
							}
							else if((yyvsp[-2].expr)->isPointer==0)
							{	//array exists on left side
								emit(ARRAYLEFT,array_name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
								(yyval.expr) = (yyvsp[-2].expr);
							
							}
							else 
							{
								//The pointer occurred on left side.
								string res = "*";
								res.append((yyvsp[-2].expr)->loc->name);
								emit(COPY,res,(yyvsp[0].expr)->loc->name);
								(yyval.expr) = (yyvsp[-2].expr);
							}


						}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 749 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							//The handling of ternary operator. The semantics is same as done in class illustrations
							(yyval.expr) = new expression;
							(yyval.expr)->loc = symTab->gentemp();
							(yyval.expr)->type = (yyvsp[-4].expr)->type;
							emit(COPY,(yyval.expr)->loc->name,(yyvsp[0].expr)->loc->name);
							list<int> *l = makelist(quadPointer);
							emit(_goto,"---");
							backpatch((yyvsp[-3].expr)->nextlist,quadPointer);
							emit(COPY,(yyval.expr)->loc->name,(yyvsp[-4].expr)->loc->name);
							l = merge(l,makelist(quadPointer));
							emit(_goto,"---");
							backpatch((yyvsp[-7].expr)->nextlist,quadPointer);
							if((yyvsp[-8].expr)->loc->type->type!=_BOOL)	
							conv2bool((yyvsp[-8].expr)); 
							backpatch((yyvsp[-8].expr)->truelist,(yyvsp[-5].intval));
							backpatch((yyvsp[-8].expr)->falselist,(yyvsp[-1].intval));
							backpatch(l,quadPointer);
						}
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 773 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							if((yyvsp[-3].expr)->loc->type->type!=_BOOL)	//typechecking for bool						
							conv2bool((yyvsp[-3].expr));
							if((yyvsp[0].expr)->loc->type->type!=_BOOL)
							conv2bool((yyvsp[0].expr));
							backpatch((yyvsp[-3].expr)->falselist,(yyvsp[-1].intval));//backpatching falselist of statement 1
							(yyval.expr)->loc = symTab->gentemp();
							updateSymbol((yyval.expr)->loc,createType(_BOOL));
							(yyval.expr)->type = createType(_BOOL);
							(yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist,(yyvsp[0].expr)->truelist);//truelist assingment
							(yyval.expr)->falselist = (yyvsp[0].expr)->falselist;//falselist assignment
						}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 792 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							if((yyvsp[-3].expr)->loc->type->type!=_BOOL)//type checking							
							conv2bool((yyvsp[-3].expr));
							if((yyvsp[0].expr)->loc->type->type!=_BOOL)
							conv2bool((yyvsp[0].expr));
							backpatch((yyvsp[-3].expr)->truelist,(yyvsp[-1].intval));
							(yyval.expr)->loc = symTab->gentemp();
							updateSymbol((yyval.expr)->loc,createType(_BOOL));//making the type bool
							(yyval.expr)->type = createType(_BOOL);
							(yyval.expr)->truelist = (yyvsp[0].expr)->truelist;
							(yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist,(yyvsp[0].expr)->falselist);
						}
#line 2468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 809 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							//handled as if it is the binary operator
							(yyval.expr) = new expression;
							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr)->type = (yyvsp[-2].expr)->type;
							(yyval.expr)->loc=symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->type);
							(yyval.expr)->type = (yyval.expr)->loc->type;
							emit(BIT_OR,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
						}
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 823 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							//handled as if both the left and right side are boolean types.
							//Not checked for test case. Will be differently implemented if considered as binary operator
							(yyval.expr) = new expression;
							backpatch((yyvsp[-3].expr)->truelist,quadPointer);
							emit(COPY,(yyvsp[-3].expr)->loc->name,"1");
							emit(_goto,to_string((yyvsp[-1].intval)));
							backpatch((yyvsp[-3].expr)->falselist,quadPointer);
							emit(COPY,(yyvsp[-3].expr)->loc->name,"0");
							emit(_goto,to_string((yyvsp[-1].intval)));

							(yyval.expr)->truelist = makelist(quadPointer);
							backpatch((yyvsp[0].expr)->falselist,quadPointer);
							emit(_if,"---",(yyvsp[-3].expr)->loc->name);
							(yyval.expr)->falselist = makelist(quadPointer);
							emit(_goto,"---");

							list<int>* temp = makelist(quadPointer);
							(yyval.expr)->falselist = merge((yyval.expr)->falselist,temp);
							backpatch((yyvsp[0].expr)->truelist,quadPointer);
							emit(_if,"----",(yyvsp[0].expr)->loc->name);
							temp = makelist(quadPointer);
							(yyval.expr)->truelist = merge((yyval.expr)->truelist,temp);
							emit(_goto,"---");						
						}
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 852 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							//handled as if it is the binary operator
							(yyval.expr) = new expression;
							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr)->loc=symTab->gentemp();
							(yyval.expr)->type = (yyvsp[-2].expr)->type;
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->type);
							emit(BIT_AND,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
						}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 866 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							//relational_expression handling Look at the funciton Definitions for more info.
							(yyval.expr) = relationEvaluate(EQUAL_TO,(yyvsp[-2].expr),(yyvsp[0].expr));
						}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 872 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							//relational_expression handling Look at the funciton Definitions for more info.
							(yyval.expr) = relationEvaluate(NOT_EQUAL_TO,(yyvsp[-2].expr),(yyvsp[0].expr));
						}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 880 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							//relational_expression handling Look at the funciton Definitions for more info.
							(yyval.expr) = relationEvaluate(LESS_THAN,(yyvsp[-2].expr),(yyvsp[0].expr));
						}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 886 "ass5_12CS10034.y" /* yacc.c:1646  */
    {	//relational_expression handling Look at the funciton Definitions for more info.
							(yyval.expr) = relationEvaluate(GREATER_THAN,(yyvsp[-2].expr),(yyvsp[0].expr));
						}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 891 "ass5_12CS10034.y" /* yacc.c:1646  */
    {//relational_expression handling Look at the funciton Definitions for more info.
							(yyval.expr) = relationEvaluate(LESS_THAN_EQUAL,(yyvsp[-2].expr),(yyvsp[0].expr));

						}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 897 "ass5_12CS10034.y" /* yacc.c:1646  */
    {//relational_expression handling Look at the funciton Definitions for more info.
							(yyval.expr) = relationEvaluate(GREATER_THAN_EQUAL,(yyvsp[-2].expr),(yyvsp[0].expr));
						}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 904 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							if((yyvsp[0].expr)->type->type==_INT)//will only occur if right side expression is of integer type
							{
								//Handled like a binary operator
								(yyval.expr) = new expression;
								(yyval.expr)->loc=symTab->gentemp();
								updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->type);						
								(yyval.expr)->type = (yyvsp[-2].expr)->type;
								emit(LEFT_SHIFT,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
							}
							else
							{
								cerr<<"Incompatible type"<<endl;
							}
						}
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 921 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							if((yyvsp[0].expr)->type->type==_INT)
							{
								//same as above
								//Handled like a binary operator
								(yyval.expr) = new expression;
								(yyval.expr)->loc=symTab->gentemp();
								updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->type);									
								(yyval.expr)->type = (yyvsp[-2].expr)->type;
								emit(RIGHT_SHIFT,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
							}
							else{
								cerr<<"Incompatible type"<<endl;
							}
						}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 939 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							
							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->loc->type);
							(yyval.expr)->type = (yyvsp[-2].expr)->type;
							emit(PLUS,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
						}
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 950 "ass5_12CS10034.y" /* yacc.c:1646  */
    {

							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->loc->type);
							(yyval.expr)->type = (yyvsp[-2].expr)->type;
							emit(MINUS,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
						}
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 963 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							
							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->loc->type);
							(yyval.expr)->type = (yyval.expr)->loc->type;							
							emit(MULT,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);	
						}
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 974 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							
							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->loc->type);
							(yyval.expr)->type = (yyval.expr)->loc->type;
							emit(DIVIDE,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);	
						}
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 985 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							
							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->loc->type);
							(yyval.expr)->type = (yyval.expr)->loc->type;
							emit(MODULUS,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
						}
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 998 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							if((yyvsp[0].expr)->array_oc!=0)
							{
								(yyval.expr) = new expression;
								(yyval.expr)->loc = symTab->gentemp();
								updateSymbol((yyval.expr)->loc,getBaseType((yyvsp[0].expr)->type));
								(yyval.expr)->type = getBaseType((yyvsp[0].expr)->type);
								emit(ARRAYRIGHT,(yyval.expr)->loc->name,array_name,(yyvsp[0].expr)->loc->name);
							}
							else if((yyvsp[0].expr)->isPointer==1)
							{
								(yyval.expr) = new expression;
								(yyval.expr)->loc = symTab->gentemp();
								updateSymbol((yyval.expr)->loc,getBaseType((yyvsp[0].expr)->type));
								(yyval.expr)->type = getBaseType((yyvsp[0].expr)->type);
								emit(UPOINTER,(yyval.expr)->loc->name,(yyvsp[0].expr)->loc->name);
							}
							else
							{
								(yyval.expr) = (yyvsp[0].expr);
							}
						}
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1022 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							if((yyvsp[0].expr)->loc->type->type !=(yyvsp[-2].typeptr)->type)
							{
								convert((yyvsp[0].expr),(yyvsp[-2].typeptr)->type);
							}
							(yyval.expr) = (yyvsp[0].expr);
						}
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1031 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
								(yyval.op)=new opPointer;
								(yyval.op)->op = UADDRESS;
							}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1036 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
								(yyval.op)=new opPointer;
								(yyval.op)->op = UPOINTER;
							}
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1041 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
								(yyval.op)=new opPointer;
								(yyval.op)->op = UPLUS;
							}
#line 2755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1046 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
								(yyval.op)=new opPointer;
								(yyval.op)->op = UMINUS;
							}
#line 2764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1051 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
								(yyval.op)=new opPointer;
								(yyval.op)->op = UBITNEGATION;
							}
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1056 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
								(yyval.op)=new opPointer;
								(yyval.op)->op = UNEGATION;
							}
#line 2782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1063 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = (yyvsp[0].expr);
						}
#line 2790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1068 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							emit(PLUS,(yyvsp[0].expr)->loc->name,(yyvsp[0].expr)->loc->name,to_string(1));															
							(yyval.expr) = (yyvsp[0].expr);
							(yyval.expr)->loc = (yyvsp[0].expr)->loc;
							(yyval.expr)->type = (yyvsp[0].expr)->type;
						}
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1076 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							emit(MINUS,(yyvsp[0].expr)->loc->name,(yyvsp[0].expr)->loc->name,to_string(1));	
							(yyval.expr) = (yyvsp[0].expr);
							(yyval.expr)->loc = (yyvsp[0].expr)->loc;
							(yyval.expr)->type = (yyvsp[0].expr)->type;							
						}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1084 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							if((yyvsp[-1].op)->op!=UADDRESS && (yyvsp[-1].op)->op!=UPOINTER)
							{
								(yyval.expr) = new expression;
								(yyval.expr)->loc = symTab->gentemp();
								updateSymbol((yyval.expr)->loc,(yyvsp[0].expr)->type);
								emit((yyvsp[-1].op)->op,(yyval.expr)->loc->name,(yyvsp[0].expr)->loc->name);
								(yyval.expr)->type = (yyvsp[0].expr)->type;
							}
							if((yyvsp[-1].op)->op==UPOINTER)
							{
									(yyval.expr) = new expression;
									(yyval.expr)->loc = (yyvsp[0].expr)->loc;
									(yyval.expr)->type = (yyvsp[0].expr)->loc->type;
									(yyval.expr)->isPointer = 1;//assign that it is the of pointer type
									(yyval.expr)->truelist = 0;
									(yyval.expr)->falselist = 0;
									(yyval.expr)->array_oc = 0;
								

							}
							if((yyvsp[-1].op)->op==UADDRESS)
							{
								(yyval.expr) = new expression;
								(yyval.expr)->loc = symTab->gentemp();
								Type *t = createType(_POINTER);//the temporary will be a pointer type
								t->next = (yyvsp[0].expr)->type;
								updateSymbol((yyval.expr)->loc,t);
								(yyval.expr)->type=(yyval.expr)->loc->type;
								emit((yyvsp[-1].op)->op,(yyval.expr)->loc->name,(yyvsp[0].expr)->loc->name);
							}
						}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1124 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.args)=0;}
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1129 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.args)=new arg_list;
							(yyval.args)->args = makelistArgs((yyvsp[0].expr));
						}
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1135 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.args) = new arg_list;
							list<expression*> *temp = makelistArgs((yyvsp[0].expr));
							mergeArgs((yyvsp[-2].args)->args,temp);
							(yyval.args)->args = (yyvsp[-2].args)->args;
						}
#line 2875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1144 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = (yyvsp[0].expr);
							(yyval.expr)->array_oc = 0;//not an array type
						}
#line 2884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1150 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;							
							if((yyvsp[-3].expr)->array_oc == 0)//if it is not the array type, i.e. the type is encountered for the first time
							{
								(yyval.expr)->loc = symTab->gentemp();
								Type *baseType = getBaseType((yyvsp[-3].expr)->loc->type);								
								(yyval.expr)->loc->type = (yyvsp[-3].expr)->loc->type->next;
								(yyval.expr)->type = (yyval.expr)->loc->type;
								array_name = (yyvsp[-3].expr)->loc->name;//store the array name for quad result declaration
								int add_size = (yyval.expr)->loc->type->width;
								(yyval.expr)->array_oc = baseType->width;
								emit(MULT,((yyval.expr)->loc->name),(yyvsp[-1].expr)->loc->name,to_string(add_size));
								//Not that in case of two dimensional array the temporary will contain the type array for future use. This can be easily solved in the final update to symbol table
							}
							else
							{
								(yyval.expr)->loc = symTab->gentemp();
								Type *baseType = getBaseType((yyvsp[-3].expr)->loc->type);								
								(yyval.expr)->loc->type = (yyvsp[-3].expr)->loc->type->next;
								(yyval.expr)->type = (yyval.expr)->loc->type;								
								(yyval.expr)->array_oc = baseType->width;
								int add_size = (yyval.expr)->loc->type->width;
								Symbol* temp = symTab->gentemp();
								updateSymbol(temp,(yyval.expr)->loc->type);
								//This is the case of multi dimensional array
								emit(MULT,temp->name,(yyvsp[-1].expr)->loc->name,to_string(add_size));
								emit(PLUS,(yyval.expr)->loc->name,(yyvsp[-3].expr)->loc->name,temp->name);
							}
						}
#line 2918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1181 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							//the function handling
							(yyval.expr) = new expression;
							(yyval.expr)->loc = symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-3].expr)->loc->type);
							(yyval.expr)->type = (yyvsp[-3].expr)->type;

							list<expression*> *L = new list<expression*>;
							symbolTable *temp = symTab;
							symTab = (yyvsp[-3].expr)->loc->symTabPointer;
							L = (yyvsp[-1].args)->args;//The arguments list
							int number_of_args = (yyvsp[-1].args)->args->size();
							int number_of_params = symTab->param;

							
							if(number_of_params>number_of_args)//parameter count checking
							{
								cerr<<"TOO LESS ARGUMENTS"<<endl;
							}
							else if(number_of_params<number_of_args)
							{
								cerr<<"TOO MANY ARGUMENTS"<<endl;
							}
							else
							{	//One can do parameter type checking but for the sake of ease of complexity it is avoided
								L = (yyvsp[-1].args)->args;
								for(list<expression*>::iterator it = (*L).begin();it != (*L).end(); ++it)
								{
									expression* index = *it;
									emit(PARAM,index->loc->name);//printing quads of parameters
								}
								emit(CALL,(yyval.expr)->loc->name,(yyvsp[-3].expr)->loc->name,to_string(number_of_params));//calling the funciton
							}
							symTab = temp;
						}
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1222 "ass5_12CS10034.y" /* yacc.c:1646  */
    {							
							(yyval.expr) = new expression;
							(yyval.expr)->loc = symTab->gentemp();													
							updateSymbol((yyval.expr)->loc,(yyvsp[-1].expr)->loc->type);
							(yyval.expr)->type = (yyval.expr)->loc->type;							
							emit(COPY,(yyval.expr)->loc->name,(yyvsp[-1].expr)->loc->name);
							emit(PLUS,(yyvsp[-1].expr)->loc->name,(yyvsp[-1].expr)->loc->name,"1");	
						}
#line 2971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1232 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc = symTab->gentemp();														
							updateSymbol((yyval.expr)->loc,(yyvsp[-1].expr)->loc->type);
							(yyval.expr)->type = (yyval.expr)->loc->type;
							emit(COPY,(yyval.expr)->loc->name,(yyvsp[-1].expr)->loc->name);
							emit(MINUS,(yyvsp[-1].expr)->loc->name,(yyvsp[-1].expr)->loc->name,"1");
						}
#line 2984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1246 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc = (yyvsp[0].loc);
							(yyval.expr)->type = (yyval.expr)->loc->type;
							(yyval.expr)->truelist = 0;
							(yyval.expr)->falselist = 0;
						}
#line 2996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1254 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1258 "ass5_12CS10034.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[-1].expr);}
#line 3008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1262 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							(yyval.expr)->type = createType(_INT);
							updateSymbol((yyval.expr)->loc,(yyval.expr)->type);
							(yyval.expr)->int_val = (yyvsp[0].intval);//assingment of integer value. Useful for array declaration and width calculations
							updateSymbolInitVal((yyval.expr)->loc,to_string((yyvsp[0].intval)));
							emit(COPY,(yyval.expr)->loc->name,to_string((yyvsp[0].intval)));		
							(yyval.expr)->truelist = 0;
							(yyval.expr)->falselist = 0;					
						}
#line 3024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1275 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							(yyval.expr)->type = createType(_DOUBLE);
							updateSymbol((yyval.expr)->loc,(yyval.expr)->type);
							updateSymbolInitVal((yyval.expr)->loc,to_string((yyvsp[0].fval)));
							emit(COPY,(yyval.expr)->loc->name,to_string((yyvsp[0].fval)));
							(yyval.expr)->double_val = (yyvsp[0].fval);
							(yyval.expr)->int_val=-1;//when we have wrong integer type will throw an error in case of array width
							(yyval.expr)->truelist = 0;
							(yyval.expr)->falselist = 0;	
						}
#line 3041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1289 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							(yyval.expr)->type = createType(_CHAR);
							updateSymbol((yyval.expr)->loc,(yyval.expr)->type);
							updateSymbolInitVal((yyval.expr)->loc,to_string((yyvsp[0].cval)));
							emit(COPY,(yyval.expr)->loc->name,to_string((yyvsp[0].cval)));
							(yyval.expr)->char_val = to_string((yyvsp[0].cval));
							(yyval.expr)->int_val = -1;//when we have wrong integer type will throw error in case of array width
						}
#line 3056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1305 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.intval)=quadPointer;//contain the value of next quad pointer
						}
#line 3064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1309 "ass5_12CS10034.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->nextlist=makelist(quadPointer);//emit a dangling goto
							emit(_goto,"---");	
						}
#line 3074 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3078 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1315 "ass5_12CS10034.y" /* yacc.c:1906  */

//in case of error.
void yyerror(const char* s){
    printf("%s",s);
}
