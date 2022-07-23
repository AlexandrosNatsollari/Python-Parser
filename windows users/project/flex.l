%{

#include "y.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void yyerror (char *s);
int yylex();

%}

%option noyywrap
%option yylineno


integer [0-9]
%%


"false"		{return FALSE;}
"none"		{return NONE;}
"true"		{return TRUE;}
"and"		{return AND;}
"assert"	{return ASSERT;}
"async"		{return ASYNC;}
"await"		{return AWAIT;}
"break"		{return BREAK;}
"class"		{return CLASS;}
"continue"	{return CONTINUE;}
"def"		{return DEF;}
"del"		{return DEL;}
"elif"		{return ELIF;}
"else"		{return ELSE;}
"except"	{return EXCEPT;}
"finaly"	{return FINALY;}
"for"		{return FOR;}
"from"		{return FROM;}
"global"	{return GLOBAL;}
"if"		{return IF;}
"import"	{return IMPORT;}
"in"		{return IN;}

"lambda"	{return LAMBDA;}
"nonlocal"	{return NONLOCAL;}
"not"		{return NOT;}
"or"		{return OR;}
"pass"		{return PASS;}
"raise"		{return RAISE;}
"return"	{return RETURN;}
"try"		{return TRY;}
"while"		{return WHILE;}
"with"		{return WITH;}
"yield"		{return YIELD;}
"_"             {return KATWPAVLA;}
"'"             {return QUOTE;}
"\""            {return DOUBLEQUOTE;}
"r"             {return r;} 
"u"             {return u;}
"R"             {return R;}
"U"             {return U;}
"f"             {return f;}
"F"             {return F;}
"fr"            {return fr;}
"Fr"            {return Fr;}
"fR"            {return fR;}
"FR"            {return FR;}
"rf"            {return rf;}
"Rr"            {return Rf;}
"rF"            {return rF;}
"RF"            {return RF;}
"shortstring"   {return SHORTSTRING;}
"longstring"    {return LONGSTRING;}
"("             {return LEFTBRACKET;}
")"             {return RIGHTBRACKET;}
"["             {return LSQUAREBRACKET;}
"]"             {return RSQUAREBRACKET;}
"{"             {return CURLLEFT;}
"}"             {return CURLRIGHT;}
"+"             {return PLUS;}
"*"             {return MUL;}
"/"             {return DIVISION;}
"-"             {return MINUS;}
"="             {return ISON;}
","             {return KOMMA;}
":"             {return ANWKATWTELEIA;}
"print"         {return PRINT;}
"+="            {return SINISON;}
"-="            {return PLINISON;}
"."             {return TELEIA;}
"as"            {return AS;}
"init"          {return INIT;}
">"             {return MEGALUTERO;}
"<"             {return MIKROTERO;}
"diaforo"       {return DIAFORO;}


\n              {}









{integer}+                    {return INTEGER;}
[_a-zA-z0-9_]*                {return IDENTIFIER;}
[-+]?([0-9]*\.[0-9]+|[0-9]+)  {return FLOATNUMBER;}
[-+]?([0-9][i,j]*)            {return IMAGINUMBER;}
.;
%%