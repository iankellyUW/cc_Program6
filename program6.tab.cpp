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
#line 8 "program6.ypp" /* yacc.c:339  */


//#include <cmath> // for pow() in the original version of this
#include <string>
#include <iostream>
#include <cstring>
#include <string>
#include <FlexLexer.h>// yes have to include this here AND in the 'driver'
#include <vector>
#include "nodes.hpp"
#include "program6.hpp"
#include "symboltable.hpp"
#include "typetable.hpp"

//DO NOT USE "namespace std;"
using std::cerr;
using std::cout;
using std::endl;
using std::stoi;
using std::string;
using std::vector;
/*
 * These are declared in "main" so that we can pass values between
 * the two portions of the program.
 */

extern Node *tree;
extern yyFlexLexer scanner;
extern string value;
extern string id;
extern string idPrev;
string tempStr;
TypeEntry* curTypeEnt = new TypeEntry("", "");
/* 
 * Need to do this define, an "acceptable" hack to interface
 * the C++ scanner with the C parser. 
 * I can still use things like scanner.YYtext() here if I want. Just that
 * (*bison*) does not know about cpp scanners, only the "C" version. 
 */

#define yylex() scanner.yylex()

// need the function prototype for the parser. defined it in the lpp file

void yyerror(const char *);

extern TypeTable types;
extern SymbolTable* table;
extern SymbolTable* curTable;
int blockcntr = 0;
bool hasMain = false;
/*
 * There are lots of examples that have multiple types in the union here.
 * DO NOT DO THAT. Keep it simple, one type. This is the type that you use
 * in the definitions for %type tokens.
 */


#line 125 "program6.tab.cpp" /* yacc.c:339  */

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
   by #include "program6.tab.hpp".  */
#ifndef YY_YY_PROGRAM6_TAB_HPP_INCLUDED
# define YY_YY_PROGRAM6_TAB_HPP_INCLUDED
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
    NUM = 258,
    RPAREN = 259,
    LPAREN = 260,
    LBRACK = 261,
    RBRACK = 262,
    LBRACE = 263,
    RBRACE = 264,
    NULLT = 265,
    READ = 266,
    NEW = 267,
    DOT = 268,
    THIS = 269,
    SEMI = 270,
    ID = 271,
    INT = 272,
    CLASS = 273,
    VOID = 274,
    COMMA = 275,
    PRINT = 276,
    WHILE = 277,
    RETURN = 278,
    IF = 279,
    ELSE = 280,
    PLUS = 281,
    MINUS = 282,
    TIMES = 283,
    DIV = 284,
    MOD = 285,
    AND = 286,
    OR = 287,
    NOT = 288,
    EQ = 289,
    NE = 290,
    LE = 291,
    GE = 292,
    LT = 293,
    GT = 294,
    NEG = 295,
    UPLUS = 296,
    EXP = 297,
    EQUAL = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 67 "program6.ypp" /* yacc.c:355  */

  Node *ttype;

