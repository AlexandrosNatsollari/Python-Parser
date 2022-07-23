/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "projbison.y" /* yacc.c:1909  */

    char    name;
  

#line 239 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
