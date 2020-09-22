/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "icg.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	void yyerror(const char*);
	int yylex();

	extern FILE * yyin, *yyout;

	FILE *fp_icg, *fp_quad;
	
	extern int line;
	
	char buffer[100];
	int ln = 0, tempno = 0;

	int assignop = -1;		//assignment operator == += -=
	int unaryop = -1;		//unary operator type
	int exprno = -1;		//FOR loop , 3rd expression
	int m = 0;				//string length for buffer

	int inreturn = -1;

	int paramno = 0;		//Number of parameters

	char intbuf[20];
	char secIDbuf[20];




#line 99 "y.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    HASH = 258,
    INCLUDE = 259,
    STDIO = 260,
    STDLIB = 261,
    MATH = 262,
    STRING = 263,
    TIME = 264,
    STRING_LITERAL = 265,
    HEADER_LITERAL = 266,
    PRINT = 267,
    RETURN = 268,
    UMINUS = 269,
    INTEGER_LITERAL = 270,
    CHARACTER_LITERAL = 271,
    FLOAT_LITERAL = 272,
    IDENTIFIER = 273,
    FOR = 274,
    IF = 275,
    ELSE = 276,
    WHILE = 277,
    INC_OP = 278,
    DEC_OP = 279,
    LE_OP = 280,
    GE_OP = 281,
    EQ_OP = 282,
    NE_OP = 283,
    MUL_ASSIGN = 284,
    DIV_ASSIGN = 285,
    MOD_ASSIGN = 286,
    ADD_ASSIGN = 287,
    SUB_ASSIGN = 288,
    CHAR = 289,
    INT = 290,
    FLOAT = 291,
    VOID = 292
  };
#endif
/* Tokens.  */
#define HASH 258
#define INCLUDE 259
#define STDIO 260
#define STDLIB 261
#define MATH 262
#define STRING 263
#define TIME 264
#define STRING_LITERAL 265
#define HEADER_LITERAL 266
#define PRINT 267
#define RETURN 268
#define UMINUS 269
#define INTEGER_LITERAL 270
#define CHARACTER_LITERAL 271
#define FLOAT_LITERAL 272
#define IDENTIFIER 273
#define FOR 274
#define IF 275
#define ELSE 276
#define WHILE 277
#define INC_OP 278
#define DEC_OP 279
#define LE_OP 280
#define GE_OP 281
#define EQ_OP 282
#define NE_OP 283
#define MUL_ASSIGN 284
#define DIV_ASSIGN 285
#define MOD_ASSIGN 286
#define ADD_ASSIGN 287
#define SUB_ASSIGN 288
#define CHAR 289
#define INT 290
#define FLOAT 291
#define VOID 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 42 "icg.y" /* yacc.c:355  */
	
	char sval[300];

#line 217 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   287

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,     2,     2,    18,     2,     2,
      49,    50,    17,    14,    51,    15,     2,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    48,
      44,    19,    45,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,    55,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    79,    80,    81,    86,    87,    92,    93,
      98,    99,   100,   101,   102,   107,   108,   113,   114,   119,
     120,   121,   121,   124,   125,   130,   131,   136,   141,   142,
     143,   144,   145,   146,   153,   152,   314,   321,   313,   486,
     495,   503,   511,   519,   532,   544,   556,   568,   584,   600,
     616,   635,   636,   637,   638,   643,   644,   649,   663,   664,
     673,   674,   761,   762,   763,   764,   765,   766,   772,   771,
     798,   812,   814,   821,   813,   850,   851,   856,   857,   862,
     863,   864,   865,   866,   871,   872,   884,   899,   900,   936,
     937,   938,   939,   940,   941,   946,   947,   957,   971,   972,
     982,   992,  1002,  1016,  1017,  1028,  1042,  1043,  1053,  1063,
    1077,  1077,  1079,  1079,  1084,  1092,  1101,  1107,  1111,  1112,
    1117,  1118,  1123,  1124,  1129,  1134
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HASH", "INCLUDE", "STDIO", "STDLIB",
  "MATH", "STRING", "TIME", "STRING_LITERAL", "HEADER_LITERAL", "PRINT",
  "RETURN", "'+'", "'-'", "'/'", "'*'", "'%'", "'='", "UMINUS",
  "INTEGER_LITERAL", "CHARACTER_LITERAL", "FLOAT_LITERAL", "IDENTIFIER",
  "FOR", "IF", "ELSE", "WHILE", "INC_OP", "DEC_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "CHAR", "INT", "FLOAT", "VOID", "'<'", "'>'", "'{'", "'}'",
  "';'", "'('", "')'", "','", "'?'", "':'", "'!'", "'~'", "\"INC_OP\"",
  "\"DEC_OP\"", "$accept", "S", "program", "translation_unit", "ext_dec",
  "libraries", "compound_statement", "block_item_list", "block_item",
  "$@1", "printstat", "declaration", "statement",
  "control_statement_while", "$@2", "iteration_statement", "$@3", "$@4",
  "expr", "type_specifier", "init_declarator_list", "init_declarator",
  "assignment_expression", "assignment_operator", "control_statement_if",
  "$@5", "control_statement_if_else", "conditional_expression", "$@6",
  "$@7", "expression_statement", "expression", "primary_expression",
  "postfix_expression", "unary_expression", "unary_operator",
  "equality_expression", "relational_expression", "additive_expression",
  "multiplicative_expression", "function_definition", "$@8", "$@9",
  "function_call", "declarator", "parameter_list", "parameter_declaration",
  "identifier_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,    43,    45,    47,    42,    37,    61,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,    60,    62,   123,   125,    59,    40,
      41,    44,    63,    58,    33,   126,   293,   294
};
# endif