#line 213 "program6.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROGRAM6_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 230 "program6.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   522

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   111,   118,   125,   135,   138,   141,   144,
     147,   151,   154,   157,   160,   165,   166,   169,   170,   173,
     174,   177,   182,   187,   196,   207,   216,   221,   249,   260,
     271,   285,   291,   297,   304,   305,   308,   313,   319,   327,
     330,   333,   336,   339,   342,   343,   346,   349,   352,   355,
     358,   361,   364,   367,   370,   376,   386,   390,   394,   398,
     402,   406,   409,   412,   415,   418,   425,   426,   429,   434,
     437,   442,   446,   449,   452,   455,   466,   471,   476,   481,
     486,   490,   496,   502,   507,   512,   517,   522,   527,   534,
     538,   543,   548,   553,   556,   559,   565,   568,   571,   574,
     578,   581,   586,   590,   594,   600,   604
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "RPAREN", "LPAREN", "LBRACK",
  "RBRACK", "LBRACE", "RBRACE", "NULLT", "READ", "NEW", "DOT", "THIS",
  "SEMI", "ID", "INT", "CLASS", "VOID", "COMMA", "PRINT", "WHILE",
  "RETURN", "IF", "ELSE", "PLUS", "MINUS", "TIMES", "DIV", "MOD", "AND",
  "OR", "NOT", "EQ", "NE", "LE", "GE", "LT", "GT", "NEG", "UPLUS", "EXP",
  "EQUAL", "$accept", "program", "classdeclaraton", "classstart",
  "classbody", "vardecs", "constdecs", "methdecs", "vardeclaration",
  "consstart", "consbody", "methbody", "methstart", "type", "ident",
  "number", "parameterlist", "parameter", "block", "statements",
  "statement", "blockstart", "blockstacked", "name", "arglist",
  "conditionalstatement", "expression", "newexpression", "brackexps",
  "multibracks", YY_NULLPTR
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
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -126

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-126)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -11,    19,     9,  -126,    32,  -126,  -126,  -126,  -126,   187,
    -126,  -126,  -126,    19,    63,   258,   324,  -126,   103,   103,
       5,   106,    51,    54,  -126,   485,   494,  -126,  -126,   498,
     103,    19,    91,  -126,   103,    19,  -126,    19,    19,    12,
    -126,  -126,    39,   312,   110,    19,    84,  -126,   118,    19,
    -126,  -126,  -126,   503,  -126,  -126,  -126,    90,    97,  -126,
    -126,  -126,    85,   103,    85,  -126,   175,  -126,  -126,   116,
      25,  -126,   175,   175,   175,  -126,  -126,    52,   253,  -126,
    -126,  -126,   113,   144,  -126,  -126,   149,  -126,   352,  -126,
    -126,  -126,   190,   168,  -126,   167,   121,   125,   125,   125,
     175,   175,   -10,   167,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,  -126,
    -126,  -126,   165,  -126,  -126,  -126,   171,   174,   175,   176,
     410,     5,     5,   432,  -126,   363,  -126,    33,  -126,  -126,
    -126,  -126,   175,  -126,    47,   362,   271,  -126,  -126,  -126,
     127,   127,   125,   125,   125,   125,   127,   380,   380,   380,
     380,   380,   380,   125,   125,  -126,   175,   175,   362,   175,
    -126,   443,   169,   173,  -126,  -126,   181,  -126,   421,   454,
     175,   175,    71,  -126,   175,  -126,    80,   209,   227,  -126,
    -126,  -126,   465,  -126,    88,   320,  -126,   362,   178,   476,
     476,  -126,   180,  -126,  -126,   182,   184,  -126,  -126,   476,
    -126
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,    32,     5,     1,     3,     0,
       4,     6,    31,     0,     0,     0,     0,    15,    34,    34,
       0,     0,     0,     0,    12,     0,     0,    16,    13,     0,
      34,     0,     0,    14,    34,     0,    17,     0,     0,     0,
      35,    19,     0,     0,     0,     0,   104,    25,     0,     0,
      30,    10,     8,     0,     9,    11,    18,     0,     0,    20,
      37,    38,     0,     0,     0,    33,     0,   105,    73,     0,
       0,    61,     0,     0,     0,    62,    72,    71,     0,    94,
      28,    21,     0,     0,    29,    22,     0,     7,     0,    26,
      36,    27,     0,     0,    99,    97,   100,    89,    80,    90,
      66,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
     106,    24,     0,    55,    39,    46,     0,     0,    53,     0,
       0,     0,    62,     0,    44,     0,    54,     0,    50,    95,
      81,    98,    66,   101,     0,    67,     0,    65,    63,   103,
      75,    76,    77,    78,    91,    92,    82,    83,    84,    86,
      85,    88,    87,    79,    93,    43,    66,     0,    52,     0,
      41,     0,     0,     0,    42,    45,     0,    56,     0,     0,
      66,     0,     0,    74,     0,    64,     0,     0,     0,    40,
      60,    58,     0,    59,     0,     0,    96,    68,     0,     0,
       0,    57,     0,    47,    49,     0,    69,    48,    51,     0,
      70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,   197,  -126,  -126,   -86,   191,   138,   -13,   135,
     177,   189,    57,    36,    -1,  -126,    75,   147,   166,  -125,
    -111,  -126,  -126,   -17,  -119,  -126,    31,  -126,   -18,  -126
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    14,    15,    16,    17,    18,
      36,    41,    19,    31,    75,    76,    39,    40,    89,   133,
     134,   135,   136,    77,   144,   138,   145,    79,    45,    46
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       6,    27,   130,    49,   147,   171,     5,     1,    21,     7,
     179,    43,    22,    21,    32,    35,    62,    38,    38,    44,
      48,     5,   175,   182,    32,    35,    94,     1,    35,    38,
      57,    58,    63,    38,    58,     5,    60,    61,   180,   101,
       9,     5,    12,    64,    82,    20,   102,   186,    86,   178,
      20,   183,    35,   192,    37,    37,    50,   100,   101,    63,
     175,   194,    38,    51,    23,   102,    37,   184,   175,    96,
      37,   137,    24,    34,    78,   196,   181,   141,   143,     5,
      12,   175,    13,    34,   198,   149,    34,   132,   205,   206,
      83,   184,   202,    88,    42,    80,    47,    92,   210,    37,
     184,   148,    84,    97,    98,    99,    95,     5,   184,    42,
      34,    47,    43,   137,    49,    80,   137,    27,   137,     5,
      12,    93,     5,    84,   131,    81,   142,    43,   119,   132,
     172,   173,   146,    85,   132,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      30,   120,    26,    29,   137,   106,   107,   108,   109,   168,
      30,   137,   137,    53,   121,    27,   131,   117,   118,   117,
     118,   131,   140,    43,   165,   137,   166,   132,    65,   167,
      66,   169,   137,   137,    81,    68,    69,    70,    85,    71,
     190,     5,   137,   204,   139,   207,    11,   208,   187,     8,
     188,    72,    73,     5,    12,    25,    13,    56,    74,   209,
      90,     0,   195,   199,   131,   197,   104,   105,   106,   107,
     108,   109,   110,    59,   111,   112,   113,   114,   115,   116,
      91,   200,   117,   118,     0,   104,   105,   106,   107,   108,
     109,   110,     0,   111,   112,   113,   114,   115,   116,     0,
       0,   117,   118,   104,   105,   106,   107,   108,   109,   110,
     103,   111,   112,   113,   114,   115,   116,    28,     0,   117,
     118,     0,     0,     0,     5,    12,     0,    13,   185,   104,
     105,   106,   107,   108,   109,   110,     0,   111,   112,   113,
     114,   115,   116,     0,     0,   117,   118,   104,   105,   106,
     107,   108,   109,   110,     0,   111,   112,   113,   114,   115,
     116,     0,     0,   117,   118,    65,     0,    66,     0,    67,
       0,     0,    68,    69,    70,     0,    71,     0,     5,     0,
       0,     0,     0,    33,     0,   203,     0,     0,    72,    73,
       5,    12,     0,    13,     0,    74,   104,   105,   106,   107,
     108,   109,   110,   122,   111,   112,   113,   114,   115,   116,
     123,   124,   117,   118,   176,     0,    71,   125,     5,    12,
       0,   123,   177,   126,   127,   128,   129,    71,   125,     5,
      12,     0,     0,     0,   126,   127,   128,   129,   104,   105,
     106,   107,   108,   109,   110,     0,   111,   112,   113,   114,
     115,   116,     0,     0,   117,   118,   104,   105,   106,   107,
     108,   109,   110,     0,     0,     0,     0,     0,   123,   170,
       0,     0,   117,   118,    71,   125,     5,    12,     0,   123,
     191,   126,   127,   128,   129,    71,   125,     5,    12,     0,
     123,   174,   126,   127,   128,   129,    71,   125,     5,     0,
       0,   123,   189,   126,   127,   128,   129,    71,   125,     5,
       0,     0,   123,   193,   126,   127,   128,   129,    71,   125,
       5,     0,     0,   123,   201,   126,   127,   128,   129,    71,
     125,     5,     0,     0,   123,     0,   126,   127,   128,   129,
      71,   125,     5,     0,    52,     0,     0,   126,   127,   128,
     129,     5,    12,    54,    13,     0,     0,    55,     0,     0,
       5,    12,    87,    13,     5,    12,     0,    13,     0,     5,
      12,     0,    13
};

