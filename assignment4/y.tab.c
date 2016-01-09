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
#line 2 "ass4_12CS10034.y" /* yacc.c:339  */

    #include <stdio.h>
   	void yyerror(const char*);
    extern int yylex(void);
 

#line 73 "y.tab.c" /* yacc.c:339  */

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
#line 8 "ass4_12CS10034.y" /* yacc.c:355  */

	int intval;
	char* cval;
	float fval;
	char* sval;

#line 260 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 275 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   943

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  340

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
       0,    36,    36,    37,    40,    41,    44,    47,    47,    51,
      52,    55,    56,    57,    58,    59,    60,    63,    64,    65,
      68,    71,    71,    75,    76,    79,    80,    83,    86,    86,
      90,    91,    92,    95,    96,    97,    98,   101,   102,   103,
     104,   109,   112,   112,   116,   117,   118,   119,   122,   122,
     126,   127,   130,   131,   134,   135,   136,   137,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   155,   156,   159,   159,   163,   164,   165,   168,   168,
     172,   173,   176,   177,   180,   181,   182,   185,   188,   191,
     191,   195,   196,   197,   198,   199,   200,   201,   202,   205,
     205,   209,   209,   213,   213,   217,   218,   221,   222,   225,
     226,   229,   230,   233,   234,   237,   238,   241,   244,   245,
     246,   249,   250,   253,   253,   257,   260,   261,   264,   265,
     270,   271,   274,   277,   278,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   294,   295,   298,   299,
     302,   303,   306,   307,   310,   311,   314,   315,   318,   319,
     320,   323,   324,   325,   326,   327,   330,   331,   332,   335,
     336,   337,   340,   341,   342,   343,   346,   347,   350,   351,
     352,   353,   354,   355,   358,   359,   360,   361,   362,   363,
     367,   367,   372,   373,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   387,   388,   389,   390,   393,   394,   395,
     398
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
  "'%'", "'~'", "'!'", "$accept", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", "statement", "labeled_statement",
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
  "assignment_operator", "conditional_expression", "logical_OR_expression",
  "logical_AND_expression", "inclusive_OR_expression",
  "exclusive_OR_expression", "AND_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_operator",
  "unary_expression", "argument_expression_list_opt",
  "argument_expression_list", "postfix_expression", "primary_expression",
  "constant", "enumeration_constant", YY_NULLPTR
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

#define YYPACT_NINF -208

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-208)))

