/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "./Project/bison.y"

#include <stdio.h>
#include <string.h>
#include <stdio.h>
void yyerror(char *); 
extern FILE *yyin;								
extern FILE *yyout;

char tmplist_expression[100];
char list_expression[100];




/* Line 371 of yacc.c  */
#line 83 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FALSE = 258,
     TRUE = 259,
     AND = 260,
     ASSERT = 261,
     ASYNC = 262,
     AWAIT = 263,
     BREAK = 264,
     CLASS = 265,
     CONTINUE = 266,
     DEF = 267,
     DEL = 268,
     ELIF = 269,
     ELSE = 270,
     EXCEPT = 271,
     FINALY = 272,
     FOR = 273,
     FROM = 274,
     GLOBAL = 275,
     IF = 276,
     IMPORT = 277,
     IN = 278,
     IS = 279,
     LAMBDA = 280,
     NONLOCAL = 281,
     NOT = 282,
     NONE = 283,
     OR = 284,
     PASS = 285,
     RAISE = 286,
     RETURN = 287,
     TRY = 288,
     WHILE = 289,
     WITH = 290,
     YIELD = 291,
     LBRACKET = 292,
     RBRACKET = 293,
     LBRACE = 294,
     RBRACE = 295,
     SEMICOLON = 296,
     LOWERCASE = 297,
     NUM = 298,
     LETTER = 299,
     KATWPAVLA = 300,
     QUOTE = 301,
     DOUBLEQUOTE = 302,
     DIGIT = 303,
     r = 304,
     u = 305,
     R = 306,
     U = 307,
     f = 308,
     F = 309,
     fr = 310,
     Fr = 311,
     fR = 312,
     FR = 313,
     rf = 314,
     Rf = 315,
     rF = 316,
     RF = 317,
     SHORTSTRING = 318,
     LONGSTRING = 319,
     IDENTIFIER = 320,
     INTEGER = 321,
     FLOATNUMBER = 322,
     IMAGINUMBER = 323,
     LEFTBRACKET = 324,
     RIGHTBRACKET = 325,
     LSQUAREBRACKET = 326,
     RSQUAREBRACKET = 327,
     CURLLEFT = 328,
     CURLRIGHT = 329,
     PLUS = 330,
     MUL = 331,
     DIVISION = 332,
     MINUS = 333,
     ISON = 334,
     KOMMA = 335,
     ANWKATWTELEIA = 336,
     PRINT = 337,
     SINISON = 338,
     PLINISON = 339,
     TELEIA = 340,
     AS = 341,
     INIT = 342,
     MEGALUTERO = 343,
     MIKROTERO = 344,
     DIAFORO = 345
   };
#endif
/* Tokens.  */
#define FALSE 258
#define TRUE 259
#define AND 260
#define ASSERT 261
#define ASYNC 262
#define AWAIT 263
#define BREAK 264
#define CLASS 265
#define CONTINUE 266
#define DEF 267
#define DEL 268
#define ELIF 269
#define ELSE 270
#define EXCEPT 271
#define FINALY 272
#define FOR 273
#define FROM 274
#define GLOBAL 275
#define IF 276
#define IMPORT 277
#define IN 278
#define IS 279
#define LAMBDA 280
#define NONLOCAL 281
#define NOT 282
#define NONE 283
#define OR 284
#define PASS 285
#define RAISE 286
#define RETURN 287
#define TRY 288
#define WHILE 289
#define WITH 290
#define YIELD 291
#define LBRACKET 292
#define RBRACKET 293
#define LBRACE 294
#define RBRACE 295
#define SEMICOLON 296
#define LOWERCASE 297
#define NUM 298
#define LETTER 299
#define KATWPAVLA 300
#define QUOTE 301
#define DOUBLEQUOTE 302
#define DIGIT 303
#define r 304
#define u 305
#define R 306
#define U 307
#define f 308
#define F 309
#define fr 310
#define Fr 311
#define fR 312
#define FR 313
#define rf 314
#define Rf 315
#define rF 316
#define RF 317
#define SHORTSTRING 318
#define LONGSTRING 319
#define IDENTIFIER 320
#define INTEGER 321
#define FLOATNUMBER 322
#define IMAGINUMBER 323
#define LEFTBRACKET 324
#define RIGHTBRACKET 325
#define LSQUAREBRACKET 326
#define RSQUAREBRACKET 327
#define CURLLEFT 328
#define CURLRIGHT 329
#define PLUS 330
#define MUL 331
#define DIVISION 332
#define MINUS 333
#define ISON 334
#define KOMMA 335
#define ANWKATWTELEIA 336
#define PRINT 337
#define SINISON 338
#define PLINISON 339
#define TELEIA 340
#define AS 341
#define INIT 342
#define MEGALUTERO 343
#define MIKROTERO 344
#define DIAFORO 345



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 21 "./Project/bison.y"

    char    name;
  