static const yytype_int16 yycheck[] =
{
       1,    14,    88,    21,    14,   130,    16,    18,     9,     0,
     135,     6,    13,    14,    15,    16,     4,    18,    19,    20,
      21,    16,   133,   142,    25,    26,     1,    18,    29,    30,
      31,    32,    20,    34,    35,    16,    37,    38,     5,     6,
       8,    16,    17,     4,    45,     9,    13,   166,    49,   135,
      14,     4,    53,   178,    18,    19,     5,     5,     6,    20,
     171,   180,    63,     9,     1,    13,    30,    20,   179,    70,
      34,    88,     9,    16,    43,     4,    43,    95,    96,    16,
      17,   192,    19,    26,     4,   103,    29,    88,   199,   200,
       6,    20,     4,     8,    19,     5,     5,    66,   209,    63,
      20,   102,     5,    72,    73,    74,    70,    16,    20,    34,
      53,     5,     6,   130,   132,     5,   133,   130,   135,    16,
      17,     5,    16,     5,    88,    15,     5,     6,    15,   130,
     131,   132,   101,    15,   135,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      15,     7,    14,    15,   171,    28,    29,    30,    31,   128,
      25,   178,   179,    25,    15,   178,   130,    42,    43,    42,
      43,   135,     4,     6,     9,   192,     5,   178,     3,     5,
       5,     5,   199,   200,    15,    10,    11,    12,    15,    14,
       9,    16,   209,    15,     4,    15,     9,    15,   167,     2,
     169,    26,    27,    16,    17,    14,    19,    30,    33,    25,
      63,    -1,   181,     4,   178,   184,    26,    27,    28,    29,
      30,    31,    32,    34,    34,    35,    36,    37,    38,    39,
      64,     4,    42,    43,    -1,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    26,    27,    28,    29,    30,    31,    32,
       7,    34,    35,    36,    37,    38,    39,     9,    -1,    42,
      43,    -1,    -1,    -1,    16,    17,    -1,    19,     7,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,     3,    -1,     5,    -1,     7,
      -1,    -1,    10,    11,    12,    -1,    14,    -1,    16,    -1,
      -1,    -1,    -1,     9,    -1,    15,    -1,    -1,    26,    27,
      16,    17,    -1,    19,    -1,    33,    26,    27,    28,    29,
      30,    31,    32,     1,    34,    35,    36,    37,    38,    39,
       8,     9,    42,    43,     1,    -1,    14,    15,    16,    17,
      -1,     8,     9,    21,    22,    23,    24,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    22,    23,    24,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    43,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,     8,     9,
      -1,    -1,    42,    43,    14,    15,    16,    17,    -1,     8,
       9,    21,    22,    23,    24,    14,    15,    16,    17,    -1,
       8,     9,    21,    22,    23,    24,    14,    15,    16,    -1,
      -1,     8,     9,    21,    22,    23,    24,    14,    15,    16,
      -1,    -1,     8,     9,    21,    22,    23,    24,    14,    15,
      16,    -1,    -1,     8,     9,    21,    22,    23,    24,    14,
      15,    16,    -1,    -1,     8,    -1,    21,    22,    23,    24,
      14,    15,    16,    -1,     9,    -1,    -1,    21,    22,    23,
      24,    16,    17,     9,    19,    -1,    -1,     9,    -1,    -1,
      16,    17,     9,    19,    16,    17,    -1,    19,    -1,    16,
      17,    -1,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    45,    46,    47,    16,    58,     0,    46,     8,
      48,     9,    17,    19,    49,    50,    51,    52,    53,    56,
      57,    58,    58,     1,     9,    50,    51,    52,     9,    51,
      53,    57,    58,     9,    56,    58,    54,    57,    58,    60,
      61,    55,    60,     6,    58,    72,    73,     5,    58,    72,
       5,     9,     9,    51,     9,     9,    54,    58,    58,    55,
      58,    58,     4,    20,     4,     3,     5,     7,    10,    11,
      12,    14,    26,    27,    33,    58,    59,    67,    70,    71,
       5,    15,    58,     6,     5,    15,    58,     9,     8,    62,
      61,    62,    70,     5,     1,    57,    58,    70,    70,    70,
       5,     6,    13,     7,    26,    27,    28,    29,    30,    31,
      32,    34,    35,    36,    37,    38,    39,    42,    43,    15,
       7,    15,     1,     8,     9,    15,    21,    22,    23,    24,
      49,    57,    58,    63,    64,    65,    66,    67,    69,     4,
       4,    72,     5,    72,    68,    70,    70,    14,    58,    72,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,     9,     5,     5,    70,     5,
       9,    63,    58,    58,     9,    64,     1,     9,    49,    63,
       5,    43,    68,     4,    20,     7,    68,    70,    70,     9,
       9,     9,    63,     9,    68,    70,     4,    70,     4,     4,
       4,     9,     4,    15,    15,    64,    64,    15,    15,    25,
      64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    46,    47,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    49,    49,    50,    50,    51,
      51,    52,    52,    52,    52,    53,    54,    55,    56,    56,
      56,    57,    58,    59,    60,    60,    60,    61,    61,    62,
      62,    62,    62,    62,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    66,    66,    66,    66,
      66,    67,    67,    67,    67,    67,    68,    68,    68,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    71,    71,    71,    71,
      71,    71,    72,    72,    72,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     5,     4,     4,
       4,     4,     3,     3,     3,     1,     2,     2,     3,     2,
       3,     3,     3,     4,     4,     2,     3,     3,     3,     3,
       3,     1,     1,     1,     0,     1,     3,     2,     2,     2,
       4,     3,     3,     3,     1,     2,     1,     4,     5,     5,
       1,     6,     2,     1,     1,     1,     2,     4,     3,     3,
       3,     1,     1,     3,     4,     3,     0,     1,     3,     5,
       7,     1,     1,     1,     4,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     3,     1,     3,     5,     2,     3,     2,
       2,     3,     3,     4,     1,     2,     3
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
#line 107 "program6.ypp" /* yacc.c:1646  */
    {
                        tree=(yyvsp[0].ttype);
                        (yyval.ttype)=(yyvsp[0].ttype);
                        }
#line 1517 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 112 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyvsp[-1].ttype)->setnext((yyvsp[0].ttype));
                        (yyval.ttype)=(yyvsp[-1].ttype);
                        }
