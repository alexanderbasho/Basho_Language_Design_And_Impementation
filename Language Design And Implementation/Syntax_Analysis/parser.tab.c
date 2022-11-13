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
#line 1 "parser.y" /* yacc.c:339  */

    
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>

    
	extern FILE *yyin;
    extern int yylex();


#line 79 "parser.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    TOKEN_EOF = 0,
    TOKEN_INTEGERCONST = 258,
    TOKEN_FLOATCONST = 259,
    TOKEN_CHARACTERCONST = 260,
    TOKEN_CHARROWCONST = 261,
    TOKEN_IDENTIFIER = 262,
    TOKEN_OCTACONST = 263,
    TOKEN_BINARYCONST = 264,
    TOKEN_HEXACONST = 265,
    TOKEN_TRUE = 266,
    TOKEN_FALSE = 267,
    TOKEN_INTEGER = 268,
    TOKEN_FLOAT = 269,
    TOKEN_CHARACTER = 270,
    TOKEN_CHARROW = 271,
    TOKEN_BOOL = 272,
    TOKEN_VOID = 273,
    TOKEN_WHETHER = 274,
    TOKEN_DURING = 275,
    TOKEN_DO = 276,
    TOKEN_OTHERWISE = 277,
    TOKEN_RETURN = 278,
    TOKEN_HEADFUNC = 279,
    TOKEN_CLASS = 280,
    TOKEN_READ = 281,
    TOKEN_WRITE = 282,
    TOKEN_WHITESPACES = 283,
    TOKEN_WORD = 284,
    TOKEN_AND = 285,
    TOKEN_OR = 286,
    TOKEN_NAND = 287,
    TOKEN_NOR = 288,
    TOKEN_XOR = 289,
    TOKEN_XNOR = 290,
    TOKEN_MODMULDI = 291,
    TOKEN_ADDSUB = 292,
    TOKEN_POWER = 293,
    TOKEN_EQUNOT = 294,
    TOKEN_GREATLESSEQU = 295,
    TOKEN_NOT = 296,
    TOKEN_INCRDECR = 297,
    TOKEN_LEFTPARENTHESIS = 298,
    TOKEN_RIGHTPARENTHESIS = 299,
    TOKEN_SEMICOLON = 300,
    TOKEN_COMMA = 301,
    TOKEN_EQUAL = 302,
    TOKEN_LEFTBRACE = 303,
    TOKEN_RIGHTBRACE = 304,
    TOKEN_LEFTBRACKET = 305,
    TOKEN_RIGHTBRACKET = 306,
    TOKEN_AMPERSAND = 307,
    NEGATIVE = 308,
    OTHERWISE_DANGLING = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "parser.y" /* yacc.c:355  */

    int intNum;
	float floatNum;
	char aCharacter;
	char *charrowVar;
    _Bool trueVar;
    _Bool falseVar;

#line 184 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   7271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  579

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   156,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"EOF\"", "error", "$undefined", "\"INTEGERCONST\"", "\"FLOATCONST\"",
  "\"CHARACTERCONST\"", "\"CHARROWCONST\"", "\"IDENTIFIER\"",
  "\"OCTACONST\"", "\"BINARYCONST\"", "\"HEXACONST\"", "\"TRUE\"",
  "\"FALSE\"", "\"INTEGER\"", "\"FLOAT\"", "\"CHARACTER\"", "\"CHARROW\"",
  "\"BOOL\"", "\"VOID\"", "\"WHETHER\"", "\"DURING\"", "\"DO\"",
  "\"OTHERWISE\"", "\"RETURN\"", "\"HEADFUNC\"", "\"CLASS\"", "\"READ\"",
  "\"WRITE\"", "\"WHITESPACES\"", "\"WORD\"", "\"AND\"", "\"OR\"",
  "\"NAND\"", "\"NOR\"", "\"XOR\"", "\"XNOR\"",
  "\"MODULUS | MULTIPLY | DIVIDE\"", "\"ADD | SUBSTRACT\"", "\"POWER\"",
  "\"== | !=\"", "\"> | >= | < | <=\"", "\"!\"", "\"++ | --\"", "\"(\"",
  "\")\"", "\";\"", "\",\"", "\"=\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"",
  "\"&\"", "NEGATIVE", "OTHERWISE_DANGLING", "$accept", "BitGate",
  "Headfunc", "GlobalDeclarations", "GlobalDeclaration",
  "VariableTypename", "StandardVariableType", "Dimensions", "Dimension",
  "Initializer", "InitializerValue", "Expression", "Variable",
  "GeneralExpression", "Assignment", "ListOfExpression",
  "VariableTypeConst", "ExpressionList", "InitializerValues",
  "VariableDefinitions", "VariableDefinition", "ShortFunctionDeclaration",
  "ShortFunctionHeaderParameters", "StartFunctionHeader", "ParameterTypes",
  "ListOfDimensionsPass", "FunctionHeaderWithNoParameters",
  "GlobalVariableDeclaration", "VariableDefinitionInitializers",
  "VariableDefinitionInitializer", "FunctionDeclaration",
  "FullFunctionDeclaration", "FunctionHeader", "ListOfParameters",
  "VariableDefinitionPass", "StatementsDeclaration", "Declarations",
  "Statements", "Statement", "ExpressionStatement", "WhetherStatement",
  "WhetherOtherwise", "DuringStatement", "WriteStatement", "ReadStatement",
  "ExpressionsOptimizer", "ReturnStatement", "CompStatement",
  "HeadfuncFunction", "HeadfuncHeader", YY_NULLPTR
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
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -197

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-197)))