#define YYPACT_NINF -126

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-126)))

#define YYTABLE_NINF -120

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      46,    10,  -126,  -126,  -126,  -126,  -126,    40,  -126,    83,
    -126,  -126,    54,  -126,    23,     8,  -126,  -126,   -10,    44,
    -126,    23,   182,    47,    46,   170,   159,  -126,    76,    47,
    -126,  -126,    81,   -13,  -126,    48,   106,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,    77,  -126,  -126,  -126,  -126,  -126,
      96,   181,  -126,  -126,  -126,  -126,  -126,  -126,  -126,    84,
     -11,   181,   -23,    59,   136,    15,  -126,   115,   188,  -126,
    -126,  -126,  -126,    41,  -126,   197,   180,  -126,   199,   204,
      20,   205,  -126,  -126,  -126,   144,  -126,   203,  -126,  -126,
    -126,  -126,    76,  -126,  -126,  -126,  -126,   146,   209,    46,
    -126,   138,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
     181,  -126,   181,   181,   179,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   202,  -126,  -126,   250,    87,    87,
     181,  -126,   181,  -126,  -126,  -126,  -126,   181,  -126,  -126,
    -126,  -126,  -126,    59,    59,   181,   136,   136,   136,   136,
      15,    15,  -126,  -126,  -126,   212,   167,   169,  -126,  -126,
     194,  -126,  -126,   211,   214,  -126,   181,    87,   215,   216,
     217,   183,  -126,    20,    20,   181,  -126,    -7,  -126,  -126,
    -126,   220,   240,   243,   218,   245,  -126,  -126,   251,   252,
     253,   254,  -126,  -126,    20,   123,  -126,  -126,  -126,  -126,
    -126,   255,   256,   257,   258,  -126,  -126,  -126,  -126
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   116,    52,    53,    54,    51,     0,     2,     5,
       6,     8,     0,     9,   112,     0,     1,     7,    58,     0,
      55,   110,     0,     0,     0,     0,     0,    27,     0,     0,
     124,   119,   123,     0,   120,     0,     0,   113,     4,    10,
      11,    12,    13,    14,     0,    89,    90,    80,    82,    81,
      79,     0,    91,    92,    93,    94,    57,    60,    84,    87,
     106,     0,    71,    95,    98,   103,    59,     0,    58,    56,
     111,   122,   117,     0,   118,     0,     0,    21,     0,     0,
       0,     0,    15,    75,    28,     0,    17,     0,    19,    20,
      33,    30,     0,    77,    31,    32,    29,     0,     0,     0,
      79,     0,    85,    86,    62,    65,    66,    67,    63,    64,
       0,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   125,     0,     0,     0,
       0,    70,     0,    16,    18,    24,    76,     0,    23,     3,
      83,    61,   106,    96,    97,     0,   101,   102,    99,   100,
     104,   105,   108,   107,   109,   115,     0,     0,    22,    36,
      68,    34,    78,    73,   114,    25,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,    26,     0,    69,    35,
      74,     0,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,    41,    42,     0,     0,    45,    46,    43,    44,
      38,     0,     0,     0,     0,    47,    48,    50,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,   -19,  -126,   262,  -126,    -8,  -126,   195,  -126,
    -126,   -20,   -77,  -126,  -126,  -126,  -126,  -126,  -126,   -18,
    -126,   259,   -25,  -126,  -126,  -126,  -126,  -125,  -126,  -126,
    -116,   -51,  -126,  -126,   -59,  -126,   151,   128,    94,   127,
    -126,  -126,  -126,   260,    -6,  -126,   210,   158
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    44,    84,    85,    86,   128,
      87,    11,    89,    90,   169,    91,   167,   177,   184,    12,
      19,    20,    93,   110,    94,   168,    95,    57,   114,   170,
      96,    97,    58,    59,    60,    61,    62,    63,    64,    65,
      13,    29,    23,    98,    14,    33,    34,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     101,    56,   111,   131,    32,    38,    21,   161,   104,    26,
     112,   113,   158,   159,    15,    37,    88,   181,    92,    24,
      67,    70,   182,   183,   105,   106,   107,   108,   109,   -72,
      67,   121,   122,   123,    45,    46,  -116,    72,    73,  -116,
      16,    47,    48,    49,   100,    78,    79,    80,    81,     1,
     180,   172,    25,   142,   142,    32,   142,   142,   142,   142,
     142,   142,   152,   153,   154,    88,    36,    92,    83,    51,
       2,   142,    22,   142,    52,    53,    54,    55,    18,    67,
     139,     3,     4,     5,     6,   141,     3,     4,     5,     6,
     115,   116,    27,    36,   163,    28,   178,   179,    74,    75,
      68,    45,    46,   117,   118,    71,    32,     2,    47,    48,
      49,   100,   162,   102,   103,   171,   142,   200,    76,    77,
      45,    46,    99,     3,     4,     5,     6,    47,    48,    49,
      50,    78,    79,    80,    81,    83,    51,   201,   202,   203,
     204,    52,    53,    54,    55,  -116,     3,     4,     5,     6,
     119,   120,    36,    82,    83,    51,    76,    77,    45,    46,
      52,    53,    54,    55,   124,    47,    48,    49,    50,    78,
      79,    80,    81,    45,    46,    39,    40,    41,    42,    43,
      47,    48,    49,    50,     3,     4,     5,     6,   140,   137,
      36,   133,    83,    51,   136,    45,    46,   137,    52,    53,
      54,    55,    47,    48,    49,   100,    30,    26,    51,   146,
     147,   148,   149,    52,    53,    54,    55,   164,    75,   165,
     166,   126,     3,     4,     5,     6,    30,   112,   113,   127,
      51,   145,    31,   176,   137,    52,    53,    54,    55,   185,
     143,   144,     3,     4,     5,     6,   150,   151,   129,   186,
     187,   135,   155,   130,   132,   188,   189,   138,   190,   191,
     157,  -119,   137,  -118,   192,   173,   174,   193,   194,   195,
     175,    17,   196,   197,   198,   199,   205,   206,   207,   208,
     134,   160,   156,   125,     0,     0,    66,    69
};