#line 1526 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 119 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeClassDec((yyvsp[-1].ttype),(yyvsp[0].ttype));
                        curTable = curTable->getParent();
                        }
#line 1535 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 125 "program6.ypp" /* yacc.c:1646  */
    {
                        SymbolTable* temp = new SymbolTable(curTable);
                        TypeEntry* typeEnt = new TypeEntry("",(yyvsp[0].ttype)->getstring(),"class_type",temp);
                        curTable->insert((yyvsp[0].ttype)->getstring(),typeEnt);
                        curTable = temp;
                        types.addType(typeEnt->type,typeEnt);
                        (yyval.ttype)=new Node((yyvsp[0].ttype));
                        }
#line 1548 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 135 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeClassBody(nullptr,nullptr,0);
                        }
#line 1556 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 138 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeClassBody((yyvsp[-1].ttype),new Node((yyvsp[-3].ttype),(yyvsp[-2].ttype)),1);
                        }
#line 1564 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 141 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeClassBody((yyvsp[-1].ttype),(yyvsp[-2].ttype),2);
                        }
#line 1572 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 144 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeClassBody((yyvsp[-1].ttype),(yyvsp[-2].ttype),3);
                        }
#line 1580 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 147 "program6.ypp" /* yacc.c:1646  */
    {
                        cerr << "Line: " << scanner.lineno() << " Col: " << first_column << "<vardecs> <error in methdecs>" << endl;
                        yyerrok;
                        }
#line 1589 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 151 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeClassBody((yyvsp[-2].ttype),(yyvsp[-1].ttype),4);
                        }
#line 1597 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 154 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeClassBody((yyvsp[-1].ttype),nullptr,5);
                        }
#line 1605 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 157 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeClassBody((yyvsp[-1].ttype),nullptr,6);
                        }