/* Line 387 of yacc.c  */
#line 312 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;
extern YYLTYPE yylloc;
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 353 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  77
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   324

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNRULES -- Number of states.  */
#define YYNSTATES  319

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    34,    37,    40,    43,
      46,    49,    52,    55,    58,    61,    64,    67,    70,    73,
      76,    79,    82,    85,    88,    91,    94,    97,   100,   103,
     106,   109,   112,   115,   117,   119,   121,   123,   126,   130,
     134,   137,   141,   145,   148,   152,   156,   161,   167,   171,
     177,   187,   199,   211,   223,   235,   237,   240,   242,   244,
     246,   248,   250,   252,   254,   256,   258,   260,   262,   264,
     271,   274,   276,   279,   283,   287,   291,   295,   297,   302,
     307,   309,   312,   317,   322,   325,   328,   332,   337,   347,
     349,   351,   354,   357,   362,   367,   369,   373,   377,   380,
     384,   387,   391,   394,   398,   400,   403,   410,   423,   426,
     428,   430,   432,   439,   446,   448,   450,   453,   456,   459,
     467,   474,   483,   493,   503,   514,   520,   524,   526,   529,
     536,   544,   552,   557,   562,   568,   574,   580,   587,   594,
     602
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      92,     0,    -1,    -1,    93,    92,    -1,   134,    92,    -1,
     133,    92,    -1,    65,    -1,    94,    -1,    98,    -1,    95,
      -1,    66,    -1,    67,    -1,    68,    -1,    96,    -1,    97,
      -1,    49,    63,    -1,    50,    63,    -1,    51,    63,    -1,
      52,    63,    -1,    53,    63,    -1,    54,    63,    -1,    55,
      63,    -1,    56,    63,    -1,    57,    63,    -1,    58,    63,
      -1,    59,    63,    -1,    61,    63,    -1,    60,    63,    -1,
      62,    63,    -1,    49,    64,    -1,    50,    64,    -1,    51,
      64,    -1,    52,    64,    -1,    53,    64,    -1,    54,    64,
      -1,    55,    64,    -1,    56,    64,    -1,    57,    64,    -1,
      58,    64,    -1,    59,    64,    -1,    61,    64,    -1,    60,
      64,    -1,    62,    64,    -1,    99,    -1,   100,    -1,   101,
      -1,   102,    -1,    69,    70,    -1,    69,    65,    70,    -1,
      69,   104,    70,    -1,    71,    72,    -1,    71,    65,    72,
      -1,    71,   104,    72,    -1,    73,    74,    -1,    73,    65,
      74,    -1,    73,   104,    74,    -1,    65,    79,    73,    74,
      -1,    65,    79,    73,   103,    74,    -1,    65,    81,    65,
      -1,   103,    80,    65,    81,    65,    -1,    65,    18,    65,
      23,    65,    18,    65,    23,    65,    -1,    65,    75,    65,
      18,    65,    23,    65,    18,    65,    23,    65,    -1,    65,
      78,    65,    18,    65,    23,    65,    18,    65,    23,    65,
      -1,    65,    76,    65,    18,    65,    23,    65,    18,    65,
      23,    65,    -1,    65,    77,    65,    18,    65,    23,    65,
      18,    65,    23,    65,    -1,   106,    -1,   105,   106,    -1,
     111,    -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,
     116,    -1,   117,    -1,   118,    -1,   120,    -1,   122,    -1,
     107,    -1,   109,    -1,    82,    69,    47,   108,    47,    70,
      -1,    82,    67,    -1,    65,    -1,   108,    65,    -1,    65,
      79,    67,    -1,    65,    79,    68,    -1,    65,    79,    66,
      -1,    65,    79,    65,    -1,   110,    -1,    65,    75,    79,
      65,    -1,    65,    78,    79,    65,    -1,    30,    -1,    13,
      65,    -1,    13,    69,    65,    70,    -1,    13,    71,    65,
      72,    -1,    32,    65,    -1,    36,    65,    -1,    36,    19,
      65,    -1,    31,    65,    19,    65,    -1,    31,    65,    69,
      47,    65,    47,    70,    19,    65,    -1,     9,    -1,    11,
      -1,    22,    65,    -1,    22,   119,    -1,    19,   119,    22,
      65,    -1,    22,   119,    86,    65,    -1,    65,    -1,    65,
      85,    65,    -1,   119,    85,    65,    -1,    20,    65,    -1,
      20,    65,   121,    -1,    80,    65,    -1,   121,    80,    65,
      -1,    26,    65,    -1,    26,    65,   121,    -1,   105,    -1,
     123,   105,    -1,    21,    65,   125,    65,    81,   107,    -1,
      21,    65,   125,    65,    81,   107,    14,    65,   125,    65,
      81,   107,    -1,    79,    79,    -1,    88,    -1,    89,    -1,
      90,    -1,    18,    65,    23,    65,    81,   107,    -1,    18,
      65,    23,    65,    81,   124,    -1,   128,    -1,   129,    -1,
     128,   129,    -1,   127,   128,    -1,   127,   129,    -1,    12,
      87,    69,    65,    70,    81,   130,    -1,    12,    65,    69,
      65,    70,   130,    -1,    12,    65,    69,    65,   121,    70,
      81,   131,    -1,    12,    65,    69,    65,   121,    70,    81,
     131,   132,    -1,    12,    65,    69,    65,   121,    70,    81,
     131,   133,    -1,    12,    65,    69,    65,   121,    70,    81,
     131,   132,   133,    -1,   119,    79,    47,    65,    47,    -1,
     119,    79,    65,    -1,   130,    -1,   131,   130,    -1,    65,
      79,    65,    69,    65,    70,    -1,    65,    79,    65,    69,
      65,   121,    70,    -1,    12,    65,    69,    65,    70,    81,
     123,    -1,    10,    65,    81,   123,    -1,    10,    65,    81,
     127,    -1,    10,    65,    81,   123,   127,    -1,    10,    65,
      81,   127,   123,    -1,    10,    65,   135,    81,   123,    -1,
      10,    65,   135,    81,   127,   123,    -1,    10,    65,    81,
     123,   127,   124,    -1,    10,    65,    81,   123,   127,   124,
     126,    -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   120,   120,   121,   122,   123,   130,   131,   132,   139,
     140,   141,   142,   145,   146,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   182,   183,   184,   185,   191,   192,   193,
     197,   198,   199,   202,   203,   204,   207,   208,   212,   213,
     215,   216,   217,   218,   219,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   240,   241,   246,
     247,   250,   251,   256,   257,   258,   259,   260,   263,   264,
     268,   271,   272,   273,   277,   281,   282,   286,   287,   290,
     293,   296,   297,   298,   299,   303,   304,   305,   308,   309,
     312,   313,   316,   317,   323,   324,   329,   330,   333,   334,
     335,   336,   338,   339,   345,   346,   347,   348,   349,   354,
     362,   363,   364,   365,   366,   371,   372,   376,   377,   384,
     385,   395,   400,   401,   402,   403,   404,   405,   406,   407,
     410
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FALSE", "TRUE", "AND", "ASSERT",
  "ASYNC", "AWAIT", "BREAK", "CLASS", "CONTINUE", "DEF", "DEL", "ELIF",
  "ELSE", "EXCEPT", "FINALY", "FOR", "FROM", "GLOBAL", "IF", "IMPORT",
  "IN", "IS", "LAMBDA", "NONLOCAL", "NOT", "NONE", "OR", "PASS", "RAISE",
  "RETURN", "TRY", "WHILE", "WITH", "YIELD", "LBRACKET", "RBRACKET",
  "LBRACE", "RBRACE", "SEMICOLON", "LOWERCASE", "NUM", "LETTER",
  "KATWPAVLA", "QUOTE", "DOUBLEQUOTE", "DIGIT", "r", "u", "R", "U", "f",
  "F", "fr", "Fr", "fR", "FR", "rf", "Rf", "rF", "RF", "SHORTSTRING",
  "LONGSTRING", "IDENTIFIER", "INTEGER", "FLOATNUMBER", "IMAGINUMBER",
  "LEFTBRACKET", "RIGHTBRACKET", "LSQUAREBRACKET", "RSQUAREBRACKET",
  "CURLLEFT", "CURLRIGHT", "PLUS", "MUL", "DIVISION", "MINUS", "ISON",
  "KOMMA", "ANWKATWTELEIA", "PRINT", "SINISON", "PLINISON", "TELEIA", "AS",
  "INIT", "MEGALUTERO", "MIKROTERO", "DIAFORO", "$accept", "programm",
  "atom", "literal", "stringliteral", "stringprefixShort",
  "stringprefixLong", "enclosure", "parenth_form", "list_display",
  "set_display", "dict_display", "dictindex", "comprehension",
  "simple_statements", "statements", "expression_statement", "protash",
  "assignment_statment", "augmented_assignment_stmt", "pass_stm",
  "del_stmt", "return_stmt", "yield_stmt", "raise_stmt", "break_stmt",
  "continue_stmt", "import_stmt", "module", "global_stmt",
  "synexeia_ekfrashs", "nonlocal_stmt", "stmt_list", "if_stm", "sygrites",
  "for_stm", "constructor", "defconstructor", "parameterizedconstructor",
  "swmaconstr", "recursive_swmaconstr", "object", "function", "classi",
  "klhronomikothta", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    92,    92,    93,    93,    93,    94,
      94,    94,    94,    95,    95,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    98,    98,    99,    99,    99,
     100,   100,   100,   101,   101,   101,   102,   102,   103,   103,
     104,   104,   104,   104,   104,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   109,   109,   109,   110,   110,
     111,   112,   112,   112,   113,   114,   114,   115,   115,   116,
     117,   118,   118,   118,   118,   119,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     125,   125,   126,   126,   127,   127,   127,   127,   127,   128,
     129,   129,   129,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   134,   134,   134,   134,   134,   134,   134,   134,
     135
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     2,     3,     3,
       2,     3,     3,     2,     3,     3,     4,     5,     3,     5,
       9,    11,    11,    11,    11,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       2,     1,     2,     3,     3,     3,     3,     1,     4,     4,
       1,     2,     4,     4,     2,     2,     3,     4,     9,     1,
       1,     2,     2,     4,     4,     1,     3,     3,     2,     3,
       2,     3,     2,     3,     1,     2,     6,    12,     2,     1,
       1,     1,     6,     6,     1,     1,     2,     2,     2,     7,
       6,     8,     9,     9,    10,     5,     3,     1,     2,     6,
       7,     7,     4,     4,     5,     5,     5,     6,     6,     7,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,    10,    11,
      12,     0,     0,     0,     0,     2,     7,     9,    13,    14,
       8,    43,    44,    45,    46,     2,     2,     0,     0,    15,
      29,    16,    30,    17,    31,    18,    32,    19,    33,    20,
      34,    21,    35,    22,    36,    23,    37,    24,    38,    25,
      39,    27,    41,    26,    40,    28,    42,     0,     0,    47,
       0,     0,    50,     0,     0,    53,     0,     1,     3,     5,
       4,   150,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,    49,    51,    52,    54,    55,    99,   100,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,   114,    65,    77,    78,    87,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,   142,   143,   124,   125,
       0,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,   105,     0,   108,   101,   102,
     112,     0,    94,     0,    95,     0,     0,     0,    80,     0,
      66,   115,   144,   145,   127,   128,     0,   126,   146,     0,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,     0,   113,
       0,     0,    96,     0,     0,    86,    85,    83,    84,     0,
       0,   148,   147,     0,    58,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,   106,   103,   107,   110,     0,
     104,    97,     0,    88,    89,    81,     0,     0,     0,   149,
     141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,     0,    82,     0,   119,   120,   121,     0,     0,
      59,     0,     0,     0,     0,     0,     0,   130,     0,     0,
       0,    79,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,     0,     0,    60,     0,     0,     0,
       0,     0,   136,   137,   131,     0,   116,     0,     0,     0,
       0,     0,     0,     0,   138,   132,   133,    98,     0,   122,
     123,    61,    63,    64,    62,   135,     0,   134,     0,     0,
       0,     0,     0,     0,     0,   139,     0,   117,   140
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   134,    70,   111,   112,   113,   226,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   256,   124,
     187,   125,   126,   201,   248,   229,   127,   128,   129,   257,
     284,   295,    35,    36,    83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -245