static const yytype_int16 yycheck[] =
{
      51,    26,    61,    80,    22,    24,    12,   132,    19,    19,
      33,    34,   128,   129,     4,    23,    36,    24,    36,    11,
      26,    29,    29,    30,    35,    36,    37,    38,    39,    52,
      36,    16,    17,    18,    14,    15,    46,    50,    51,    49,
       0,    21,    22,    23,    24,    25,    26,    27,    28,     3,
     175,   167,    44,   112,   113,    73,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    85,    46,    85,    48,    49,
      24,   130,    49,   132,    54,    55,    56,    57,    24,    85,
      99,    40,    41,    42,    43,   110,    40,    41,    42,    43,
      31,    32,    48,    46,   145,    51,   173,   174,    50,    51,
      24,    14,    15,    44,    45,    24,   124,    24,    21,    22,
      23,    24,   137,    29,    30,   166,   175,   194,    12,    13,
      14,    15,    45,    40,    41,    42,    43,    21,    22,    23,
      24,    25,    26,    27,    28,    48,    49,    14,    15,    16,
      17,    54,    55,    56,    57,    49,    40,    41,    42,    43,
      14,    15,    46,    47,    48,    49,    12,    13,    14,    15,
      54,    55,    56,    57,    49,    21,    22,    23,    24,    25,
      26,    27,    28,    14,    15,     5,     6,     7,     8,     9,
      21,    22,    23,    24,    40,    41,    42,    43,    50,    51,
      46,    47,    48,    49,    48,    14,    15,    51,    54,    55,
      56,    57,    21,    22,    23,    24,    24,    19,    49,   115,
     116,   117,   118,    54,    55,    56,    57,    50,    51,    50,
      51,    24,    40,    41,    42,    43,    24,    33,    34,    49,
      49,    52,    50,    50,    51,    54,    55,    56,    57,    19,
     112,   113,    40,    41,    42,    43,   119,   120,    49,    29,
      30,    48,    50,    49,    49,    35,    36,    48,    38,    39,
      10,    49,    51,    49,    24,    50,    50,    24,    50,    24,
      53,     9,    21,    21,    21,    21,    21,    21,    21,    21,
      85,   130,   124,    73,    -1,    -1,    26,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    24,    40,    41,    42,    43,    59,    60,    61,
      62,    69,    77,    98,   102,     4,     0,    62,    24,    78,
      79,   102,    49,   100,    11,    44,    19,    48,    51,    99,
      24,    50,    77,   103,   104,   105,    46,    64,    60,     5,
       6,     7,     8,     9,    63,    14,    15,    21,    22,    23,
      24,    49,    54,    55,    56,    57,    80,    85,    90,    91,
      92,    93,    94,    95,    96,    97,   101,   102,    24,    79,
      64,    24,    50,    51,    50,    51,    12,    13,    25,    26,
      27,    28,    47,    48,    64,    65,    66,    68,    69,    70,
      71,    73,    77,    80,    82,    84,    88,    89,   101,    45,
      24,    89,    29,    30,    19,    35,    36,    37,    38,    39,
      81,    92,    33,    34,    86,    31,    32,    44,    45,    14,
      15,    16,    17,    18,    49,   104,    24,    49,    67,    49,
      49,    70,    49,    47,    66,    48,    48,    51,    48,    60,
      50,    80,    92,    95,    95,    52,    96,    96,    96,    96,
      97,    97,    92,    92,    92,    50,   105,    10,    88,    88,
      94,    85,    80,    89,    50,    50,    51,    74,    83,    72,
      87,    89,    88,    50,    50,    53,    50,    75,    70,    70,
      85,    24,    29,    30,    76,    19,    29,    30,    35,    36,
      38,    39,    24,    24,    50,    24,    21,    21,    21,    21,
      70,    14,    15,    16,    17,    21,    21,    21,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    60,    61,    61,    62,    62,
      63,    63,    63,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    66,    66,    66,    68,    68,    69,    70,    70,
      70,    70,    70,    70,    72,    71,    74,    75,    73,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    78,    78,    79,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    81,    83,    82,
      84,    85,    86,    87,    85,    88,    88,    89,    89,    90,
      90,    90,    90,    90,    91,    91,    91,    92,    92,    93,
      93,    93,    93,    93,    93,    94,    94,    94,    95,    95,
      95,    95,    95,    96,    96,    96,    97,    97,    97,    97,
      99,    98,   100,    98,   101,   101,   102,   102,   102,   102,
     103,   103,   104,   104,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     6,     4,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     1,     2,     1,
       1,     0,     3,     2,     2,     4,     6,     3,     1,     1,
       1,     1,     1,     1,     0,     6,     0,     0,     9,     2,
       2,     2,     2,     3,     3,     3,     3,     5,     5,     5,
       5,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     0,     6,
       2,     1,     0,     0,     7,     1,     2,     1,     3,     1,
       1,     1,     1,     3,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       0,     4,     0,     3,     4,     3,     1,     4,     4,     3,
       1,     3,     2,     1,     1,     3
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
        case 21:
#line 121 "icg.y" /* yacc.c:1646  */
    {inreturn = 1;}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 121 "icg.y" /* yacc.c:1646  */
    {fprintf(fp_icg, "return t%d\n",tempno-1);
						fprintf(fp_quad, "\treturn\t\tt%d\n", tempno-1);
}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 153 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg,"L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
		ln++;
		fprintf(fp_icg, "ifFalse t%d goto L%d\n", --tempno, ln);
		fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
		tempno++;
	}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 163 "icg.y" /* yacc.c:1646  */
    {
		switch(exprno){
				case 0:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[-3].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[-3].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-3].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-3].sval));
						break;

				case 1:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[-3].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[-3].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-3].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-3].sval));
						break;

				case 2:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[-3].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[-3].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-3].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-3].sval));
						break;

				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[-3].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[-3].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-3].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-3].sval));
						break;

				case 4:						
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[-3].sval), intbuf);
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[-3].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-3].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-3].sval));
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[-3].sval), intbuf);
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[-3].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-3].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-3].sval));
						break;

				case 6:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[-3].sval), intbuf);
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[-3].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-3].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-3].sval));
						break;

				case 7:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[-3].sval), intbuf);
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[-3].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-3].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-3].sval));
						break;

				case 8:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-3].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-3].sval));
						break;

				case 9:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-3].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-3].sval));
						break;

				case 10:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-3].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-3].sval));
						break;

				case 11:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-3].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-3].sval));
						break;
			}

			exprno = -1;

			//end of expression 3

			fprintf(fp_icg, "goto L%d\n", --ln);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

			fprintf(fp_icg, "L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

	}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 314 "icg.y" /* yacc.c:1646  */
    { 
			fprintf(fp_icg,"L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

		}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 321 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "ifFalse t%d goto L%d\n", --tempno, ln);
			fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;
		}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 327 "icg.y" /* yacc.c:1646  */
    {
		
			//expression 3

			switch(exprno){
				case 0:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[-2].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[-2].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 1:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[-2].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[-2].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 2:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[-2].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[-2].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[-2].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[-2].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 4:						
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[-2].sval), intbuf);
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[-2].sval), intbuf);
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 6:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[-2].sval), intbuf);
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 7:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[-2].sval), intbuf);
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 8:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 9:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 10:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 11:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;
			}

			exprno = -1;

			//end of expression 3

			fprintf(fp_icg, "goto L%d\n", --ln);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

			fprintf(fp_icg, "L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

		}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 487 "icg.y" /* yacc.c:1646  */
    {  
			// printf("ID %s\n", $1);
			exprno = 0; 

			m = strlen((yyvsp[-1].sval));
			strncpy((yyval.sval), (yyvsp[-1].sval), m);
			(yyval.sval)[m] = '\0';
		}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 496 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 1;

			m = strlen((yyvsp[-1].sval));
			strncpy((yyval.sval), (yyvsp[-1].sval), m);
			(yyval.sval)[m] = '\0';
		}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 504 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 2;

			m = strlen((yyvsp[0].sval));
			strncpy((yyval.sval), (yyvsp[0].sval), m);
			(yyval.sval)[m] = '\0';
		}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 512 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 3; 

			m = strlen((yyvsp[0].sval));
			strncpy((yyval.sval), (yyvsp[0].sval), m);
			(yyval.sval)[m] = '\0';
		}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 520 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 4; 

			m = strlen((yyvsp[-2].sval));
			strncpy((yyval.sval), (yyvsp[-2].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

		}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 533 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 5;
			
			m = strlen((yyvsp[-2].sval));
			strncpy((yyval.sval), (yyvsp[-2].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';
		}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 545 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 6;
			
			m = strlen((yyvsp[-2].sval));
			strncpy((yyval.sval), (yyvsp[-2].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';
		}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 557 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 7; 
			
			m = strlen((yyvsp[-2].sval));
			strncpy((yyval.sval), (yyvsp[-2].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';
		}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 569 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 8;

			m = strlen((yyvsp[-4].sval));
			strncpy((yyval.sval), (yyvsp[-4].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[-2].sval));
			strncpy(secIDbuf, (yyvsp[-2].sval), m);
			secIDbuf[m] = '\0';
		}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 585 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 9;
			
			m = strlen((yyvsp[-4].sval));
			strncpy((yyval.sval), (yyvsp[-4].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[-2].sval));
			strncpy(secIDbuf, (yyvsp[-2].sval), m);
			secIDbuf[m] = '\0';
		}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 601 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 10; 
			
			m = strlen((yyvsp[-4].sval));
			strncpy((yyval.sval), (yyvsp[-4].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[-2].sval));
			strncpy(secIDbuf, (yyvsp[-2].sval), m);
			secIDbuf[m] = '\0';
		}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 617 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 11; 

			m = strlen((yyvsp[-4].sval));
			strncpy((yyval.sval), (yyvsp[-4].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[-2].sval));
			strncpy(secIDbuf, (yyvsp[-2].sval), m);
			secIDbuf[m] = '\0';
		}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 650 "icg.y" /* yacc.c:1646  */
    {
			if(tempno > 0){
				fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
				fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
				tempno++;
			}
			else if(tempno == 0){
				fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), (yyvsp[0].sval)); 
				fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), (yyvsp[-2].sval));
		
			}
			
		}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 665 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "%s = fr\n", (yyvsp[-2].sval)); 
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\tfr\n", (yyvsp[-2].sval));	
		}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 673 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 675 "icg.y" /* yacc.c:1646  */
    {
			switch(assignop){
				case 0: if(tempno > 0){
							//fprintf(fp_icg, "%s = t%d\n", $1, --tempno); 
							//fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, $1);
							fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), (yyvsp[0].sval)); 
							fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), (yyvsp[-2].sval));

							tempno++;
						}
						else if(tempno == 0){
							fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), (yyvsp[0].sval)); 
							fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), (yyvsp[-2].sval));							
						}
						break;

				case 1: 
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;
					
						break;
				case 2:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;

						break;
				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;

						break;
				case 4:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;

						break;
				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s %c %s\n",buffer, (yyvsp[-2].sval), '%',(yyvsp[0].sval));
						fprintf(fp_quad, "\t%c\t\t%s\t\t%s\t\t%s\n", '%', (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;

						break;
			}
			
			assignop = -1;

			
		}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 761 "icg.y" /* yacc.c:1646  */
    { assignop = 0; 	}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 762 "icg.y" /* yacc.c:1646  */
    { assignop = 1; 	}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 763 "icg.y" /* yacc.c:1646  */
    { assignop = 2; 	}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 764 "icg.y" /* yacc.c:1646  */
    { assignop = 3; 	}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 765 "icg.y" /* yacc.c:1646  */
    { assignop = 4; 	}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 766 "icg.y" /* yacc.c:1646  */
    { assignop = 5; 	}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 772 "icg.y" /* yacc.c:1646  */
    {
   	fprintf(fp_icg,"ifFalse t%d goto L%d\n", --tempno, ln); 
			fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;		
			ln++;
		}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 779 "icg.y" /* yacc.c:1646  */
    {
				sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s\n", buffer, (yyvsp[-3].sval));
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[-3].sval), buffer);

			fprintf(fp_icg,"goto L%d\n", ln);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);

			fprintf(fp_icg,"L%d:\n", --ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 799 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "%s = %s\n", buffer, (yyvsp[-1].sval));
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[-1].sval), buffer);

			fprintf(fp_icg,"L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 812 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval));  }
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 814 "icg.y" /* yacc.c:1646  */
    { 
			fprintf(fp_icg,"ifFalse t%d goto L%d\n", --tempno, ln); 
			fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;		
			ln++;
		}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 821 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s\n", buffer, (yyvsp[0].sval));
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), buffer);

			fprintf(fp_icg,"goto L%d\n", ln);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);

			fprintf(fp_icg,"L%d:\n", --ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 836 "icg.y" /* yacc.c:1646  */
    {
			
			fprintf(fp_icg, "%s = %s\n", buffer, (yyvsp[0].sval));
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), buffer);

			fprintf(fp_icg,"L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 856 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 862 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); 	}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 863 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); 	}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 864 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); 	}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 865 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); 	}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 866 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[-1].sval)); 	}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 871 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 873 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[-1].sval));
			fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[-1].sval), buffer);

			fprintf(fp_icg, "%s = %s\n", (yyvsp[-1].sval), buffer);
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-1].sval));
			
		}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 885 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[-1].sval));
			fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[-1].sval), buffer);

			fprintf(fp_icg, "%s = %s\n", (yyvsp[-1].sval), buffer);
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-1].sval));
		}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 899 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 901 "icg.y" /* yacc.c:1646  */
    {
			switch(unaryop){
				case 1: 
						sprintf(buffer,"t%d",tempno++);	
						m = strlen(buffer);
						buffer[m] = '\0';					
						fprintf(fp_icg, "%s = -%s\n",buffer, (yyvsp[0].sval));	
						fprintf(fp_quad, "\t-\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), buffer);
						strncpy((yyval.sval), buffer, m+1);						
						break;

				case 4: 
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[0].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[0].sval), buffer);
						strncpy((yyval.sval), buffer, m+1);		//check out
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[0].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[0].sval), buffer);
						strncpy((yyval.sval), buffer, m+1);		//check out
						break;
			}
			unaryop = -1;
		}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 936 "icg.y" /* yacc.c:1646  */
    {	unaryop = 0; }
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 937 "icg.y" /* yacc.c:1646  */
    {	unaryop = 1; }
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 938 "icg.y" /* yacc.c:1646  */
    {	unaryop = 2; }
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 939 "icg.y" /* yacc.c:1646  */
    {	unaryop = 3; }
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 940 "icg.y" /* yacc.c:1646  */
    {	unaryop = 4; }
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 941 "icg.y" /* yacc.c:1646  */
    {	unaryop = 5; }
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 946 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 948 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s == %s\n", buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t==\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 958 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s != %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t!=\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 971 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 973 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s < %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t<\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 983 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s > %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t>\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 993 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s <= %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t<=\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1003 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s >= %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t>=\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1016 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1018 "icg.y" /* yacc.c:1646  */
    {
			// printf("%s + %s\n", $1, $3 );
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1029 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1044 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1054 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1064 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s %c %s\n",buffer, (yyvsp[-2].sval), '%',(yyvsp[0].sval));
			fprintf(fp_quad, "\t%c\t\t%s\t\t%s\t\t%s\n", '%',(yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1077 "icg.y" /* yacc.c:1646  */
    {fprintf(fp_icg,"%s:\n", (yyvsp[0].sval));
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\t%s\n", (yyvsp[0].sval));}
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1079 "icg.y" /* yacc.c:1646  */
    {fprintf(fp_icg,"%s:\n", (yyvsp[0].sval));
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\t%s\n", (yyvsp[0].sval));}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1085 "icg.y" /* yacc.c:1646  */
    {
			paramno++;	
			fprintf(fp_icg, "call(%s, %d)\n", (yyvsp[-3].sval), paramno);	
			fprintf(fp_quad, "\tcall\t\t%s\t\t%d\n", (yyvsp[-3].sval), paramno);

			paramno = 0;	
		}
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1093 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "call(%s, 0)\n", (yyvsp[-2].sval));	
			fprintf(fp_quad, "\tcall\t\t%s\t\t0\n", (yyvsp[-2].sval));
		}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1102 "icg.y" /* yacc.c:1646  */
    { 
			m = strlen((yyvsp[0].sval));
			strncpy((yyval.sval), (yyvsp[0].sval), m);	
			(yyval.sval)[m] = '\0';
		}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1108 "icg.y" /* yacc.c:1646  */
    {
			
		}
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1130 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "param %s\n", (yyvsp[0].sval));
			fprintf(fp_quad, "\tparam\t\t%s\n", (yyvsp[0].sval));
		}
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1135 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "param %s\n", (yyvsp[0].sval));
			fprintf(fp_quad, "\tparam\t\t%s\n", (yyvsp[0].sval));	
			
			paramno++; 
		}
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2682 "y.tab.c" /* yacc.c:1646  */
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
#line 1144 "icg.y" /* yacc.c:1906  */



void yyerror(const char *str){
	fflush(stdout);
	printf("Line:%d: ", line);
	printf("\033[1;31m");
	printf("error: ");
	printf("\033[0m");
	printf("%s\n", str);
}


int main(){
	
	fp_icg 	 	= fopen("icg.txt", "w");
	fp_quad		= fopen("quad.txt", "w");
	printf("\n");
	

	fprintf(fp_quad, "\tOp\t\tArg1\t\tArg2\t\tRes\n");
	fprintf(fp_quad, "------------------------------------------------------------------------\n");

	yyparse();
	
	fclose(fp_icg);
	
	printf("\n\nIntermediate Code\n\n");
	system("cat icg.txt");

	printf("\n\nQuadruple Format\n\n");
	
	

	fclose(fp_quad);
	system("cat quad.txt");
	
	return 0;
}