#line 1613 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 160 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeClassBody((yyvsp[-1].ttype),nullptr,7);
                        }
#line 1621 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 165 "program6.ypp" /* yacc.c:1646  */
    {(yyval.ttype)=new nodeVards((yyvsp[0].ttype),nullptr,0);}
#line 1627 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 166 "program6.ypp" /* yacc.c:1646  */
    {(yyval.ttype)=new nodeVards((yyvsp[-1].ttype),(yyvsp[0].ttype),1);}
#line 1633 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 169 "program6.ypp" /* yacc.c:1646  */
    {(yyval.ttype)=new nodeConsts((yyvsp[-1].ttype),nullptr,0);}
#line 1639 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 170 "program6.ypp" /* yacc.c:1646  */
    {(yyval.ttype)=new nodeConsts((yyvsp[-2].ttype),(yyvsp[-1].ttype),1);}
#line 1645 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 173 "program6.ypp" /* yacc.c:1646  */
    {(yyval.ttype)=new nodeMeths((yyvsp[-1].ttype),(yyvsp[0].ttype));}
#line 1651 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 174 "program6.ypp" /* yacc.c:1646  */
    {(yyval.ttype)=new nodeMeths((yyvsp[-2].ttype),new Node((yyvsp[-1].ttype),(yyvsp[0].ttype)));}
#line 1657 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 177 "program6.ypp" /* yacc.c:1646  */
    {
                        TypeEntry* typeEnt = new TypeEntry((yyvsp[-1].ttype)->getstring(), (yyvsp[-2].ttype)->getstring());
                        curTable->insert((yyvsp[-1].ttype)->getstring(),typeEnt);
                        (yyval.ttype)=new nodeVard((yyvsp[-2].ttype),(yyvsp[-1].ttype),0);
                        }
#line 1667 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 182 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeVard((yyvsp[-2].ttype),(yyvsp[-1].ttype),0);
                        TypeEntry* typeEnt = new TypeEntry((yyvsp[-1].ttype)->getstring(),(yyvsp[-2].ttype)->getstring());
                        curTable->insert((yyvsp[-1].ttype)->getstring(),typeEnt);
                        }
#line 1677 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 187 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeVard((yyvsp[-3].ttype),new Node((yyvsp[-2].ttype),(yyvsp[-1].ttype)));
                        TypeEntry* typeEnt = new TypeEntry((yyvsp[-1].ttype)->getstring(),(yyvsp[-3].ttype)->getstring());
                        for (int i = 0; i < (yyvsp[-2].ttype)->getint(); i++)
                        {
                              typeEnt->type += "[]";
                        }
                        curTable->insert((yyvsp[-1].ttype)->getstring(),typeEnt);
                        }
#line 1691 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 196 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeVard((yyvsp[-3].ttype),new Node((yyvsp[-2].ttype),(yyvsp[-1].ttype)));
                        TypeEntry* typeEnt = new TypeEntry((yyvsp[-1].ttype)->getstring(),(yyvsp[-3].ttype)->getstring());
                        for (int i = 0; i < (yyvsp[-2].ttype)->getint(); i++)
                        {
                              typeEnt->type += "[]";
                        }
                        curTable->insert((yyvsp[-1].ttype)->getstring(),typeEnt);
                        }
#line 1705 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 207 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new Node((yyvsp[-1].ttype));
                        SymbolTable* temp = new SymbolTable(curTable);
                        TypeEntry* typeEnt = new TypeEntry("", (yyvsp[-1].ttype)->getstring(),"constructor_type",temp);
                        curTable->insert((yyvsp[-1].ttype)->getstring(),typeEnt);
                        curTable = temp;
                        }
#line 1717 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 216 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new Node((yyvsp[-2].ttype),(yyvsp[0].ttype));
                        curTable = curTable->getParent();
                        }
#line 1726 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 221 "program6.ypp" /* yacc.c:1646  */
    {
                        string name = "main";
                        if(curTable->name.compare(name) == 0){ // if getting a main message
                              if(hasMain == false) // check one doesn't already exist
                              {
                                    if (!curTable->paramtypes.empty())
                                    {     
                                    cerr << "Line: " << scanner.lineno() << " Col: " << first_column << " No parameters allowed for main." << endl;
                                    }
                                    else if (curTable->type != "void" || curTable->type != "int")
                                    {
                                    cerr << "Line: " << scanner.lineno() << " Col: " << first_column << " Bad name return type for main" << endl;
                                    } else {
                                    hasMain = true;
                                    (yyval.ttype)=new Node((yyvsp[-2].ttype),(yyvsp[0].ttype));
                                    }
                                    curTable = curTable->getParent();
                              } else {
                                    cerr << "Line: " << scanner.lineno() << " Col: " << first_column << " Main already exists" << endl;
                                    curTable = curTable->getParent();
                              }
                        }
                              (yyval.ttype)=new Node((yyvsp[-2].ttype),(yyvsp[0].ttype));
                              curTable = curTable->getParent();
                        
                        }