#define YYTABLE_NINF -307

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     105,    10,   104,    24,     1,     4,    57,  -197,   951,   951,
     951,  1055,  1073,    68,  5265,   132,   146,   320,    13,   384,
    -197,   549,  -197,  -197,  -197,  -197,   137,  -197,   389,  -197,
    -197,   237,   338,   339,  -197,  -197,  -197,   117,  -197,    73,
    -197,   822,  -197,  -197,  -197,  -197,  -197,  -197,  -197,   550,
     352,    90,  7181,  -197,  4421,  4471,   574,   286,  -197,   156,
     379,  -197,   547,   388,   359,  -197,  -197,  7199,  7217,  4421,
    -197,  4523,  4421,  4573,  4471,  4623,  4975,   529,  5433,   297,
    -197,   366,   420,   217,    38,  -197,  -197,  -197,    29,   247,
     579,  1395,  -197,  -197,  -197,  -197,   533,  -197,  -197,  -197,
    -197,  -197,   393,   436,  5043,   457,   699,  5483,  5501,  5551,
    5569,  -197,  4675,  5315,   534,  6518,  1231,   537,  -197,  -197,
    -197,   159,  4109,  4161,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,   248,  4993,  -197,   529,  -197,   559,   244,   257,
      48,  -197,  6453,  -197,  -197,   590,   657,    43,  -197,   673,
     730,   274,  1703,    75,   312,  1753,    92,   277,  1447,    20,
    3653,  5061,   560,  -197,  -197,  7098,   974,   584,   362,  -197,
    3703,  5111,  -197,   125,   128,  -197,   125,  -197,   498,  5315,
     557,   302,  -197,  -197,  -197,   530,  -197,  -197,  5315,  -197,
    7235,  5315,  -197,  7253,  1156,   952,  5619,  5619,  5619,  5619,
    5619,  5619,  5619,  5483,  5619,  5619,  5619,  2253,  5129,   350,
    5637,  5687,  4675,   534,  6538,   167,   330,   542,  -197,   391,
    4213,  -197,   383,  5637,  5705,  5637,  5755,  2303,  5179,   597,
     259,  5637,  5773,  5637,  5823,  2353,  6558,  2403,  6578,  2453,
    6598,  2503,   407,   731,  1803,    93,   149,   186,  -197,  -197,
    6458,  6478,   675,  5619,  5841,  5891,  5909,  5959,  5977,  6027,
    6045,  6095,  6113,  6163,  6181,  2553,  -197,  5197,  6231,  6249,
    3953,  -197,  6299,  -197,  1499,   562,  4265,  1551,  -197,  -197,
    3753,  -197,   584,  -197,  -197,  -197,  -197,  -197,  -197,  -197,
     404,   885,  -197,   402,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,  1903,   405,   533,
    5129,  5111,  -197,  -197,  6618,    76,   157,  2603,  7118,  -197,
     187,   103,   263,  -197,  -197,  2553,  3803,   405,   406,   206,
     112,  -197,    34,  -197,  -197,    30,    30,    47,    45,    45,
      46,  1208,  6317,  2653,  6638,  6658,  6678,  6698,  6718,  6738,
    6758,  6558,  6778,  6798,  6818,  2503,   735,   409,  1953,   201,
    2003,  -197,   144,   738,  -197,  -197,   639,  -197,   643,  -197,
    -197,   743,  2703,   747,   750,  2753,   754,  1953,  -197,  5179,
    3853,  5637,  -197,  -197,   758,  2803,   772,   798,  2853,   816,
    -197,  -197,  2903,  -197,  6838,  -197,  -197,  -197,  -197,   270,
    -197,   639,  4317,  -197,  6858,  2953,  6878,  3003,  6898,  3053,
    6918,  3103,  6938,  3153,  6958,  3203,  6978,  3253,  6998,  3303,
    7018,  3353,  7038,  3403,  7058,  3453,  7078,   126,   411,   432,
    3503,   195,  2003,  -197,  3903,   271,   229,  1953,   251,   785,
    7138,   831,  1603,  6367,  -197,   731,   276,  6385,  6435,  -197,
     424,  -197,  -197,   681,  -197,   240,  -197,  -197,  -197,   318,
    -197,  -197,  -197,   329,  -197,   621,   644,  -197,  -197,   631,
    -197,  1653,  4725,  2053,   952,  -197,   164,  -197,  -197,   427,
     479,  -197,   844,  -197,   526,   528,  5247,    17,   531,   541,
    5297,   113,  -197,   525,   569,  5347,   279,   592,   602,  5365,
     310,  -197,  -197,  -197,  -197,  -197,  -197,  2103,  -197,  -197,
    -197,  4369,  -197,  3553,  -197,  -197,   480,  -197,  1853,  2153,
    4775,  -197,  4775,  4775,  4775,  4775,  4825,  4775,  4775,  4775,
    4775,  4875,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,  6498,  2203,  5415,  1291,  4005,  4005,  4005,  4005,
    4005,  1343,  4057,  -197,  -197,  -197,  -197,  1291,  -197,  3603,
     558,   441,  -197,  -197,  -197,  -197,  -197,  1104,  -197,   558,
    -197,   456,  4775,  4775,  4925,  -197,  -197,  1291,  -197
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,    24,    22,    27,    26,    25,    14,     0,    19,
     208,     0,     0,     0,    16,    17,   209,     0,     9,     0,
       3,     0,    11,     8,     4,     5,     6,     7,     2,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   200,     0,
       0,   177,     0,     0,     0,   170,   166,     0,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     206,     0,     0,     0,     0,    23,    25,   192,     0,     0,
       0,     0,   138,   139,   137,   140,   113,   141,   142,   143,
     144,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,   123,    67,
      70,     0,     0,     0,   255,   259,   260,   261,   264,   265,
     262,   263,     0,     0,   205,     0,   196,     0,     0,     0,
       0,   197,     0,   195,   193,     0,     0,     0,   191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    42,     0,     0,     0,     0,   202,
       0,     0,    39,    31,     0,    29,     0,   322,     0,     0,
       0,     0,   233,   186,   231,     0,   181,   226,     0,   172,
       0,     0,   221,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   266,
       0,     0,     0,     0,     0,     0,     0,     0,   158,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,    21,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,     0,     0,     0,
       0,   268,     0,   213,     0,     0,     0,     0,   254,   317,
       0,   203,     0,   199,   323,   324,   325,   321,   173,   222,
     174,     0,   171,     0,   220,   214,   215,   216,   212,   217,
     218,   219,   211,   318,   319,   320,   316,     0,   138,   113,
       0,     0,    37,   152,     0,     0,     0,     0,     0,    33,
       0,     0,     0,   117,   114,     0,     0,     0,    38,     0,
       0,   236,     0,   237,   234,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   131,     0,     0,   106,   148,     0,   251,     0,   313,
     309,     0,     0,     0,     0,     0,     0,     0,   310,     0,
       0,     0,   311,   308,     0,     0,     0,     0,     0,     0,
     107,    69,     0,    68,   314,   150,   147,   315,   312,     0,
     252,     0,     0,   246,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
       0,     0,     0,   128,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,    47,
     149,    36,    32,     0,    45,   149,    35,   182,   227,     0,
     188,   183,   184,     0,   180,     0,     0,   228,   229,     0,
     225,     0,     0,     0,     0,   159,    68,   102,   118,   246,
       0,   160,     0,   157,     0,     0,     0,     0,     0,     0,
       0,     0,   149,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   103,   104,   105,    66,   120,     0,   112,   248,
     249,     0,   245,     0,   154,   155,     0,   151,     0,     0,
       0,   294,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   301,   302,   303,   304,   299,   295,   296,   297,
     298,   293,   314,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,   289,   290,   291,     0,   286,     0,
     284,     0,   272,   273,   274,   275,   276,     0,   277,   278,
     271,   149,     0,     0,     0,   280,   281,     0,   279
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -197,  -197,    23,  -197,   634,   -12,  -100,    33,   -78,   515,
     -65,   508,   840,    82,  -196,   -96,  -197,  -197,  -149,  -111,
     107,  -197,  -197,  -197,   202,   -69,  -197,  -197,   607,   -57,
    -197,  -197,  -197,   376,   -81,   -46,  -197,   -85,   283,  -197,
    -197,   357,  -197,  -197,  -197,   548,  -197,  -197,   647,  -197
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    13,    14,    27,   162,    29,    79,   163,    80,
     313,   115,   116,   315,   118,   216,   119,   120,   316,   217,
     218,    30,    31,    32,    89,   183,    33,    34,    57,    58,
      35,    36,    37,    90,   184,   219,   122,   123,   124,   125,
     126,   562,   127,   128,   129,   222,   130,   131,    38,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,   175,    28,   252,   175,    28,   220,   187,   121,   132,
     242,   164,   322,   172,    47,   361,   246,     4,   525,   186,
     169,   305,   322,   151,     7,   153,   154,   156,   157,   159,
     185,   459,    15,    16,    18,   178,   168,   276,   526,   178,
      88,   168,   114,   114,   178,   168,   465,   469,   463,   286,
     168,     8,   168,   168,     9,    88,    88,   114,    10,   114,
     114,   114,   114,   114,    48,   246,   247,   220,   164,   428,
     220,   306,   433,   220,    74,   246,   297,   381,   281,   213,
     283,   180,   460,    82,   179,   281,   180,   290,  -194,   179,
     180,  -194,   287,   301,   270,   180,    82,   466,   466,   460,
     114,   249,   363,   175,   381,     5,     1,    11,   242,   220,
     275,     6,   357,   176,   530,   327,   246,   181,    72,    40,
     364,   181,   272,    75,   298,  -134,    56,   381,   327,   328,
       2,   329,   246,    83,   531,    56,   117,   117,   271,   272,
     213,   302,  -134,   213,    61,   270,   213,  -134,    56,   272,
     395,   117,  -134,   117,   117,   117,   117,   117,   447,   220,
     174,   312,   322,   439,   441,    73,   247,   332,   270,   429,
    -134,   431,   272,   215,   312,   501,   335,   319,   337,   338,
     181,   340,   213,    44,    56,   520,   229,   397,   253,   271,
     272,   182,   243,   478,   245,   182,   504,    45,   396,   138,
     114,    82,   381,   448,   117,   117,   449,   451,   273,   521,
     242,   364,   271,   272,   357,   246,  -134,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,    82,   429,
     381,  -129,   213,   -44,   215,   398,   -44,   215,    65,   505,
     215,   -48,    56,   321,    56,  -125,  -125,  -125,   188,    56,
    -125,   458,   381,   321,   182,   452,   220,   467,   468,   470,
     382,   177,   114,   457,   453,   114,   461,   462,   464,   145,
     149,   176,   507,  -126,  -126,   272,   215,   381,  -126,   335,
     535,   338,    66,   246,    82,   -48,   -48,   135,   284,   -48,
     356,   189,   359,   190,   362,  -122,  -122,  -122,   173,   279,
    -122,   285,   117,   173,   383,   371,   373,   374,   376,   448,
     321,   540,   454,   384,   386,   387,   389,   272,   174,   176,
     508,    19,   272,   295,   536,   478,   215,    20,   303,   213,
     176,   136,   137,    21,    22,    23,    24,    25,    26,    67,
      69,  -164,  -164,  -164,  -164,   174,  -189,   427,  -189,   321,
     174,   435,   436,    81,   438,   541,   215,   220,   117,   215,
     142,   299,  -190,    81,  -190,   181,   174,   176,   181,   181,
     181,    46,  -269,  -185,   221,  -185,   246,   174,   514,   365,
     139,    68,   515,   517,    70,    49,   220,    71,   515,    81,
      62,    50,   445,   446,   223,  -178,    63,   -18,   -18,   -18,
     -18,   -18,   -18,   248,   143,   137,   278,   427,    51,    20,
    -165,  -165,  -165,  -165,   174,    85,    22,    23,    24,    25,
      86,   173,   140,   215,   359,   -35,   247,    52,   370,    53,
     213,  -176,    54,   220,    55,   221,   224,   225,   221,   182,
     369,   221,   573,   146,   150,   182,   182,   182,   246,   475,
    -224,   391,  -223,   477,   444,   456,  -132,   -35,   231,   213,
     114,   446,   574,   436,  -163,  -163,  -163,  -163,   174,   -35,
     -35,   -35,   -35,   481,   436,   483,   502,   221,  -247,   226,
     399,   307,   220,    92,    93,    94,    95,   309,    97,    98,
      99,   100,   101,    85,    22,    23,    24,    25,    86,   330,
     232,   -35,   -35,   278,   -35,   331,   213,    82,   475,   481,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   108,   207,   310,   215,   359,   -46,   221,   311,   -46,
     167,   330,   113,   114,   -20,   250,   168,   331,   270,   114,
     -20,   251,  -190,   366,  -190,   114,   174,   522,    76,   523,
      59,    76,   527,   215,   362,   213,   -23,   221,   333,   278,
     282,   323,   528,   440,   334,   114,   168,   324,   436,   251,
     532,   134,   436,    60,  -187,   133,  -187,   436,   174,   572,
     191,   436,   271,   272,   165,    76,   165,   367,   368,   436,
    -179,   188,   141,    77,    78,   -40,    77,    78,   381,   214,
     215,  -188,   117,  -188,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   533,   236,   238,   240,   481,   -40,
     -40,    78,   399,   192,   221,   193,   446,   215,   331,   -40,
     -40,    78,   399,   215,   288,    64,   190,   537,   331,   215,
     480,   165,  -305,   272,   482,   333,   168,   538,    42,   215,
     168,   334,   230,     0,   117,   117,   117,     0,   191,   215,
     214,    43,     0,   214,     0,  -235,   214,  -235,   314,   320,
       0,     0,     0,     0,   291,  -230,   402,  -230,   314,   320,
       0,     0,   280,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     233,   289,   214,   193,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   240,     0,   292,   107,   190,
     403,   368,   108,   109,   110,   221,   -49,   -49,     0,   171,
     -49,   293,   392,   113,     0,   214,   392,     0,     0,   402,
       0,     0,   234,   214,   381,   214,     0,   214,   486,   214,
       0,   381,   214,     0,   221,   490,     0,     0,     0,   381,
       0,   404,   406,   408,   410,   412,   414,   416,   418,   420,
     422,   424,   426,   495,   294,   393,   193,   272,     0,   476,
       0,   272,   214,   479,   368,   214,   366,   484,   314,   272,
       0,   487,     0,   272,   488,     0,   272,     0,   491,   381,
     272,   221,   493,   546,   272,   547,   548,   549,   550,   552,
     553,   554,   555,   556,   558,   314,   496,   499,   272,   320,
       0,     0,     0,    49,     0,   314,     0,     0,     0,    50,
     509,   368,   511,     0,   314,   -15,   -15,   -15,   -15,   -15,
     -15,     0,   497,     0,   272,   399,    51,     0,     0,   214,
     221,   214,     0,     0,     0,   575,   576,   578,     0,     0,
     500,     0,   272,   214,     0,    52,   214,    53,   214,     0,
      54,     0,    55,   -10,     0,     0,   512,   368,     0,     0,
     214,     0,     0,   214,     0,   214,   248,     0,   214,  -161,
    -161,     0,    20,   214,     0,     0,   214,     0,    85,    22,
      23,    24,    25,    86,   563,   564,   565,   566,   568,   570,
       0,     0,     0,   214,     0,   214,   166,   214,   166,   214,
       0,   214,     0,   214,     0,   214,     0,   214,     0,   214,
    -175,   214,     0,   214,     0,     0,     0,     0,   214,     0,
     214,     0,   214,     0,     0,   214,     0,   166,   166,   166,
     214,   320,    12,    81,     0,   165,   165,     0,   -12,   -20,
       0,   165,     0,     0,   -12,   -12,   -12,   -12,   -12,   -12,
       0,     0,     0,   166,     0,   325,     0,     0,     0,   214,
       0,   214,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,     0,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,   266,   267,   -65,   -65,
     -65,   314,   269,   -65,   314,     0,   214,   214,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,     0,     0,
       0,   214,     0,   214,     0,     0,    17,     0,     0,   214,
       0,     0,   -12,     0,     0,   214,     0,   214,   -12,   -12,
     -12,   -12,   -12,   -12,    19,   214,     0,     0,     0,     0,
      20,     0,     0,     0,     0,   214,    21,    22,    23,    24,
      25,    26,     0,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   194,     0,    92,    93,    94,
      95,   195,    97,    98,    99,   100,   101,    85,    22,    23,
      24,    25,    86,   102,   103,   572,  -284,   104,     0,     0,
     105,   106,     0,     0,   196,   197,   198,   199,   200,   201,
     202,  -101,   204,   205,   206,  -258,  -115,  -115,  -101,   209,
     210,   211,  -115,  -101,     0,  -284,   113,   341,     0,    92,
      93,    94,    95,   195,    97,    98,    99,   100,   101,    85,
      22,    23,    24,    25,    86,   102,   103,     0,     0,   104,
       0,     0,   105,   106,     0,     0,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   108,   207,   208,
    -101,   209,   342,   211,   212,  -101,     0,  -258,   113,   471,
       0,    92,    93,    94,    95,   195,    97,    98,    99,   100,
     101,    85,    22,    23,    24,    25,    86,   102,   103,     0,
       0,   104,   265,     0,   105,   106,     0,     0,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   108,
     207,   208,  -101,   209,   342,   211,   472,  -101,     0,  -267,
     113,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,   266,   267,   -65,   -65,   -65,   268,   269,
     -65,     0,     0,     0,     0,     0,     0,   166,   166,     0,
       0,     0,   442,   166,    92,    93,    94,    95,   309,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     102,   103,     0,  -267,   104,     0,     0,   105,   106,     0,
       0,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   108,   207,   208,     0,   209,   210,   211,   212,
    -135,     0,  -267,   113,   567,     0,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   102,   103,     0,   561,   104,     0,     0,   105,
     106,     0,     0,   196,   197,   198,   199,   200,   201,   202,
    -101,   204,   205,   206,  -267,  -115,  -115,     0,   209,   210,
     211,  -115,  -135,     0,  -267,   113,   194,     0,    92,    93,
      94,    95,   195,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   102,   103,     0,     0,   104,     0,
       0,   105,   106,     0,     0,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   108,   207,   208,     0,
     209,   210,   211,   212,  -135,     0,  -244,   113,   194,     0,
      92,    93,    94,    95,   195,    97,    98,    99,   100,   101,
      85,    22,    23,    24,    25,    86,   102,   103,     0,     0,
     104,     0,     0,   105,   106,     0,     0,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   108,   207,
     208,     0,   209,   210,   211,   212,  -135,     0,   304,   113,
     194,     0,    92,    93,    94,    95,   195,    97,    98,    99,
     100,   101,    85,    22,    23,    24,    25,    86,   102,   103,
       0,     0,   104,     0,     0,   105,   106,     0,     0,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     108,   207,   208,     0,   209,   210,   211,   212,  -135,     0,
    -243,   113,   442,     0,    92,    93,    94,    95,   309,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     102,   103,     0,     0,   104,     0,     0,   105,   106,     0,
       0,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   108,   207,   208,     0,   209,   210,   211,   212,
    -135,     0,  -257,   113,   194,     0,    92,    93,    94,    95,
     195,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   102,   103,     0,     0,   104,     0,     0,   105,
     106,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   208,  -101,   209,   210,
     211,   212,  -101,     0,   471,   113,   308,    93,    94,    95,
     195,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   102,   103,     0,     0,   104,     0,     0,   105,
     106,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   208,  -101,   209,   342,
     211,   472,   312,     0,   194,   113,    92,    93,    94,    95,
     195,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   102,   103,     0,     0,   104,     0,     0,   105,
     106,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   208,     0,   209,   210,
     211,   212,   296,     0,   194,   113,    92,    93,    94,    95,
     195,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   102,   103,     0,     0,   104,     0,     0,   105,
     106,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   208,     0,   209,   210,
     211,   212,   300,     0,   194,   113,    92,    93,    94,    95,
     195,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   102,   103,     0,     0,   104,     0,     0,   105,
     106,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   208,     0,   209,   210,
     211,   212,   394,     0,   194,   113,    92,    93,    94,    95,
     195,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   102,   103,     0,     0,   104,     0,     0,   105,
     106,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   208,     0,   209,   210,
     211,   212,   542,     0,   307,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,  -101,  -101,   443,
     211,   311,   -46,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,  -101,  -101,   210,
     211,   379,  -101,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,  -101,  -101,  -101,
     211,   379,  -101,     0,   519,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,  -101,  -101,   210,
     211,   379,  -101,     0,   358,   113,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
     107,  -121,  -121,  -121,   108,   109,   110,  -121,  -121,  -121,
    -121,   228,  -121,     0,   543,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,  -101,  -101,   210,
     211,   544,  -101,     0,   377,   113,   308,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,  -101,  -101,   210,
     211,   379,   312,     0,   239,   113,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,   108,   109,   110,  -100,  -100,  -100,
       0,   228,  -100,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,     0,   378,   210,
     211,   379,  -135,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,   108,   207,   310,  -101,  -101,  -101,
       0,   379,  -101,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -96,   -96,   -96,
       0,   379,   -96,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -98,   -98,   -98,
       0,   379,   -98,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   390,     0,   210,
     211,   379,  -135,     0,   377,   113,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     107,   -99,   -99,   -99,   108,   109,   110,   -99,   -99,   -99,
       0,   228,   -99,     0,   307,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,     0,   -38,   443,
     211,   311,   450,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,  -101,  -101,  -101,
       0,   379,  -101,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   485,     0,   210,
     211,   379,  -135,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   489,     0,   210,
     211,   379,  -135,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   494,     0,   210,
     211,   379,  -135,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   498,     0,   210,
     211,   379,  -135,     0,   358,   113,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
     107,  -108,  -108,  -108,   108,   109,   110,  -108,  -108,  -108,
       0,   228,  -108,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -76,   -76,   -76,
       0,   379,   -76,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -78,   -78,   -78,
       0,   379,   -78,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -86,   -86,   -86,
       0,   379,   -86,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -80,   -80,   -80,
       0,   379,   -80,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -82,   -82,   -82,
       0,   379,   -82,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -84,   -84,   -84,
       0,   379,   -84,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -90,   -90,   -90,
       0,   379,   -90,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -74,   -74,   -74,
       0,   379,   -74,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -88,   -88,   -88,
       0,   379,   -88,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -94,   -94,   -94,
       0,   379,   -94,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   -92,   -92,   -92,
       0,   379,   -92,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,   503,     0,   210,
     211,   379,  -135,     0,   307,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,  -101,     0,   210,
     211,   311,   -46,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,     0,   -38,   210,
     211,   379,   571,     0,   307,   113,   308,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,     0,   -46,   -46,
       0,   311,   312,     0,   307,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,     0,   -43,   -43,
       0,   311,  -135,     0,   307,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,     0,   -46,   -46,
       0,   311,   -46,     0,   307,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,     0,     0,   443,
     211,   311,   455,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,     0,     0,   210,
     211,   379,   492,     0,   377,   113,    92,    93,    94,    95,
     309,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   108,   207,   310,     0,     0,   210,
     211,   379,   506,     0,   358,   113,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,  -270,  -270,     0,  -270,  -270,     0,     0,  -270,
    -270,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,   108,   109,   110,     0,  -270,     0,
       0,   228,  -270,     0,  -270,   113,   560,     0,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,     0,   561,  -283,     0,
       0,  -283,  -283,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -283,     0,     0,     0,  -283,  -283,  -283,     0,
    -283,     0,     0,  -283,  -283,     0,  -283,  -283,   569,     0,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,     0,   561,
    -283,     0,     0,  -283,  -283,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -283,     0,     0,     0,  -283,  -283,
    -283,     0,  -283,     0,     0,  -283,  -283,     0,  -283,  -283,
     274,     0,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    85,    22,    23,    24,    25,    86,   102,   103,
       0,     0,   104,     0,     0,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
     108,   109,   110,     0,   111,     0,     0,   112,  -239,     0,
    -239,   113,   277,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     102,   103,     0,     0,   104,     0,     0,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,   108,   109,   110,     0,   111,     0,     0,   112,
    -240,     0,  -240,   113,   277,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   102,   103,     0,     0,   104,     0,     0,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,   108,   109,   110,     0,   111,     0,
       0,   112,  -240,     0,  -242,   113,   277,     0,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   102,   103,     0,     0,   104,     0,
       0,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,   108,   109,   110,     0,
     111,     0,     0,   112,  -238,     0,  -238,   113,   480,     0,
    -253,  -253,  -253,  -253,   168,  -253,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,     0,     0,
    -253,     0,     0,  -253,  -253,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -253,     0,     0,     0,  -253,  -253,
    -253,     0,  -253,     0,     0,  -253,  -253,     0,  -253,  -253,
     480,     0,  -250,  -250,  -250,  -250,   168,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
       0,     0,  -250,     0,     0,  -250,  -250,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -250,     0,     0,     0,
    -250,  -250,  -250,     0,  -250,     0,     0,  -250,  -250,     0,
    -250,  -250,    91,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     102,   103,     0,     0,   104,     0,     0,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,   108,   109,   110,     0,   111,     0,     0,   112,
    -241,     0,    91,   113,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     102,   103,     0,     0,   104,     0,     0,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,   108,   109,   110,     0,   111,     0,     0,   112,
       0,     0,  -241,   113,   152,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   102,   103,     0,     0,   104,     0,     0,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,   108,   109,   110,     0,   111,     0,
       0,   112,  -241,     0,   155,   113,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   102,   103,     0,     0,   104,     0,     0,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,   108,   109,   110,     0,   111,     0,
       0,   112,  -241,     0,   158,   113,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   102,   103,     0,     0,   104,     0,     0,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,   108,   109,   110,     0,   111,     0,
       0,   112,     0,     0,  -241,   113,   244,     0,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   102,   103,     0,     0,   104,     0,
       0,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,   108,   109,   110,     0,
     111,     0,     0,   112,  -135,     0,   518,   113,   318,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   102,   103,     0,     0,   104,     0,
       0,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,   108,   109,   110,     0,
     111,     0,     0,   112,   319,     0,   545,   113,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   102,   103,     0,     0,   104,     0,
       0,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,   108,   109,   110,     0,
     111,     0,     0,   112,     0,     0,   551,   113,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   102,   103,     0,     0,   104,     0,
       0,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,   108,   109,   110,     0,
     111,     0,     0,   112,     0,     0,   557,   113,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   102,   103,     0,     0,   104,     0,
       0,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,   108,   109,   110,     0,
     111,     0,     0,   112,     0,     0,   577,   113,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   102,   103,     0,     0,   104,     0,
       0,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,   108,   109,   110,     0,
     111,     0,     0,   112,     0,     0,   160,   113,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   280,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   107,     0,     0,     0,   108,   109,   110,     0,
     -41,   -41,     0,   161,     0,     0,     0,   113,     0,     0,
     107,     0,     0,     0,   108,   109,   110,     0,   -41,   -41,
       0,   171,     0,     0,   227,   113,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   317,     0,   318,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     107,     0,     0,     0,   108,   109,   110,     0,  -306,     0,
       0,   228,     0,     0,     0,   113,     0,     0,   107,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,   171,
     319,     0,   326,   113,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     355,     0,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    85,    22,    23,    24,    25,    86,   107,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,   171,
    -135,     0,     0,   113,     0,     0,   107,     0,     0,     0,
     108,   109,   110,  -135,     0,     0,     0,   228,     0,     0,
     380,   113,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    85,    22,    23,    24,    25,    86,   430,     0,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      85,    22,    23,    24,    25,    86,   107,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,   228,  -135,     0,
       0,   113,     0,     0,   107,     0,     0,     0,   108,   109,
     110,  -135,     0,     0,     0,   228,     0,     0,   358,   113,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      85,    22,    23,    24,    25,    86,    41,     0,   524,     0,
       0,     0,    20,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25,    26,   107,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,   228,     0,     0,   358,   113,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      85,    22,    23,    24,    25,    86,   248,     0,   529,     0,
       0,     0,    20,     0,     0,     0,     0,     0,    85,    22,
      23,    24,    25,    86,   107,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,   228,     0,     0,   358,   113,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      85,    22,    23,    24,    25,    86,   358,     0,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   107,     0,     0,     0,   108,   109,
     110,     0,   534,     0,     0,   228,     0,     0,     0,   113,
       0,     0,   107,     0,     0,     0,   108,   109,   110,     0,
     539,     0,     0,   228,     0,     0,   559,   113,   318,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   170,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   107,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,   228,   319,     0,     0,   113,     0,     0,
     107,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,   171,     0,     0,   235,   113,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   237,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     107,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,   228,     0,     0,     0,   113,     0,     0,   107,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,   228,
       0,     0,   239,   113,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     241,     0,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    85,    22,    23,    24,    25,    86,   107,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,   228,
       0,     0,     0,   113,     0,     0,   107,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,   228,     0,     0,
     343,   113,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    85,    22,    23,    24,    25,    86,   358,     0,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      85,    22,    23,    24,    25,    86,   107,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,   228,     0,     0,
       0,   113,     0,     0,   107,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,   228,     0,     0,   360,   113,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      85,    22,    23,    24,    25,    86,   372,     0,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   107,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,   228,     0,     0,     0,   113,
       0,     0,   107,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,   228,     0,     0,   375,   113,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   385,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   107,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,   228,     0,     0,     0,   113,     0,     0,
     107,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,   228,     0,     0,   388,   113,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   405,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     107,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,   228,     0,     0,     0,   113,     0,     0,   107,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,   228,
       0,     0,   407,   113,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     409,     0,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    85,    22,    23,    24,    25,    86,   107,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,   228,
       0,     0,     0,   113,     0,     0,   107,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,   228,     0,     0,
     411,   113,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    85,    22,    23,    24,    25,    86,   413,     0,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      85,    22,    23,    24,    25,    86,   107,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,   228,     0,     0,
       0,   113,     0,     0,   107,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,   228,     0,     0,   415,   113,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      85,    22,    23,    24,    25,    86,   417,     0,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   107,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,   228,     0,     0,     0,   113,
       0,     0,   107,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,   228,     0,     0,   419,   113,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   421,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   107,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,   228,     0,     0,     0,   113,     0,     0,
     107,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,   228,     0,     0,   423,   113,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    85,    22,    23,    24,
      25,    86,   425,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     107,     0,     0,     0,   108,   109,   110,     0,     0,     0,
       0,   228,     0,     0,     0,   113,     0,     0,   107,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,   228,
       0,     0,   432,   113,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    85,    22,    23,    24,    25,    86,
     434,     0,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    85,    22,    23,    24,    25,    86,   107,     0,
       0,     0,   108,   109,   110,     0,     0,     0,     0,   228,
       0,     0,     0,   113,     0,     0,   107,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,   228,     0,     0,
     437,   113,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    85,    22,    23,    24,    25,    86,   473,     0,
      92,    93,    94,    95,   474,    97,    98,    99,   100,   101,
      85,    22,    23,    24,    25,    86,   107,     0,     0,     0,
     108,   109,   110,     0,     0,     0,     0,   228,     0,     0,
       0,   113,     0,     0,   107,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,   228,     0,     0,   513,   113,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      85,    22,    23,    24,    25,    86,   280,     0,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   107,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,   171,     0,     0,     0,   113,
       0,     0,   107,     0,     0,     0,   108,   109,   110,     0,
       0,     0,     0,   171,     0,     0,   516,   113,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    85,    22,
      23,    24,    25,    86,   167,     0,     0,     0,     0,   399,
     168,     0,     0,     0,     0,     0,  -198,  -198,  -198,  -198,
    -198,  -198,   107,     0,     0,     0,   108,   109,   110,    81,
       0,     0,     0,   171,     0,     0,     0,   113,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,   -35,
    -117,  -117,  -117,   400,   401,  -117,  -117,  -117,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,   253,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,   253,
       0,     0,  -149,   -35,   -35,     0,   -35,  -149,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   253,
       0,     0,  -129,  -129,  -129,     0,     0,  -129,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   253,
       0,     0,   -95,   -95,   -95,     0,     0,   -95,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   253,
       0,     0,   -62,   -62,   -62,     0,     0,   -62,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   253,
       0,     0,   -61,   -61,   -61,     0,     0,   -61,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   253,
       0,     0,   -63,   -63,   -63,     0,     0,   -63,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   253,
       0,     0,   -95,   -95,   -44,     0,     0,   -44,   -75,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   -75,   253,
       0,     0,   -75,   -75,   -75,     0,     0,   -75,   -77,   -77,
     256,   257,   258,   259,   260,   261,   262,   263,   -77,   253,
       0,     0,   -77,   -77,   -77,     0,     0,   -77,   -85,   -85,
     -85,   -85,   258,   -85,   260,   261,   262,   263,   -85,   253,
       0,     0,   -85,   -85,   -85,     0,     0,   -85,   -79,   -79,
     256,   -79,   258,   259,   260,   261,   262,   263,   -79,   253,
       0,     0,   -79,   -79,   -79,     0,     0,   -79,   -81,   -81,
     -81,   -81,   -81,   -81,   260,   261,   262,   263,   -81,   253,
       0,     0,   -81,   -81,   -81,     0,     0,   -81,   -83,   -83,
     256,   -83,   258,   -83,   260,   261,   262,   263,   -83,   253,
       0,     0,   -83,   -83,   -83,     0,     0,   -83,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   262,   263,   -89,   253,
       0,     0,   -89,   -89,   -89,     0,     0,   -89,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   263,   -87,   253,
       0,     0,   -87,   -87,   -87,     0,     0,   -87,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,  -149,
       0,     0,   -93,   -93,   -93,     0,     0,   -93,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   253,
       0,     0,   -91,   -91,   -91,     0,     0,   -91,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,   253,
       0,     0,  -149,  -149,  -149,     0,     0,  -149,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   253,
       0,     0,   -73,   -73,   -73,     0,     0,   -73,   -51,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   -51,   253,
       0,     0,   -51,   -51,   -51,     0,     0,   -51,   -52,   -52,
     256,   257,   258,   259,   260,   261,   262,   263,   -52,   253,
       0,     0,   -52,   -52,   -52,     0,     0,   -52,   -56,   -56,
     -56,   -56,   258,   -56,   260,   261,   262,   263,   -56,   253,
       0,     0,   -56,   -56,   -56,     0,     0,   -56,   -53,   -53,
     256,   -53,   258,   259,   260,   261,   262,   263,   -53,   253,
       0,     0,   -53,   -53,   -53,     0,     0,   -53,   -54,   -54,
     -54,   -54,   -54,   -54,   260,   261,   262,   263,   -54,   253,
       0,     0,   -54,   -54,   -54,     0,     0,   -54,   -55,   -55,
     256,   -55,   258,   -55,   260,   261,   262,   263,   -55,   253,
       0,     0,   -55,   -55,   -55,     0,     0,   -55,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   262,   263,   -58,   253,
       0,     0,   -58,   -58,   -58,     0,     0,   -58,   -50,   -50,
     -50,   -50,   -50,   -50,   260,   -50,   262,   263,   -50,   253,
       0,     0,   -50,   -50,   -50,     0,     0,   -50,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   263,   -57,   253,
       0,     0,   -57,   -57,   -57,     0,     0,   -57,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   253,
       0,     0,   -60,   -60,   -60,     0,     0,   -60,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   451,
       0,     0,   -59,   -59,   -59,     0,     0,   -59,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   399,
       0,     0,     0,   -44,   -44,     0,     0,   -44,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,     0,
       0,     0,     0,  -138,  -138,     0,     0,   452,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,     0,
    -117,  -117,    84,   510,   401,  -117,  -117,     0,    20,     0,
       0,     0,     0,     0,    85,    22,    23,    24,    25,    86,
      84,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,    85,    22,    23,    24,    25,    86,   147,     0,
       0,     0,     0,     0,    20,    87,     0,     0,     0,     0,
      85,    22,    23,    24,    25,    86,   336,     0,     0,     0,
       0,     0,    20,   144,     0,     0,     0,     0,    85,    22,
      23,    24,    25,    86,   339,     0,     0,     0,     0,     0,
      20,   148,     0,     0,     0,     0,    85,    22,    23,    24,
      25,    86
};