static const yytype_int16 yypact[] =
{
      57,   -57,   -43,    90,   113,   115,   117,   119,   121,   123,
     125,   127,   129,   131,   133,   135,   137,    -9,  -245,  -245,
    -245,   -15,   -49,    83,    51,    57,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,    57,    57,    16,    64,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,    29,     8,  -245,
      50,    -4,  -245,    68,    14,  -245,    95,  -245,  -245,  -245,
    -245,  -245,    -2,    93,   144,    85,   145,  -245,   146,   147,
     148,   149,  -245,  -245,  -245,  -245,  -245,  -245,  -245,    -5,
      87,   150,   151,   152,   153,  -245,   154,   155,    -6,    89,
     103,   -18,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,    -2,    -2,   190,  -245,
      -2,   156,   140,  -245,    47,   199,   205,   206,   207,   209,
     159,   160,  -245,   165,   166,   157,   -20,   158,   118,   120,
     158,    -7,  -245,   167,  -245,   161,   162,    33,  -245,   186,
    -245,   -18,   139,    22,  -245,  -245,   169,  -245,    22,    -2,
     163,   170,  -245,   171,   172,   174,   178,   180,   181,   182,
     183,   179,   184,   187,   188,   189,   192,   175,   193,   175,
     194,   203,  -245,   195,   196,  -245,  -245,  -245,  -245,   197,
     198,   233,    22,    22,  -245,   191,   246,   242,   243,   244,
     245,   -24,   200,  -245,  -245,  -245,  -245,  -245,  -245,   204,
    -245,  -245,   208,  -245,  -245,  -245,   -28,    53,   210,  -245,
      22,   211,   212,   213,   214,   215,   216,   150,    23,   201,
    -245,   224,   217,  -245,   218,  -245,  -245,  -245,   219,   251,
    -245,   260,   267,   268,   270,   271,    76,  -245,   220,   150,
     221,  -245,  -245,   222,   225,   227,   228,   229,   230,   231,
     -26,   150,  -245,   279,   223,   226,  -245,   276,   277,   281,
     283,   237,  -245,  -245,    -8,   247,   294,   -16,   248,   249,
     250,   252,   262,    86,  -245,   298,  -245,  -245,   253,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,   254,  -245,    53,   255,
     256,   257,   235,    67,   223,  -245,    69,  -245,  -245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -245,   109,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,   185,  -125,   -86,  -238,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,    72,  -245,
    -150,  -245,  -124,    24,    12,  -245,    36,   -31,   -33,  -244,
    -245,  -245,  -149,  -245,  -245
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -106
static const yytype_int16 yytable[] =
{
     189,   161,   184,   163,     2,   200,   168,    97,    37,    98,
      99,   100,   190,   153,    86,   272,    71,   101,   102,   242,
     103,   281,    38,    72,   104,   160,    86,   283,   105,   106,
     107,    97,    86,    98,   108,   100,   286,   243,   161,   282,
     294,   101,   102,   161,   103,   202,   237,   109,   104,   299,
      68,    77,   105,   106,   107,    69,   186,   293,   108,   154,
     140,   238,   191,   109,   110,   185,   110,     1,    93,     2,
      67,    88,    89,    90,    91,   160,   317,   161,    87,   230,
     110,    81,   141,    88,    89,    90,    91,   109,    95,    88,
      89,    90,    91,   258,   165,   167,   164,    82,   195,   196,
     197,   198,    85,   219,   110,   161,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      92,   172,    17,    18,    19,    20,    21,   173,    22,   165,
      23,   164,   244,    84,    78,   296,   165,   315,   164,   318,
      94,   245,   246,   247,    79,    80,   307,   186,    74,   219,
     132,    99,   142,    39,    40,   270,   143,    75,   144,   133,
     200,   185,   162,   316,   155,   306,   169,   156,   157,    96,
     158,   183,   159,   146,   130,   149,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,   166,   183,  -105,   185,   188,    73,    76,   131,
     135,   136,   137,   138,   139,   145,   147,   148,   150,   151,
     152,   171,   174,   175,   176,   177,   170,   178,   179,   180,
     181,   182,   192,   199,   140,   204,   205,   206,   186,   207,
     193,   194,   183,   208,   203,   209,   210,   211,   212,   213,
     222,   228,   215,   216,   217,   219,   214,   218,   220,   221,
     223,   224,   225,   227,   232,   233,   234,   235,   236,   240,
     239,   260,   231,   241,   264,   249,   250,   251,   252,   253,
     254,   255,   259,   265,   263,   266,   267,   261,   268,   269,
     275,   273,   276,   277,   278,   279,   280,   262,   285,   288,
     289,   271,   292,   274,   290,   110,   291,   287,   298,   305,
       2,   300,   297,   301,   302,   303,   314,   304,   308,   309,
     310,   312,   313,     0,   311
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-245)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     150,   126,    22,   127,    12,    21,   130,     9,    65,    11,
      12,    13,    19,    19,    18,   259,    65,    19,    20,    47,
      22,    47,    65,    72,    26,   111,    18,   271,    30,    31,
      32,     9,    18,    11,    36,    13,   274,    65,   163,    65,
     284,    19,    20,   168,    22,   169,    70,    65,    26,   287,
      65,     0,    30,    31,    32,    70,    80,    65,    36,    65,
      65,   211,    69,    65,    82,    85,    82,    10,    72,    12,
      79,    75,    76,    77,    78,   161,   314,   202,    70,   203,
      82,    65,    87,    75,    76,    77,    78,    65,    74,    75,
      76,    77,    78,    70,   127,   128,   127,    81,    65,    66,
      67,    68,    73,    80,    82,   230,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      70,    74,    65,    66,    67,    68,    69,    80,    71,   162,
      73,   162,    79,    69,    25,   284,   169,    70,   169,    70,
      72,    88,    89,    90,    35,    36,   295,    80,    65,    80,
      65,    12,    65,    63,    64,    79,    69,    74,    71,    74,
      21,    85,   126,   313,    75,    79,   130,    78,    79,    74,
      67,    85,    69,   101,    81,   103,    63,    64,    63,    64,
      63,    64,    63,    64,    63,    64,    63,    64,    63,    64,
      63,    64,    63,    64,    63,    64,    63,    64,    63,    64,
      63,    64,    12,    85,    86,    85,    86,    22,    23,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    81,    23,    18,    18,    18,    70,    18,    69,    69,
      65,    65,    65,    47,    65,    65,    65,    65,    80,    65,
      79,    79,    85,    65,    81,    65,    65,    65,    65,    70,
      47,    18,    65,    65,    65,    80,    72,    65,    65,    65,
      65,    65,    65,    65,    18,    23,    23,    23,    23,    65,
      70,    47,    81,    65,    23,    65,    65,    65,    65,    65,
      65,    65,    81,    23,    65,    18,    18,    70,    18,    18,
      65,    70,    65,    65,    65,    65,    65,    79,    19,    23,
      23,    81,    65,    81,    23,    82,    23,    81,    14,    47,
      12,   287,    65,    65,    65,    65,    81,    65,    65,    65,
     308,    65,    65,    -1,    69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    12,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    65,    66,    67,
      68,    69,    71,    73,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   133,   134,    65,    65,    63,
      64,    63,    64,    63,    64,    63,    64,    63,    64,    63,
      64,    63,    64,    63,    64,    63,    64,    63,    64,    63,
      64,    63,    64,    63,    64,    63,    64,    79,    65,    70,
     104,    65,    72,   104,    65,    74,   104,     0,    92,    92,
      92,    65,    81,   135,    69,    73,    18,    70,    75,    76,
      77,    78,    70,    72,    72,    74,    74,     9,    11,    12,
      13,    19,    20,    22,    26,    30,    31,    32,    36,    65,
      82,   105,   106,   107,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   120,   122,   123,   127,   128,   129,
      81,    65,    65,    74,   103,    65,    65,    65,    65,    65,
      65,    87,    65,    69,    71,    65,   119,    65,    65,   119,
      65,    65,    65,    19,    65,    75,    78,    79,    67,    69,
     106,   105,   127,   123,   128,   129,    12,   129,   123,   127,
      70,    81,    74,    80,    23,    18,    18,    18,    18,    69,
      69,    65,    65,    85,    22,    85,    80,   121,    86,   121,
      19,    69,    65,    79,    79,    65,    66,    67,    68,    47,
      21,   124,   123,    81,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    70,    72,    65,    65,    65,    65,    80,
      65,    65,    47,    65,    65,    65,   108,    65,    18,   126,
     123,    81,    18,    23,    23,    23,    23,    70,   121,    70,
      65,    65,    47,    65,    79,    88,    89,    90,   125,    65,
      65,    65,    65,    65,    65,    65,   119,   130,    70,    81,
      47,    70,    79,    65,    23,    23,    18,    18,    18,    18,
      79,    81,   130,    70,    81,    65,    65,    65,    65,    65,
      65,    47,    65,   130,   131,    19,   107,    81,    23,    23,
      23,    23,    65,    65,   130,   132,   133,    65,    14,   107,
     124,    65,    65,    65,    65,    47,    79,   133,    65,    65,
     125,    69,    65,    65,    81,    70,   121,   107,    70
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;


/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = YYLEX;
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
  *++yylsp = yylloc;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
/* Line 1792 of yacc.c  */
#line 130 "./Project/bison.y"
    {printf("IDENTIFIER\n");}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 131 "./Project/bison.y"
    {printf("LITERAL\n");}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 132 "./Project/bison.y"
    {printf("ENCLOSURE\n");}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 141 "./Project/bison.y"
    {printf("FLOATNUMBER\n");}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 142 "./Project/bison.y"
    {printf("IMAGINERYNUMBER\n");}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 145 "./Project/bison.y"
    {printf("STRINGPREFIXSHORT\n");}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 146 "./Project/bison.y"
    {printf("STRINGPREFIXLONG\n");}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 191 "./Project/bison.y"
    {printf("PARENTFFORM CORRECT1\n");}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 192 "./Project/bison.y"
    {printf("PARENTFFORM CORRECT2\n");}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 193 "./Project/bison.y"
    {printf("PARENTHFORMCOMREHENSION\n");}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 197 "./Project/bison.y"
    {printf("LISTDISPLAY1\n");}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 198 "./Project/bison.y"
    {printf("LISTDISPLAY2\n");}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 199 "./Project/bison.y"
    {printf("LISTDISPLAYCOMREHENSION\n");}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 202 "./Project/bison.y"
    {printf("CURL1\n");}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 203 "./Project/bison.y"
    {printf("CURL2\n");}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 204 "./Project/bison.y"
    {printf("SETDISPLAYCOMREHENSION\n");}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 207 "./Project/bison.y"
    {printf("DICTIONARY DISPLAY\n");}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 208 "./Project/bison.y"
    {printf("DICTIONARY DISPLAY2\n");}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 225 "./Project/bison.y"
    {printf("STATEMENT\n");}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 226 "./Project/bison.y"
    {printf("SIMPLESTATMENT\n");}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 260 "./Project/bison.y"
    {printf("AUGUMENTEDSTATMENT\n");}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 277 "./Project/bison.y"
    {printf("return statement\n");}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 281 "./Project/bison.y"
    {printf("yield statement\n");}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 286 "./Project/bison.y"
    {printf("raisestm\n");}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 287 "./Project/bison.y"
    {printf("raisestm2\n");}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 296 "./Project/bison.y"
    {printf("IMPORT IDENTIFIER\n");}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 297 "./Project/bison.y"
    {printf("IMPORT MODULE\n");}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 298 "./Project/bison.y"
    {printf("FROM IMPORT MODULE\n");}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 299 "./Project/bison.y"
    {printf(" IMPORT MODULE AS\n");}
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 308 "./Project/bison.y"
    {printf("global statement\n");}
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 309 "./Project/bison.y"
    {printf("global statement2\n");}
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 316 "./Project/bison.y"
    {printf("nonlocal statement\n");}
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 317 "./Project/bison.y"
    {printf("nonlocal statement2\n");}
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 354 "./Project/bison.y"
    {printf("default\n");}
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 363 "./Project/bison.y"
    {printf("parameterizedconstructor2\n");}
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 364 "./Project/bison.y"
    {printf("parameterizedconstructor with object creation\n");}
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 395 "./Project/bison.y"
    {printf("FUNCTION\n");}
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 400 "./Project/bison.y"
    {printf("NEWCLASS WITH STATEMENTS\n");}
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 401 "./Project/bison.y"
    {printf("NEWCLASS WITH STATEMENTS2\n");}
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 402 "./Project/bison.y"
    {printf("NEWCLASS WITH STATEMENTS3\n");}
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 403 "./Project/bison.y"
    {printf("NEWCLASS WITH STATEMENTS4\n");}
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 404 "./Project/bison.y"
    {printf("NEWCLASS WITH STATEMENTS5\n");}
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 405 "./Project/bison.y"
    {printf("NEWCLASS WITH STATEMENTS6\n");}
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 406 "./Project/bison.y"
    {printf("NEWCLASS WITH ifstm\n");}
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 407 "./Project/bison.y"
    {printf("NEWCLASS WITH ifstm&forstm\n NO SYNTAX ERROR DETECTED\n");}
    break;


/* Line 1792 of yacc.c  */
#line 2240 "y.tab.c"
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
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 416 "./Project/bison.y"


void yyerror(char *s)
{
   extern int yylineno; 
   fprintf(stderr,"%s at line  %d ",s,yylineno);

}

int main(int argc,char **argv)
{

  ++argv; --argc;


  yyin = fopen( "input.txt", "r" );
	//yyout = fopen( "output", "w" );
  yyparse ();
  return 0;
  }
	