#line 1757 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 249 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeMeth((yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        SymbolTable* temp = new SymbolTable(curTable);
                        TypeEntry* typeEnt = new TypeEntry((yyvsp[-1].ttype)->getstring(), (yyvsp[-2].ttype)->getstring(), "method_type",temp);
                        if (curTable->lookup((yyvsp[-1].ttype)->getstring()) != nullptr)
                        {
                              cerr << "Line: " << scanner.lineno() << " Col: " << first_column << " Type already exists in this scope" << endl;
                        }
                        curTable->insert((yyvsp[-1].ttype)->getstring(),typeEnt);
                        curTable = temp;
                        }
#line 1773 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 260 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeMeth((yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        SymbolTable* temp = new SymbolTable(curTable);
                        TypeEntry* typeEnt = new TypeEntry((yyvsp[-1].ttype)->getstring(), (yyvsp[-2].ttype)->getstring(), "method_type",temp);
                        if (curTable->lookup((yyvsp[-1].ttype)->getstring()) != nullptr)
                        {
                              cerr << "Line: " << scanner.lineno() << " Col: " << first_column << " Type already exists in this scope" << endl;
                        }
                        curTable->insert((yyvsp[-1].ttype)->getstring(),typeEnt);
                        curTable = temp;
                        }
#line 1789 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 271 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeMeth((yyvsp[-1].ttype));
                        SymbolTable* temp = new SymbolTable(curTable);
                        TypeEntry* typeEnt = new TypeEntry((yyvsp[-1].ttype)->getstring(), "void", "method_type",temp);
                        if (curTable->lookup((yyvsp[-1].ttype)->getstring()) != nullptr)
                        {
                              cerr << "Line: " << scanner.lineno() << " Col: " << first_column << " Type already exists in this scope" << endl;
                        }
                        curTable->insert((yyvsp[-1].ttype)->getstring(),typeEnt);
                        curTable = temp;
                        }
#line 1805 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 285 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeType(nullptr, nullptr, 0);
                        (yyval.ttype)->setval("int");
                        }
#line 1814 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 291 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeId();
                        (yyval.ttype)->setval(scanner.YYText());
                        }
#line 1823 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 297 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeNum();
                        (yyval.ttype)->setval(scanner.YYText());
                        }
#line 1832 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 304 "program6.ypp" /* yacc.c:1646  */
    {(yyval.ttype)=nullptr;}
#line 1838 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 305 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeParams(nullptr,(yyvsp[0].ttype),0);
                        }
#line 1846 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 308 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeParams((yyvsp[-2].ttype),(yyvsp[0].ttype),1);
                        }
#line 1854 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 313 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeParam((yyvsp[-1].ttype),(yyvsp[0].ttype),0);
                        TypeEntry* typeEnt = new TypeEntry((yyvsp[0].ttype)->getstring(),(yyvsp[-1].ttype)->getstring());
                        curTable->paramtypes.push_back((yyvsp[-1].ttype)->getstring());
                        curTable->insert((yyvsp[0].ttype)->getstring(),typeEnt);
                        }
#line 1865 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 319 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeParam((yyvsp[-1].ttype),(yyvsp[0].ttype),1);
                        TypeEntry* typeEnt = new TypeEntry((yyvsp[0].ttype)->getstring(),(yyvsp[-1].ttype)->getstring());
                        curTable->paramtypes.push_back((yyvsp[-1].ttype)->getstring());
                        curTable->insert((yyvsp[0].ttype)->getstring(),typeEnt);
                        }
#line 1876 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 327 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeBlock(nullptr,nullptr, 0);
                        }
#line 1884 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 330 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeBlock((yyvsp[-2].ttype),(yyvsp[-1].ttype),1);
                        }
#line 1892 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 333 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeBlock(nullptr,(yyvsp[-1].ttype),2);
                        }
#line 1900 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 336 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeBlock(nullptr,(yyvsp[-1].ttype),3);
                        }
#line 1908 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 339 "program6.ypp" /* yacc.c:1646  */
    {cerr << "Line: " << scanner.lineno() << " Col: " << first_column << " Bad vardecs or statements in block." << endl; yyerrok;}
#line 1914 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 342 "program6.ypp" /* yacc.c:1646  */
    {(yyval.ttype)=new nodeStats(nullptr,(yyvsp[0].ttype),0);}
#line 1920 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 343 "program6.ypp" /* yacc.c:1646  */
    {(yyval.ttype)=new nodeStats((yyvsp[-1].ttype),(yyvsp[0].ttype),1);}
#line 1926 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 346 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeState(nullptr,nullptr,0);
                        }
#line 1934 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 349 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeState((yyvsp[-3].ttype),(yyvsp[-1].ttype),1);
                        }
#line 1942 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 352 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeState((yyvsp[-4].ttype),(yyvsp[-2].ttype),3);
                        }
#line 1950 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 355 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeState(nullptr,(yyvsp[-2].ttype),5);
                        }
#line 1958 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 358 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeState(nullptr,(yyvsp[0].ttype),6);
                        }
#line 1966 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 361 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeState((yyvsp[-3].ttype),(yyvsp[-1].ttype),7);
                        }
#line 1974 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 364 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeState(nullptr,(yyvsp[0].ttype),8);
                        }