#define YYTABLE_NINF -115

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     904,  -208,  -208,  -208,  -208,    -8,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,   829,  -208,  -208,  -208,   -54,   904,   904,  -208,
     904,   904,   -36,     1,  -208,  -208,    11,   -25,   -11,  -208,
     544,   -33,  -208,  -208,  -208,  -208,  -208,  -208,    68,  -208,
      36,    11,  -208,    36,   546,    95,   904,  -208,   -54,  -208,
      36,    73,  -208,   -26,  -208,   116,  -208,  -208,  -208,   120,
     619,  -208,  -208,  -208,  -208,  -208,   635,   635,    83,   460,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,   -41,
     157,    88,    99,   136,    70,    43,    84,   110,   -47,  -208,
     689,   129,   -23,  -208,  -208,   238,  -208,  -208,   139,   866,
      22,  -208,   -19,   689,   460,  -208,   460,  -208,  -208,   689,
     177,    26,   546,  -208,    40,  -208,   282,  -208,   282,   146,
     124,  -208,   689,   689,   689,   689,   689,   689,   689,   689,
     689,   689,   689,   689,   689,   689,   689,   689,   689,   689,
     689,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,   689,   184,  -208,  -208,   689,   689,
     186,   153,   689,   155,   159,   376,   156,   192,   158,   689,
     161,   162,   167,  -208,  -208,  -208,   166,   238,  -208,  -208,
     176,  -208,  -208,  -208,  -208,   163,  -208,  -208,    20,   191,
     193,   204,  -208,   207,    11,   705,    97,  -208,  -208,  -208,
    -208,   211,   214,   212,  -208,  -208,    58,  -208,  -208,  -208,
    -208,  -208,  -208,   565,  -208,   689,   157,    -6,    88,    99,
     136,    70,    43,    43,    84,    84,    84,    84,   110,   110,
     -47,   -47,  -208,  -208,  -208,  -208,  -208,  -208,   216,   217,
      89,  -208,  -208,   225,  -208,   376,   262,   322,   226,   689,
     227,   689,   689,   376,  -208,  -208,  -208,  -208,  -208,  -208,
     789,   259,   689,   230,   232,  -208,   689,   234,   234,  -208,
    -208,   546,    83,  -208,  -208,   689,  -208,   689,  -208,   376,
    -208,   229,   240,   689,  -208,   126,  -208,   128,   130,  -208,
    -208,  -208,  -208,   243,  -208,  -208,   245,  -208,    33,  -208,
    -208,  -208,   689,   689,   258,   376,   376,   376,  -208,  -208,
    -208,    64,   132,   260,   689,   326,  -208,  -208,  -208,   265,
     689,   264,   376,  -208,   270,   376,  -208,   376,  -208,  -208
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    56,    59,    84,    64,    79,    54,    63,    87,    61,
      62,    57,    85,    60,    65,    55,    66,    58,    86,    67,
      68,    69,     0,     2,     4,     5,    90,    49,    49,    70,
      49,    49,    77,     0,     1,     3,   100,     0,    42,    50,
      52,     0,    89,    48,    44,    45,    46,    47,     0,   107,
     105,    99,    41,    90,     0,     0,     7,     9,    90,    91,
      90,    88,   210,     0,    80,    82,   106,   108,    51,    52,
       0,   203,   207,   208,   209,   205,     0,     0,   124,     0,
     179,   178,   180,   181,   182,   183,    53,   118,   133,   146,
     148,   150,   152,   154,   156,   158,   161,   166,   169,   172,
       0,   176,   184,   194,   204,    22,     6,    10,     0,   104,
     100,    75,     0,     0,     0,   188,     0,   185,   186,     0,
       0,     0,     0,   123,     0,   126,    74,   117,    74,     0,
       0,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   187,   176,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,     0,     0,   199,   200,   191,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,    29,
       0,     0,   203,    26,    11,    12,     0,    21,    23,    13,
       0,    14,    15,    16,    25,    28,    92,   115,    90,     0,
       0,   109,   111,   103,   100,   102,    99,    76,    81,    83,
     132,     0,     0,     0,   129,   119,   124,   121,   125,   127,
      73,    71,    72,     0,   206,     0,   149,     0,   151,   153,
     155,   157,   159,   160,   164,   165,   162,   163,   167,   168,
     170,   171,   173,   174,   175,   134,   198,   192,     0,   190,
       0,   197,    39,     0,    38,    29,     0,    29,     0,     0,
       0,     0,     0,    29,    20,    24,    27,   113,    98,    97,
       0,     0,     0,   179,     0,   101,     0,   189,     0,   128,
     120,     0,   124,   177,   131,     0,   196,     0,   195,    29,
      19,     0,     0,    29,    37,     0,    40,     0,     0,    17,
     110,   112,   116,     0,    96,    93,     0,   122,     0,   147,
     193,    18,     0,    29,     0,    29,    29,    29,    94,    95,
     201,   124,     0,     0,    29,    31,    32,    33,   202,     0,
      29,     0,    29,    34,     0,    29,    30,    29,    36,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -208,  -208,   329,  -208,  -208,  -208,  -162,  -208,   297,  -208,
    -208,   171,  -208,  -144,  -208,  -208,  -208,   -37,  -208,     0,
     113,  -208,   300,  -208,    -9,    34,   237,  -208,  -208,  -208,
     242,    12,  -208,   -22,  -208,  -208,  -102,  -208,  -208,   318,
     261,  -208,  -208,   102,  -208,    65,  -116,    91,  -207,  -208,
    -208,   250,   -77,  -105,   -53,  -208,  -108,  -208,   244,   241,
     247,   251,   246,     8,    16,    66,    67,   -88,  -208,   -60,
    -208,  -208,  -208,  -208,  -208,  -208
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    55,    56,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,    25,    37,    58,
      44,    38,    39,    27,    28,   127,   221,    29,    33,    63,
      64,    30,    31,    69,    41,    61,    50,   274,   199,    42,
      51,   200,   201,   202,   203,   129,    86,   121,   122,   123,
     124,   125,   195,   209,   131,   164,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     248,   249,   102,   103,   104,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    87,   130,    57,    40,   210,   217,    59,   205,   281,
     115,   210,   151,   256,   213,   132,   117,   118,     3,   107,
     -43,    62,    26,   165,   166,   167,    36,    43,    43,     3,
      43,    43,    32,   148,    12,   260,   -78,   130,   108,   130,
     152,   133,    60,   149,   150,    12,    18,   111,    49,    52,
     204,   112,   168,   152,   207,   169,   227,    18,   170,   152,
     242,   243,   244,    67,   210,   285,    53,   253,   194,    87,
     126,   225,   152,    48,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   128,   250,   290,   140,   141,  -114,  -114,   218,   215,
      36,   299,   272,   216,     3,   126,   320,   126,    62,   198,
     321,   245,   152,   292,   281,   247,    36,   126,   119,   126,
      12,   120,    49,   138,   139,   276,   128,   311,   128,   142,
     143,   280,    18,   144,   145,   283,   119,   328,   128,   120,
     128,    45,   119,    46,    47,   120,   232,   233,   109,   314,
     194,   110,   275,   325,   326,   327,   234,   235,   236,   237,
     220,   119,   220,   152,   120,   307,   225,   105,   288,   323,
     336,   135,   284,   338,   113,   339,   267,   309,    54,   211,
     331,   212,   295,   136,   297,   298,   334,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   146,   147,
     224,   225,   315,   225,   316,   225,   317,   225,   329,   225,
     238,   239,   134,   240,   241,   196,    49,   214,    67,   303,
     293,   137,   223,   306,   246,   152,   251,   252,    87,   254,
     255,   257,   258,   259,   310,   322,   261,   262,   263,   264,
     225,     1,   171,   172,     2,     3,   173,   174,   175,     4,
     266,     5,     6,     7,   176,   177,   178,     8,     9,    10,
      11,    12,   179,    13,    14,    70,    15,   268,   180,   269,
     198,    16,    17,    18,   181,    19,    20,    21,   182,    72,
      73,   270,    74,    75,   271,    76,    77,   277,     2,     3,
     278,   279,   286,     4,   287,     5,   289,     7,   291,   302,
     294,   296,     9,    10,   312,    12,   282,    13,    14,   304,
     105,   305,   -29,    79,   313,    16,    17,    18,    80,    19,
      20,    21,   318,    81,   319,     1,    82,    83,     2,     3,
      84,    85,   324,     4,   330,     5,     6,     7,   332,   333,
     335,     8,     9,    10,    11,    12,   337,    13,    14,    70,
      15,    35,   106,    68,   208,    16,    17,    18,   265,    19,
      20,    21,    71,    72,    73,   222,    74,    75,    66,    76,
      77,   206,   301,   308,   219,   228,   226,     0,     0,     0,
     171,   172,   229,   231,   173,   174,   175,   230,     0,     0,
       0,     0,   176,   177,   178,     0,     0,    79,     0,     0,
     179,     0,    80,    70,     0,     0,   180,    81,     0,     0,
      82,    83,   181,     0,    84,    85,   182,    72,    73,     0,
      74,    75,     0,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,     0,
       0,    79,     0,     0,     0,     0,    80,     0,     0,     0,
       0,    81,     0,     0,    82,    83,     2,     3,    84,    85,
       0,     4,     0,     5,     0,     7,     0,     0,     0,     0,
       9,    10,     0,    12,     0,    13,    14,    70,     0,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21,
      71,    72,    73,     0,    74,    75,     0,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
      80,     0,     0,     0,     0,    81,     0,     1,    82,    83,
       2,     3,    84,    85,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,    70,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21,     0,     0,    71,    72,    73,     0,
      74,    75,    70,    76,    77,     0,     0,     0,     0,     0,
       0,     0,    54,     0,     0,    71,    72,    73,     0,    74,
      75,     0,    76,    77,     0,     0,    -8,     0,    78,     0,
       0,    79,     0,     0,     0,     0,    80,     0,     0,     0,
       0,    81,     0,     0,    82,    83,     0,   282,    84,    85,
      79,     0,     0,     0,     0,    80,    70,     0,     0,     0,
      81,     0,     0,    82,    83,     0,     0,    84,    85,    71,
      72,    73,    70,    74,    75,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,     0,    74,
      75,     0,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,     0,    80,
       0,     0,     0,     0,    81,     0,     0,    82,    83,     0,
     116,    84,    85,     0,     0,    80,    70,     0,     0,     0,
      81,     0,     0,    82,    83,     0,     0,    84,    85,    71,
      72,    73,    70,    74,    75,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,     0,    74,
      75,     0,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,    80,
       0,     0,     0,     0,    81,     0,     0,    82,    83,     0,
      79,    84,    85,     0,     0,   273,     0,     0,     0,     0,
      81,     0,     1,    82,    83,     2,     3,    84,    85,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,    34,
       0,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,   300,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,   197,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,     0,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    54,    79,    40,    26,   113,   122,    40,   110,   216,
      70,   119,   100,   175,   119,    56,    76,    77,     7,    56,
      74,    40,    22,    46,    47,    48,    80,    27,    28,     7,
      30,    31,    40,    80,    23,   179,    72,   114,    60,   116,
     100,    82,    75,    90,    91,    23,    35,    73,    36,    74,
      28,    77,    75,   113,    73,    78,   133,    35,    81,   119,
     148,   149,   150,    51,   172,    71,    77,   172,   105,   122,
      79,    77,   132,    72,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,    79,   169,   255,    51,    52,    76,    77,    58,    73,
      80,   263,   204,    77,     7,   114,    73,   116,    40,   109,
      77,   164,   172,   257,   321,   168,    80,   126,    78,   128,
      23,    81,   110,    53,    54,    28,   114,   289,   116,    86,
      87,    73,    35,    49,    50,   223,    78,    73,   126,    81,
     128,    28,    78,    30,    31,    81,   138,   139,    75,   293,
     187,    78,   205,   315,   316,   317,   140,   141,   142,   143,
     126,    78,   128,   223,    81,   281,    77,    72,    79,   313,
     332,    83,   225,   335,    58,   337,   198,   285,    58,   114,
     324,   116,   259,    84,   261,   262,   330,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    88,    89,
      76,    77,    76,    77,    76,    77,    76,    77,    76,    77,
     144,   145,    55,   146,   147,    76,   204,    40,   206,   272,
     257,    85,    76,   276,    40,   285,    40,    74,   281,    74,
      71,    75,    40,    75,   287,   312,    75,    75,    71,    73,
      77,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      74,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    76,    30,    76,
     270,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    77,    44,    45,    77,    47,    48,    76,     6,     7,
      76,    79,    76,    11,    77,    13,    71,    15,    36,    40,
      74,    74,    20,    21,    75,    23,    72,    25,    26,    79,
      72,    79,    74,    75,    74,    33,    34,    35,    80,    37,
      38,    39,    79,    85,    79,     3,    88,    89,     6,     7,
      92,    93,    74,    11,    74,    13,    14,    15,    12,    74,
      76,    19,    20,    21,    22,    23,    76,    25,    26,    27,
      28,    22,    55,    53,   112,    33,    34,    35,   187,    37,
      38,    39,    40,    41,    42,   128,    44,    45,    50,    47,
      48,   110,   270,   282,   124,   134,   132,    -1,    -1,    -1,
       4,     5,   135,   137,     8,     9,    10,   136,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    75,    -1,    -1,
      24,    -1,    80,    27,    -1,    -1,    30,    85,    -1,    -1,
      88,    89,    36,    -1,    92,    93,    40,    41,    42,    -1,
      44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    88,    89,     6,     7,    92,    93,
      -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    -1,    44,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    85,    -1,     3,    88,    89,
       6,     7,    92,    93,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    27,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,    -1,    -1,    40,    41,    42,    -1,
      44,    45,    27,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    40,    41,    42,    -1,    44,
      45,    -1,    47,    48,    -1,    -1,    72,    -1,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    88,    89,    -1,    72,    92,    93,
      75,    -1,    -1,    -1,    -1,    80,    27,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    40,
      41,    42,    27,    44,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,
      75,    92,    93,    -1,    -1,    80,    27,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    40,
      41,    42,    27,    44,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,
      75,    92,    93,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      85,    -1,     3,    88,    89,     6,     7,    92,    93,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,     0,
      -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    57,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    40,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,    95,    96,    97,   111,   113,   117,   118,   121,
     125,   126,    40,   122,     0,    96,    80,   112,   115,   116,
     127,   128,   133,   113,   114,   114,   114,   114,    72,   125,
     130,   134,    74,    77,    58,    98,    99,   111,   113,    40,
      75,   129,    40,   123,   124,   169,   133,   125,   116,   127,
      27,    40,    41,    42,    44,    45,    47,    48,    72,    75,
      80,    85,    88,    89,    92,    93,   140,   148,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   166,   167,   168,    72,   102,   111,   127,    75,
      78,    73,    77,    58,    75,   163,    75,   163,   163,    78,
      81,   141,   142,   143,   144,   145,   118,   119,   125,   139,
     146,   148,    56,    82,    55,    83,    84,    85,    53,    54,
      51,    52,    86,    87,    49,    50,    88,    89,    80,    90,
      91,   161,   163,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   149,    46,    47,    48,    75,    78,
      81,     4,     5,     8,     9,    10,    16,    17,    18,    24,
      30,    36,    40,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   146,    76,    40,   113,   132,
     135,   136,   137,   138,    28,   130,   134,    73,   124,   147,
     150,   139,   139,   147,    40,    73,    77,   140,    58,   145,
     119,   120,   120,    76,    76,    77,   152,   146,   153,   154,
     155,   156,   157,   157,   158,   158,   158,   158,   159,   159,
     160,   160,   161,   161,   161,   148,    40,   148,   164,   165,
     146,    40,    74,   147,    74,    71,   100,    75,    40,    75,
     107,    75,    75,    71,    73,   105,    74,   127,    76,    76,
      77,    77,   130,    80,   131,   148,    28,    76,    76,    79,
      73,   142,    72,   161,   148,    71,    76,    77,    79,    71,
     100,    36,   107,   111,    74,   146,    74,   146,   146,   100,
      57,   137,    40,   148,    79,    79,   148,   140,   141,   150,
     148,   100,    75,    74,   107,    76,    76,    76,    79,    79,
      73,    77,   146,   107,    74,   100,   100,   100,    73,    76,
      74,   107,    12,    74,   107,    76,   100,    76,   100,   100
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     102,   103,   103,   104,   104,   105,   105,   106,   107,   107,
     108,   108,   108,   109,   109,   109,   109,   110,   110,   110,
     110,   111,   112,   112,   113,   113,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   117,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   122,   122,
     123,   123,   124,   124,   125,   125,   125,   126,   127,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   140,   140,
     140,   141,   141,   142,   142,   143,   144,   144,   145,   145,
     146,   146,   147,   148,   148,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   156,
     156,   157,   157,   157,   157,   157,   158,   158,   158,   159,
     159,   159,   160,   160,   160,   160,   161,   161,   162,   162,
     162,   162,   162,   162,   163,   163,   163,   163,   163,   163,
     164,   164,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   167,   167,   167,   167,   168,   168,   168,
     169
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     4,     1,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       3,     1,     0,     1,     2,     1,     1,     2,     1,     0,
       7,     5,     5,     5,     7,     9,     8,     3,     2,     2,
       3,     3,     1,     0,     2,     2,     2,     2,     1,     0,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     0,     5,     6,     2,     1,     0,
       1,     3,     1,     3,     1,     1,     1,     1,     2,     1,
       0,     1,     3,     5,     6,     6,     5,     4,     4,     1,
       0,     1,     0,     1,     0,     2,     3,     1,     2,     1,
       3,     1,     3,     2,     1,     1,     3,     1,     1,     3,
       4,     2,     4,     1,     0,     2,     1,     2,     3,     2,
       1,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     4,
       1,     0,     1,     3,     1,     4,     4,     3,     3,     2,
       2,     6,     7,     1,     1,     1,     3,     1,     1,     1,
       1
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
      
#line 1757 "y.tab.c" /* yacc.c:1646  */
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
#line 402 "ass4_12CS10034.y" /* yacc.c:1906  */


void yyerror(const char* s){
    printf("%s",s);
}