static const yytype_int16 yycheck[] =
{
      12,    79,    14,   114,    82,    17,    91,    88,    54,    55,
     110,    76,   161,    78,     1,   211,   112,     7,     1,    88,
      77,     1,   171,    69,     0,    71,    72,    73,    74,    75,
       1,     1,     9,    10,    11,     1,     7,   122,    21,     1,
      52,     7,    54,    55,     1,     7,     1,     1,     1,     1,
       7,    50,     7,     7,    50,    67,    68,    69,     1,    71,
      72,    73,    74,    75,    51,   161,   112,   152,   133,   265,
     155,    51,   268,   158,     1,   171,     1,     1,   135,    91,
     137,    52,    52,    50,    46,   142,    52,    44,    45,    46,
      52,    48,    44,     1,     1,    52,    63,    52,    52,    52,
     112,   113,   213,   181,     1,     1,     1,    50,   208,   194,
     122,     7,   208,     1,     1,     3,   212,    84,     1,    51,
      44,    88,    46,    50,    49,    49,    19,     1,     3,     1,
      25,     3,   228,    43,    21,    28,    54,    55,    45,    46,
     152,    49,    49,   155,     7,     1,   158,    44,    41,    46,
       1,    69,    49,    71,    72,    73,    74,    75,     1,   244,
      48,    49,   311,   274,   275,    48,   212,   179,     1,   265,
      44,   267,    46,    91,    49,    49,   188,    49,   190,   191,
     147,   193,   194,    51,    77,    21,   104,     1,     1,    45,
      46,    84,   110,    49,   112,    88,     1,    51,    49,    43,
     212,   168,     1,    46,   122,   123,    49,     1,    49,    45,
     310,    44,    45,    46,   310,   311,    49,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,   195,   325,
       1,    44,   244,    46,   152,    49,    49,   155,     1,    44,
     158,     1,   135,   161,   137,    44,    45,    46,     1,   142,
      49,   332,     1,   171,   147,    49,   341,   338,   339,   340,
       1,    44,   274,   332,     1,   277,   335,   336,   337,    67,
      68,     1,     1,    44,    45,    46,   194,     1,    49,   291,
       1,   293,    45,   379,   251,    45,    46,     1,    44,    49,
     208,    44,   210,    46,   212,    44,    45,    46,     1,    51,
      49,    44,   220,     1,    45,   223,   224,   225,   226,    46,
     228,     1,    49,   231,   232,   233,   234,    46,    48,     1,
      49,     1,    46,    49,    45,    49,   244,     7,    51,   341,
       1,    45,    46,    13,    14,    15,    16,    17,    18,     1,
       1,    44,    45,    46,    47,    48,    44,   265,    46,   267,
      48,   269,   270,     1,   272,    45,   274,   442,   276,   277,
       1,    49,    44,     1,    46,   332,    48,     1,   335,   336,
     337,    51,    22,    44,    91,    46,   472,    48,   443,    49,
       1,    43,   447,   448,    45,     1,   471,    48,   453,     1,
       1,     7,   310,   311,     1,    43,     7,    13,    14,    15,
      16,    17,    18,     1,    45,    46,   123,   325,    24,     7,
      44,    45,    46,    47,    48,    13,    14,    15,    16,    17,
      18,     1,    43,   341,   342,     1,   472,    43,    45,    45,
     442,    43,    48,   518,    50,   152,    43,     1,   155,   332,
      49,   158,     1,    67,    68,   338,   339,   340,   544,   342,
      48,    44,    48,    44,    49,    49,    45,     1,     1,   471,
     472,   379,    21,   381,    44,    45,    46,    47,    48,    45,
      46,    47,    48,   366,   392,   368,    44,   194,    51,    43,
       1,     1,   567,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,     1,
      43,    45,    46,   220,    48,     7,   518,   474,   401,   402,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,   442,   443,    46,   244,    48,    49,
       1,     1,    52,   545,     1,     1,     7,     7,     1,   551,
       7,     7,    44,     1,    46,   557,    48,    21,     1,    21,
       1,     1,    21,   471,   472,   567,     7,   274,     1,   276,
       1,     1,    21,     1,     7,   577,     7,     7,   486,     7,
      45,    56,   490,    24,    44,     1,    46,   495,    48,    21,
       1,   499,    45,    46,    76,     1,    78,    45,    46,   507,
      43,     1,    45,    46,    47,    45,    46,    47,     1,    91,
     518,    44,   520,    46,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,    45,   107,   108,   109,   511,    45,
      46,    47,     1,    44,   341,    46,   544,   545,     7,    45,
      46,    47,     1,   551,    44,    28,    46,    45,     7,   557,
       1,   133,    45,    46,     1,     1,     7,    45,    14,   567,
       7,     7,   104,    -1,   572,   573,   574,    -1,     1,   577,
     152,    14,    -1,   155,    -1,    44,   158,    46,   160,   161,
      -1,    -1,    -1,    -1,     1,    44,     1,    46,   170,   171,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       1,    44,   194,    46,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,    -1,    44,    37,    46,
      45,    46,    41,    42,    43,   442,    45,    46,    -1,    48,
      49,     1,     1,    52,    -1,   227,     1,    -1,    -1,     1,
      -1,    -1,    43,   235,     1,   237,    -1,   239,     1,   241,
      -1,     1,   244,    -1,   471,     1,    -1,    -1,    -1,     1,
      -1,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,     1,    44,    44,    46,    46,    -1,    44,
      -1,    46,   274,    45,    46,   277,     1,    44,   280,    46,
      -1,    44,    -1,    46,    44,    -1,    46,    -1,    44,     1,
      46,   518,    44,   520,    46,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   307,    44,     1,    46,   311,
      -1,    -1,    -1,     1,    -1,   317,    -1,    -1,    -1,     7,
      45,    46,     1,    -1,   326,    13,    14,    15,    16,    17,
      18,    -1,    44,    -1,    46,     1,    24,    -1,    -1,   341,
     567,   343,    -1,    -1,    -1,   572,   573,   574,    -1,    -1,
      44,    -1,    46,   355,    -1,    43,   358,    45,   360,    -1,
      48,    -1,    50,    51,    -1,    -1,    45,    46,    -1,    -1,
     372,    -1,    -1,   375,    -1,   377,     1,    -1,   380,    45,
      46,    -1,     7,   385,    -1,    -1,   388,    -1,    13,    14,
      15,    16,    17,    18,   547,   548,   549,   550,   551,   552,
      -1,    -1,    -1,   405,    -1,   407,    76,   409,    78,   411,
      -1,   413,    -1,   415,    -1,   417,    -1,   419,    -1,   421,
      45,   423,    -1,   425,    -1,    -1,    -1,    -1,   430,    -1,
     432,    -1,   434,    -1,    -1,   437,    -1,   107,   108,   109,
     442,   443,     1,     1,    -1,   447,   448,    -1,     7,     7,
      -1,   453,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,   133,    -1,     1,    -1,    -1,    -1,   471,
      -1,   473,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,   513,    48,    49,   516,    -1,   518,   519,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,    -1,    -1,
      -1,   543,    -1,   545,    -1,    -1,     1,    -1,    -1,   551,
      -1,    -1,     7,    -1,    -1,   557,    -1,   559,    13,    14,
      15,    16,    17,    18,     1,   567,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,   577,    13,    14,    15,    16,
      17,    18,    -1,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,     1,    -1,    26,    27,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,   447,   448,    -1,
      -1,    -1,     1,   453,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    46,
      47,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    45,    -1,
      -1,    48,    49,    -1,    51,    52,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      45,    -1,    -1,    48,    49,    -1,    51,    52,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      43,    -1,    45,    -1,    -1,    48,    49,    -1,    51,    52,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    43,    -1,    45,    -1,    -1,    48,    49,    -1,
      51,    52,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,    42,    43,    -1,    45,    -1,    -1,    48,
      49,    -1,    51,    52,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    45,    -1,
      -1,    48,    49,    -1,    51,    52,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      45,    -1,    -1,    48,    49,    -1,    51,    52,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      43,    -1,    45,    -1,    -1,    48,    49,    -1,    51,    52,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    43,    -1,    45,    -1,    -1,    48,    49,    -1,
      51,    52,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,    42,    43,    -1,    45,    -1,    -1,    48,
      49,    -1,     1,    52,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,    42,    43,    -1,    45,    -1,    -1,    48,
      -1,    -1,    51,    52,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    45,    -1,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    45,    -1,
      -1,    48,    49,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    45,    -1,
      -1,    48,    -1,    -1,    51,    52,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      45,    -1,    -1,    48,    49,    -1,     1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      45,    -1,    -1,    48,    49,    -1,     1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      45,    -1,    -1,    48,    -1,    -1,     1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      45,    -1,    -1,    48,    -1,    -1,     1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      45,    -1,    -1,    48,    -1,    -1,     1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      45,    -1,    -1,    48,    -1,    -1,     1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      45,    46,    -1,    48,    -1,    -1,    -1,    52,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    45,    46,
      -1,    48,    -1,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    45,    -1,
      -1,    48,    -1,    -1,    -1,    52,    -1,    -1,    37,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    -1,     1,    52,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    37,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
       1,    52,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    37,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    52,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,     1,    52,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     1,    -1,    21,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    37,    -1,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    -1,     1,    52,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     1,    -1,    21,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    37,    -1,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    -1,     1,    52,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    37,    -1,    -1,    -1,    41,    42,
      43,    -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    52,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      45,    -1,    -1,    48,    -1,    -1,     1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    52,    -1,    -1,    37,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    -1,     1,    52,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    37,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    52,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    -1,
       1,    52,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    37,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    52,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    -1,     1,    52,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    37,    -1,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    -1,     1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    52,    -1,    -1,    37,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    -1,     1,    52,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    37,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    52,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    -1,
       1,    52,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    37,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    52,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    -1,     1,    52,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    37,    -1,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    -1,     1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    -1,     1,    52,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    52,    -1,    -1,    37,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    -1,     1,    52,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    37,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    52,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    -1,
       1,    52,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    37,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    52,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    -1,     1,    52,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    37,    -1,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    -1,     1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     1,    -1,    -1,    -1,    -1,     1,
       7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    37,    -1,    -1,    -1,    41,    42,    43,     1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      42,    43,    44,    45,    46,    47,    48,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      42,    43,    44,    45,    46,    47,    48,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    48,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,     1,    45,    46,    47,    48,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
       1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,     1,    -1,
      -1,    -1,    -1,    -1,     7,    44,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,     1,    -1,    -1,    -1,
      -1,    -1,     7,    44,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,     1,    -1,    -1,    -1,    -1,    -1,
       7,    44,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    25,    56,     7,     1,     7,     0,    50,    50,
       1,    50,     1,    57,    58,    57,    57,     1,    57,     1,
       7,    13,    14,    15,    16,    17,    18,    59,    60,    61,
      76,    77,    78,    81,    82,    85,    86,    87,   103,   104,
      51,     1,    59,   103,    51,    51,    51,     1,    51,     1,
       7,    24,    43,    45,    48,    50,    75,    83,    84,     1,
      24,     7,     1,     7,    83,     1,    45,     1,    43,     1,
      45,    48,     1,    48,     1,    50,     1,    46,    47,    62,
      64,     1,    62,    43,     1,    13,    18,    44,    60,    79,
      88,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    19,    20,    23,    26,    27,    37,    41,    42,
      43,    45,    48,    52,    60,    66,    67,    68,    69,    71,
      72,    90,    91,    92,    93,    94,    95,    97,    98,    99,
     101,   102,    90,     1,    64,     1,    45,    46,    43,     1,
      43,    45,     1,    45,    44,    79,    88,     1,    44,    79,
      88,    90,     1,    90,    90,     1,    90,    90,     1,    90,
       1,    48,    60,    63,    65,    66,    67,     1,     7,    84,
       1,    48,    65,     1,    48,    63,     1,    44,     1,    46,
      52,    62,    75,    80,    89,     1,    80,    89,     1,    44,
      46,     1,    44,    46,     1,     7,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    42,    43,    45,
      46,    47,    48,    60,    66,    68,    70,    74,    75,    90,
      92,    93,   100,     1,    43,     1,    43,     1,    48,    68,
     100,     1,    43,     1,    43,     1,    66,     1,    66,     1,
      66,     1,    61,    68,     1,    68,    70,    90,     1,    60,
       1,     7,    74,     1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     1,    42,    43,    47,    48,
       1,    45,    46,    49,     1,    60,    92,     1,    93,    51,
       1,    84,     1,    84,    44,    44,     1,    44,    44,    44,
      44,     1,    44,     1,    44,    49,    49,     1,    49,    49,
      49,     1,    49,    51,    51,     1,    51,     1,     3,     7,
      43,    48,    49,    65,    66,    68,    73,     1,     3,    49,
      66,    68,    73,     1,     7,     1,     1,     3,     1,     3,
       1,     7,    60,     1,     7,    60,     1,    60,    60,     1,
      60,     1,    46,     1,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,     1,    68,    70,     1,    68,
       1,    69,    68,    74,    44,    49,     1,    45,    46,    49,
      45,    68,     1,    68,    68,     1,    68,     1,    45,    48,
       1,     1,     1,    45,    68,     1,    68,    68,     1,    68,
      44,    44,     1,    44,    49,     1,    49,     1,    49,     1,
      45,    46,     1,    45,    66,     1,    66,     1,    66,     1,
      66,     1,    66,     1,    66,     1,    66,     1,    66,     1,
      66,     1,    66,     1,    66,     1,    66,    68,    69,    70,
       1,    70,     1,    69,     1,    68,    68,     1,    68,    74,
       1,    74,     1,    46,    49,    68,    68,     1,    46,    49,
      49,     1,    49,     1,    49,    49,    49,    80,    89,     1,
      52,    80,    80,     1,    80,     1,    52,    89,    89,     1,
      89,     1,    48,     1,     7,    75,    44,    44,    49,    45,
       1,    75,     1,    75,    44,    44,     1,    44,    44,    44,
       1,    44,    49,    44,    44,     1,    44,    44,    44,     1,
      44,    49,    44,    44,     1,    44,    49,     1,    49,    45,
      45,     1,    45,     1,    65,    65,     1,    65,     1,     1,
      21,    45,    21,    21,    21,     1,    21,    21,    21,    21,
       1,    21,    45,    45,    45,     1,    45,    45,    45,    45,
       1,    45,    49,     1,    48,     1,    93,    93,    93,    93,
      93,     1,    93,    93,    93,    93,    93,     1,    93,     1,
       1,    22,    96,    96,    96,    96,    96,     1,    96,     1,
      96,    49,    21,     1,    21,    93,    93,     1,    93
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    56,    56,    56,    56,    57,    57,
      57,    58,    58,    58,    58,    58,    59,    59,    59,    60,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    62,    63,    63,    63,    63,    63,    63,    63,    64,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    69,    69,    69,    70,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    72,    72,    72,
      72,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    74,    75,    75,    75,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    77,    78,    78,    78,    78,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    81,    81,    81,    81,    82,    82,    82,    82,    83,
      83,    83,    83,    83,    83,    84,    84,    84,    85,    85,
      85,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    87,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    89,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    98,    98,    98,    98,    99,
      99,    99,    99,    99,    99,   100,   100,   100,   101,   101,
     101,   101,   102,   102,   102,   102,   103,   103,   103,   103,
     103,   104,   104,   104,   104,   104
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     5,     5,     5,     5,     5,     2,     2,
       2,     2,     0,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     3,     2,     3,     3,     3,     2,     2,     2,
       0,     1,     2,     2,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     1,     4,     1,     3,     3,
       1,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     1,     4,     4,     4,     4,     3,     3,     3,     2,
       2,     2,     4,     1,     2,     1,     2,     2,     4,     4,
       4,     4,     3,     1,     1,     3,     3,     3,     3,     1,
       1,     3,     3,     3,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     1,     1,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     4,     4,     4,     4,     2,     2,     2,     2,
       4,     2,     4,     4,     4,     4,     2,     2,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     3,     3,     3,     2,     2,     2,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     2,     4,     4,     4,
       4,     2,     2,     1,     2,     1,     2,     2,     2,     1,
       1,     0,     2,     2,     1,     4,     3,     4,     4,     4,
       4,     3,     3,     3,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     7,     7,     7,     7,     7,     7,     7,     7,     3,
       3,     3,     3,     0,     1,     0,     6,     6,     6,     6,
       6,     6,     6,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     1,     0,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4
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
        case 3:
#line 157 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Class Declaration ['Class' Error]"); yyerrok; }
#line 3031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 158 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Class Declaration [Identifier Error]"); yyerrok; }
#line 3037 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 159 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Class Declaration [Left Bracket Error]"); yyerrok; }
#line 3043 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 160 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Class Declaration [Headfunc Error]"); yyerrok; }
#line 3049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 161 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Class Declaration [Right Bracket Error]"); yyerrok; }
#line 3055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 163 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Headfunc [HeadfuncFunction Error]"); yyerrok; }
#line 3061 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 164 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Headfunc [GlobalDeclarations Error]"); yyerrok; }
#line 3067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 167 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in GlobalDeclarations [empty Error]"); yyerrok; }
#line 3073 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 168 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in GlobalDeclarations [GlobalDeclarations Error]"); yyerrok; }
#line 3079 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 169 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in GlobalDeclarations [GlobalDeclaration Error]"); yyerrok; }
#line 3085 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 172 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in GlobalDeclaration [GlobalVariableDeclaration/FunctionDeclaration Error]"); yyerrok; }
#line 3091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 175 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableTypename [StandardVariableType/Identifier Error]"); yyerrok; }
#line 3097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 182 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in StandardVariableType [StandardVariableType Error]"); yyerrok; }
#line 3103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 184 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Dimensions [Dimensions Error]"); yyerrok; }
#line 3109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 185 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Dimensions [Dimension Error]"); yyerrok; }
#line 3115 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 188 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Dimension [Left Brace Error]"); yyerrok; }
#line 3121 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 189 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Dimension [IntegerConst Error]"); yyerrok; }
#line 3127 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 190 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Dimension [Right Brace Error]"); yyerrok; }
#line 3133 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 191 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Dimension [Left Brace Error]"); yyerrok; }
#line 3139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 192 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Dimension [Right Brace Error]"); yyerrok; }
#line 3145 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 195 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Initializer [empty Error]"); yyerrok; }
#line 3151 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 196 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Initializer [Equal Error]"); yyerrok; }
#line 3157 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 197 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Initializer [InitializerValue Error]"); yyerrok; }
#line 3163 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 200 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in InitializerValue [Expression Error]"); yyerrok; }
#line 3169 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 201 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in InitializerValue [Left Brace Error]"); yyerrok; }
#line 3175 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 202 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in InitializerValue [InitializerValues Error]"); yyerrok; }
#line 3181 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 203 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in InitializerValue [Right Brace Error]"); yyerrok; }
#line 3187 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 227 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3193 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 228 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Logic Gate/GreatLess/EquNot/Power/ModMulDi Error]"); yyerrok; }
#line 3199 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 229 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3205 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 230 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 231 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 232 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3223 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 233 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3229 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 234 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3235 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 235 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3241 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 236 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 237 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3253 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 238 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3259 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 239 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3265 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 240 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3271 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 241 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3277 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 242 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3283 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 243 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3289 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 244 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3295 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 245 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3301 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 246 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3307 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 247 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3313 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 248 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3319 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 249 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3325 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 250 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression ['Not' Error]"); yyerrok; }
#line 3331 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 251 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3337 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 252 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Increase/Decrease Error]"); yyerrok; }
#line 3343 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 253 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3349 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 254 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Increase/Decrease Error]"); yyerrok; }
#line 3355 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 255 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Variable Error]"); yyerrok; }
#line 3361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 256 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Variable/VariableTypeConst/ExpressionList Error]"); yyerrok; }
#line 3367 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 257 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Variable Error]"); yyerrok; }
#line 3373 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 258 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Left Parenthesis Error]"); yyerrok; }
#line 3379 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 259 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [ListOfExpression Error]"); yyerrok; }
#line 3385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 260 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Right Parenthesis Error]"); yyerrok; }
#line 3391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 261 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Left Parenthesis Error]"); yyerrok; }
#line 3397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 262 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [GeneralExpression/StandardVariableType Error]"); yyerrok; }
#line 3403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 263 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Right Parenthesis Error]"); yyerrok; }
#line 3409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 264 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Add/Substract Error]"); yyerrok; }
#line 3415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 265 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
#line 3421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 266 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression [Negative Error]"); yyerrok; }
#line 3427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 270 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Variable [Identifier Error]"); yyerrok; }
#line 3433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 271 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Variable [VariableTypename Error]"); yyerrok; }
#line 3439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 272 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Variable [Identifier Error]"); yyerrok; }
#line 3445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 273 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Variable [Variable Error]"); yyerrok; }
#line 3451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 274 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Variable [Left Brace Error]"); yyerrok; }
#line 3457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 275 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Variable [GeneralExpression Error]"); yyerrok; }
#line 3463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 276 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Variable [Right Brace Error]"); yyerrok; }
#line 3469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 279 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in GeneralExpression [Assignment Error]"); yyerrok; }
#line 3475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 280 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in GeneralExpression [GeneralExpression Error]"); yyerrok; }
#line 3481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 281 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in GeneralExpression [Comma Error]"); yyerrok; }
#line 3487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 282 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in GeneralExpression [GeneralExpression Error]"); yyerrok; }
#line 3493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 285 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Assignment [Expression Error]"); yyerrok; }
#line 3499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 286 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Assignment [Variable Error]"); yyerrok; }
#line 3505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 287 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Assignment [Equal Error]"); yyerrok; }
#line 3511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 288 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Assignment [Assignment Error]"); yyerrok; }
#line 3517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 291 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ListOfExpression [GeneralExpression/empty Error]"); yyerrok; }
#line 3523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 301 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableTypeConst [TypeConst Value Error]"); yyerrok; }
#line 3529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 303 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ExpressionList [Left Brace Error]"); yyerrok; }
#line 3535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 304 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ExpressionList [ListOfExpression Error]"); yyerrok; }
#line 3541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 305 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ExpressionList [Right Brace Error]"); yyerrok; }
#line 3547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 308 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in InitializerValues [InitializerValue Error]"); yyerrok; }
#line 3553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 309 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in InitializerValues"); yyerrok; }
#line 3559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 310 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in InitializerValues [Comma Error]"); yyerrok; }
#line 3565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 311 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in InitializerValues [InitializerValue Error]"); yyerrok; }
#line 3571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 314 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitions"); yyerrok; }
#line 3577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 315 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitions [Comma Error]"); yyerrok; }
#line 3583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 316 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitions [VariableDefinition Error]"); yyerrok; }
#line 3589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 317 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitions [VariableDefinition Error]"); yyerrok; }
#line 3595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 319 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinition [Identifier Error]"); yyerrok; }
#line 3601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 320 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinition [Dimensions Error]"); yyerrok; }
#line 3607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 323 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ShortFunctionDeclaration"); yyerrok; }
#line 3613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 324 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ShortFunctionDeclaration [Semicolon Error]"); yyerrok; }
#line 3619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 325 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ShortFunctionDeclaration [Semicolon Error]"); yyerrok; }
#line 3625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 327 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ShortFunctionHeaderParameters [StartFunctionHeader Error]"); yyerrok; }
#line 3631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 328 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ShortFunctionHeaderParameters [Left Parenthesis Error]"); yyerrok; }
#line 3637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 329 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ShortFunctionHeaderParameters [ParameterTypes Error]"); yyerrok; }
#line 3643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 330 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ShortFunctionHeaderParameters [Right Parenthesis Error]"); yyerrok; }
#line 3649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 333 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in StartFunctionHeader [VariableTypename Error]"); yyerrok; }
#line 3655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 334 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in StartFunctionHeader [Identifier Error]"); yyerrok; }
#line 3661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 337 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ParameterTypes [ParameterTypes Error]"); yyerrok; }
#line 3667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 338 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ParameterTypes [Comma Error]"); yyerrok; }
#line 3673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 339 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ParameterTypes [VariableTypename Error]"); yyerrok; }
#line 3679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 340 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ParameterTypes [ListOfDimensionsPass Error]"); yyerrok; }
#line 3685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 341 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ParameterTypes [VariableTypename Error]"); yyerrok; }
#line 3691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 342 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ParameterTypes [ListOfDimensionsPass Error]"); yyerrok; }
#line 3697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 345 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ListOfDimensionsPass [Ampersand/Dimensions Error]"); yyerrok; }
#line 3703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 347 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FunctionHeaderWithNoParameters [StartFunctionHeader Error]"); yyerrok; }
#line 3709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 348 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FunctionHeaderWithNoParameters [Left Parenthesis Error]"); yyerrok; }
#line 3715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 349 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FunctionHeaderWithNoParameters [Right Parenthesis Error]"); yyerrok; }
#line 3721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 351 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in GlobalVariableDeclaration [VariableTypename Error]"); yyerrok; }
#line 3727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 352 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in GlobalVariableDeclaration [VariableDefinitionInitializers Error]"); yyerrok; }
#line 3733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 353 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in GlobalVariableDeclaration [Semicolon Error]"); yyerrok; }
#line 3739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 356 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitionInitializers [VariableDefinitionInitializer Error]"); yyerrok; }
#line 3745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 357 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitionInitializers"); yyerrok; }
#line 3751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 358 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitionInitializers [Comma Error]"); yyerrok; }
#line 3757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 359 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitionInitializers [VariableDefinitionInitializer Error]"); yyerrok; }
#line 3763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 361 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitionInitializer [VariableDefinition Error]"); yyerrok; }
#line 3769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 362 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitionInitializer [Initializer Error]"); yyerrok; }
#line 3775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 365 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FunctionDeclaration [ShortFunctionDeclaration/FullFunctionDeclaration Error]"); yyerrok; }
#line 3781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 368 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FullFunctionDeclaration [FunctionHeader/FunctionHeaderWithNoParameters Error]"); yyerrok; }
#line 3787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 369 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FullFunctionDeclaration [Left Brace Error]"); yyerrok; }
#line 3793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 370 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FullFunctionDeclaration [StatementsDeclaration Error]"); yyerrok; }
#line 3799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 371 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FullFunctionDeclaration [Right Brace Error]"); yyerrok; }
#line 3805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 372 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FullFunctionDeclaration [Left Brace Error]"); yyerrok; }
#line 3811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 373 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FullFunctionDeclaration [StatementsDeclaration Error]"); yyerrok; }
#line 3817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 374 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FullFunctionDeclaration [Right Brace Error]"); yyerrok; }
#line 3823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 376 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FunctionHeader [StartFunctionHeader Error]"); yyerrok; }
#line 3829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 377 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FunctionHeader [Left Parenthesis Error]"); yyerrok; }
#line 3835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 378 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FunctionHeader [ListOfParameters Error]"); yyerrok; }
#line 3841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 379 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in FunctionHeader [Right Parenthesis Error]"); yyerrok; }
#line 3847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 382 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ListOfParameters"); yyerrok; }
#line 3853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 383 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ListOfParameters [Comma Error]"); yyerrok; }
#line 3859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 384 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ListOfParameters [VariableTypename Error]"); yyerrok; }
#line 3865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 385 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ListOfParameters [VariableDefinitionPass Error]"); yyerrok; }
#line 3871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 386 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ListOfParameters [VariableTypename Error]"); yyerrok; }
#line 3877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 387 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ListOfParameters [VariableDefinitionPass Error]"); yyerrok; }
#line 3883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 390 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitionPass [VariableDefinition Error]"); yyerrok; }
#line 3889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 391 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitionPass [Ampersand Error]"); yyerrok; }
#line 3895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 392 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in VariableDefinitionPass [Identifier Error]"); yyerrok; }
#line 3901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 397 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in StatementsDeclaration [Declarations Error]"); yyerrok; }
#line 3907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 398 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in StatementsDeclaration [Statements Error]"); yyerrok; }
#line 3913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 399 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in StatementsDeclaration"); yyerrok; }
#line 3919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 402 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Declarations [Declarations Error]"); yyerrok; }
#line 3925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 403 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Declarations [VariableTypename Error]"); yyerrok; }
#line 3931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 404 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Declarations [VariableDefinitions Error]"); yyerrok; }
#line 3937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 405 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Declarations [Semicolon Error]"); yyerrok; }
#line 3943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 406 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Declarations [VariableTypename Error]"); yyerrok; }
#line 3949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 407 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Declarations [VariableDefinitions Error]"); yyerrok; }
#line 3955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 408 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Declarations [Semicolon Error]"); yyerrok; }
#line 3961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 411 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Statements Declaration [Statements Error]"); yyerrok; }
#line 3967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 412 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Statements Declaration [Statement Error]"); yyerrok; }
#line 3973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 413 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Statements Declaration [Statement Error]"); yyerrok; }
#line 3979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 422 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Statement Declaration"); yyerrok; }
#line 3985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 424 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression Statement Declaration [GeneralExpression Error]"); yyerrok; }
#line 3991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 425 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in Expression Statement Declaration [Semicolon Error]"); yyerrok; }
#line 3997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 427 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in WhetherStatement Declaration ['Whether' Error]"); yyerrok; }
#line 4003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 428 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in WhetherStatement Declaration [Left Parenthesis Error]"); yyerrok; }
#line 4009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 429 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in WhetherStatement Declaration [GeneralExpression Error]"); yyerrok; }
#line 4015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 430 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in WhetherStatement Declaration [Right Parenthesis Error"); yyerrok; }
#line 4021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 431 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in WhetherStatement Declaration ['Do' Error]"); yyerrok; }
#line 4027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 432 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in WhetherStatement Declaration [Statement Error]"); yyerrok; }
#line 4033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 433 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in WhetherStatement Declaration [Otherwise Statement Error]"); yyerrok; }
#line 4039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 435 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in OtherwiseStatement Declaration ['Otherwise' Error]"); yyerrok; }
#line 4045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 436 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in OtherwiseStatement Declaration ['Do' Error]"); yyerrok; }
#line 4051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 437 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in OtherwiseStatement Declaration [Statement Error]"); yyerrok; }
#line 4057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 439 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in OtherwiseStatement Declaration [Otherwise Dangling Error]"); yyerrok; }
#line 4063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 440 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in OtherwiseStatement Declaration [Otherwise Dangling Error]"); yyerrok; }
#line 4069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 442 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in DuringStatement Declaration ['During' Error]"); yyerrok; }
#line 4075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 443 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in DuringStatement Declaration [Left Parenthesis Error]"); yyerrok; }
#line 4081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 444 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in DuringStatement Declaration [GeneralExpression Error]"); yyerrok; }
#line 4087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 445 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in DuringStatement Declaration [Right Parenthesis Error]"); yyerrok; }
#line 4093 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 446 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in DuringStatement Declaration ['Do' Error]"); yyerrok; }
#line 4099 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 447 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in DuringStatement Declaration [Statement Error]"); yyerrok; }
#line 4105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 449 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in WriteStatement Declaration ['Write' Error]"); yyerrok; }
#line 4111 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 450 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in WriteStatement Declaration [Left Parenthesis Error]"); yyerrok; }
#line 4117 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 451 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in WriteStatement Declaration [GeneralExpression Error]"); yyerrok; }
#line 4123 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 452 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in WriteStatement Declaration [Right Parenthesis Error]"); yyerrok; }
#line 4129 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 453 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in WriteStatement Declaration [Semicolon Error]"); yyerrok; }
#line 4135 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 455 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ReadStatement Declaration ['Read' Error]"); yyerrok; }
#line 4141 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 456 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ReadStatement Declaration [Left Parenthesis Error]"); yyerrok; }
#line 4147 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 457 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ReadStatement Declaration [GeneralExpression Error]"); yyerrok; }
#line 4153 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 458 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ReadStatement Declaration [Right Parenthesis Error]"); yyerrok; }
#line 4159 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 459 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ReadStatement Declaration [Semicolon Error]"); yyerrok; }
#line 4165 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 462 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ExpressionsOptimizer Declaration"); yyerrok; }
#line 4171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 464 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ReturnStatement Declaration ['Return' Error]"); yyerrok; }
#line 4177 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 465 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ReturnStatement Declaration [Error in Expression after Return]"); yyerrok; }
#line 4183 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 466 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in ReturnStatement Declaration [Semicolon Error]"); yyerrok; }
#line 4189 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 468 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in CompStatement Declaration [Left Brace Error]"); yyerrok; }
#line 4195 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 469 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in CompStatement Declaration [Declerations Statements Error]"); yyerrok; }
#line 4201 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 470 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in CompStatement Declaration [Right Brace Error]"); yyerrok; }
#line 4207 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 472 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in HeadfuncFunction Declaration"); yyerrok; }
#line 4213 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 473 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in HeadfuncFunction Declaration [Left Bracket Error]"); yyerrok; }
#line 4219 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 474 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in HeadfuncFunction Declaration [Declerations Statements Error]"); yyerrok; }
#line 4225 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 475 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in HeadfuncFunction Declaration [Right Bracket Error]"); yyerrok; }
#line 4231 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 477 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in HeadfuncHeader Declaration [Headfunc Integer Declaration Error]"); yyerrok; }
#line 4237 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 478 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in HeadfuncHeader Declaration ['Headfunc' Function Name Error]"); yyerrok; }
#line 4243 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 479 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in HeadfuncHeader Declaration [Left Parenthesis Error]"); yyerrok; }
#line 4249 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 480 "parser.y" /* yacc.c:1646  */
    { yyerror("Syntax Error in HeadfuncHeader Declaration [Right Parenthesis Error]"); yyerrok; }
#line 4255 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 4259 "parser.tab.c" /* yacc.c:1646  */
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
#line 481 "parser.y" /* yacc.c:1906  */


int main(int argc, char *argv[])
{
    int token; 
    if(argc > 1)
    {
        yyin = fopen(argv[1],"r");
        if(yyin == NULL)
        {
                perror ("Can't Open The File\n");
                return -1;
        }
    }     

yyparse();
fclose(yyin);

return 0;
}