#line 1982 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 367 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeState(nullptr,nullptr,9);
                        }
#line 1990 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 370 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeState(nullptr,(yyvsp[0].ttype),10);
                        }
#line 1998 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 376 "program6.ypp" /* yacc.c:1646  */
    {
                        SymbolTable* temp = new SymbolTable(curTable);
                        TypeEntry* typeEnt = new TypeEntry("" + blockcntr,"","",temp);
                        typeEnt->isBlock = true;
                        curTable->insert("" + blockcntr ,typeEnt);
                        blockcntr++;
                        curTable = temp;
                        }
#line 2011 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 386 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeBlock((yyvsp[-1].ttype),nullptr, 0);
                        curTable = curTable->getParent();
                        }
#line 2020 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 390 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new Node((yyvsp[-3].ttype),new nodeBlock((yyvsp[-2].ttype),(yyvsp[-1].ttype),1));
                        curTable = curTable->getParent();
                        }
#line 2029 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 394 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new Node((yyvsp[-2].ttype),(yyvsp[-1].ttype));
                        curTable = curTable->getParent();
                        }
#line 2038 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 398 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new Node((yyvsp[-2].ttype),(yyvsp[-1].ttype));
                        curTable = curTable->getParent();
                        }
#line 2047 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 402 "program6.ypp" /* yacc.c:1646  */
    {cerr << "Line: " << scanner.lineno() << " Col: " << first_column << " Bad vardecs or statements in block." << endl; yyerrok;}
#line 2053 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 406 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeName(nullptr,nullptr,0);
                        }
#line 2061 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 409 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeName((yyvsp[0].ttype),nullptr,1,id,id);
                        }
#line 2069 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 412 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeName((yyvsp[-2].ttype),(yyvsp[0].ttype),2,id,id);
                        }
#line 2077 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 415 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeName((yyvsp[-3].ttype),(yyvsp[-1].ttype),4);
                        }
#line 2085 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 418 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeName((yyvsp[-2].ttype));
                        cerr << "Line: " << scanner.lineno() << " Col: " << first_column << " 'this' can only be first." << endl;
                        }
#line 2094 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 425 "program6.ypp" /* yacc.c:1646  */
    {(yyval.ttype)=nullptr;}
#line 2100 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 426 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeArgl(nullptr,(yyvsp[0].ttype),0);
                        }
#line 2108 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 429 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeArgl((yyvsp[-2].ttype),(yyvsp[0].ttype),1);
                        }
#line 2116 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 434 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeConSt((yyvsp[-2].ttype),(yyvsp[0].ttype),0);
                        }
#line 2124 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 437 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeConSt((yyvsp[-4].ttype),new Node((yyvsp[-2].ttype),(yyvsp[0].ttype)),1);
                        }
#line 2132 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 442 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeExpNameNumNull((yyvsp[0].ttype));
                        (yyval.ttype)->setval((yyvsp[0].ttype)->getstring());
                        }
#line 2141 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 446 "program6.ypp" /* yacc.c:1646  */
    {        
                        (yyval.ttype)=new nodeExpNameNumNull((yyvsp[0].ttype),nullptr,1,(yyvsp[0].ttype)->getstring()); 
                        }
#line 2149 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 449 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeExpNameNumNull(nullptr,nullptr, 2);
                        }
#line 2157 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 452 "program6.ypp" /* yacc.c:1646  */
    { 
                        (yyval.ttype)=new nodeExpArgl((yyvsp[-3].ttype),(yyvsp[-1].ttype),0);
                        }
#line 2165 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 455 "program6.ypp" /* yacc.c:1646  */
    { 
                        //cout << "e + e : ";
                        //cout << $1->getint() << " + " << $3->getint() << endl;
                        string tempInt = "int";
                        TypeEntry *temp = types.findType(tempInt);
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),0,curTable);
                        if((yyvsp[-2].ttype)->typeCheck() != 0 && temp != nullptr)
                        {
                              cerr << "Line: " << scanner.lineno() << " Col: " << first_column << " Bad exp + exp" << endl;
                        }
                        }
#line 2181 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 466 "program6.ypp" /* yacc.c:1646  */
    { 
                        //cout << "e - e : ";
                        //cout << $1->getint() << " - " << $3->getint() << endl; 
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),1);
                        }
#line 2191 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 471 "program6.ypp" /* yacc.c:1646  */
    { 
                        //cout << "e * e : ";
                        //cout << $1->getint() << " * " << $3->getint() << endl; 
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),2);
                        }
#line 2201 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 476 "program6.ypp" /* yacc.c:1646  */
    { 
                        //cout << "e / e : ";
                        //cout << $1->getint() << " / " << $3->getint() << endl; 
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),3);
                        }
#line 2211 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 481 "program6.ypp" /* yacc.c:1646  */
    { 
                        //cout << "e ^ e : " ;
                        //cout << $1->getint() << " ^ " << $3->getint() << endl; 
                        (yyval.ttype)=new nodeExpExp((yyvsp[-2].ttype),(yyvsp[0].ttype)); 
                        }
#line 2221 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 486 "program6.ypp" /* yacc.c:1646  */
    { 
                        //cout << "- e : " << $2->getint() << endl;       
                        (yyval.ttype)=new nodeMinus((yyvsp[0].ttype));
                        }
#line 2230 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 490 "program6.ypp" /* yacc.c:1646  */
    {
                        //cout << "read()" << endl;
                        (yyval.ttype)=new nodeRead();
                        }
#line 2239 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 496 "program6.ypp" /* yacc.c:1646  */
    {
                        //cout << "e || e: ";
                        //cout << $1->getint() << " || " << $3->getint() << endl;
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),4);
                        }
#line 2249 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 502 "program6.ypp" /* yacc.c:1646  */
    {
                        //cout << "e == e : ";
                        //cout << $1->getint() << " == " << $3->getint() << endl;
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),5);
                        }
#line 2259 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 507 "program6.ypp" /* yacc.c:1646  */
    {
                        //cout << "e != e: ";
                        //cout << $1->getint() << " != " << $3->getint() << endl;
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),6);
                        }
#line 2269 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 512 "program6.ypp" /* yacc.c:1646  */
    {
                        //cout << "e >= e: ";
                        //cout << $1->getint() << " >= " << $3->getint() << endl;
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),7);
                        }
#line 2279 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 517 "program6.ypp" /* yacc.c:1646  */
    {
                        //cout << "e <= e: ";
                        //cout << $1->getint() << " <= " << $3->getint() << endl;
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),8);
                        }
#line 2289 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 522 "program6.ypp" /* yacc.c:1646  */
    {
                        //cout << "e > e: ";
                        //cout << $1->getint() << " > " << $3->getint() << endl;
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),9);
                        }
#line 2299 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 527 "program6.ypp" /* yacc.c:1646  */
    {
                        //cout << "e < e: ";
                        //cout << $1->getint() << " < " << $3->getint() << endl;
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),10);
                        }
#line 2309 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 534 "program6.ypp" /* yacc.c:1646  */
    {
                        //cout << "+e : " << $2->getint() << endl;       
                        (yyval.ttype)=new nodePlus((yyvsp[0].ttype));
                        }
#line 2318 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 538 "program6.ypp" /* yacc.c:1646  */
    {
                        //cout << "!e: " << $2->getint() << endl;
                        (yyval.ttype)=new nodeNot((yyvsp[0].ttype));
                        }
#line 2327 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 543 "program6.ypp" /* yacc.c:1646  */
    {
                        //cout << "e % e: ";
                        //cout << $1->getint() << " % " << $3->getint() << endl;
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),11);
                        }
#line 2337 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 548 "program6.ypp" /* yacc.c:1646  */
    {
                        //cout << "e && e: ";
                        //cout << $1->getint() << " && " << $3->getint() << endl;
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),12);
                        }
#line 2347 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 553 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeBin((yyvsp[-2].ttype),(yyvsp[0].ttype),13);
                        }
#line 2355 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 556 "program6.ypp" /* yacc.c:1646  */
    { 
                        (yyval.ttype)=new Node((yyvsp[0].ttype));
                        }
#line 2363 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 559 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodePar((yyvsp[-1].ttype));
                        }
#line 2371 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 565 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeNewExp(nullptr,(yyvsp[-1].ttype),0);
                        }
#line 2379 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 568 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeNewExp(nullptr,(yyvsp[0].ttype),1);
                        }
#line 2387 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 571 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeNewExp((yyvsp[-1].ttype),(yyvsp[0].ttype));
                        }
#line 2395 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 574 "program6.ypp" /* yacc.c:1646  */
    {
                        cout << "Line: " << scanner.lineno() << " Col: " << first_column << " error after NEW" << endl;
                        yyerrok;
                        }
#line 2404 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 578 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeNewExp((yyvsp[0].ttype),nullptr,3,id);
                        }
#line 2412 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 581 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeNewExp((yyvsp[-1].ttype),(yyvsp[0].ttype),4,id);
                        }
#line 2420 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 586 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeBrackExp((yyvsp[-1].ttype));
                        (yyval.ttype)->setval(1);
                        }
#line 2429 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 590 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeBrackExp((yyvsp[-2].ttype),(yyvsp[0].ttype));
                        (yyval.ttype)->setval((yyvsp[0].ttype)->getint() + 1);
                        }
#line 2438 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 594 "program6.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype)=new nodeBrackExp((yyvsp[0].ttype));
                        (yyval.ttype)->setval((yyvsp[0].ttype)->getint());
                        }
#line 2447 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 600 "program6.ypp" /* yacc.c:1646  */
    {
            (yyval.ttype)=new nodeMultBracks(nullptr,nullptr);
            (yyval.ttype)->setval(1);
            }
#line 2456 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 604 "program6.ypp" /* yacc.c:1646  */
    {
            (yyval.ttype)=new nodeMultBracks((yyvsp[-2].ttype),nullptr);
            (yyval.ttype)->setval((yyvsp[-2].ttype)->getint() + 1);
            }
#line 2465 "program6.tab.cpp" /* yacc.c:1646  */
    break;


#line 2469 "program6.tab.cpp" /* yacc.c:1646  */
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
#line 609 "program6.ypp" /* yacc.c:1906  */

