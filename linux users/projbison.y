%{
#include <stdio.h>
#include <string.h>
#include <stdio.h>
void yyerror(char *); 
extern FILE *yyin;								
extern FILE *yyout;

char tmplist_expression[100];
char list_expression[100];



%}


%locations


%union
{
    char    name;
  
}

%token FALSE
%token TRUE
%token AND
%token ASSERT
%token ASYNC
%token AWAIT
%token BREAK
%token CLASS
%token CONTINUE
%token DEF
%token DEL
%token ELIF
%token ELSE
%token EXCEPT
%token FINALY
%token FOR
%token FROM
%token GLOBAL
%token IF
%token IMPORT
%token IN
%token IS
%token LAMBDA
%token NONLOCAL
%token NOT
%token NONE
%token OR
%token PASS
%token RAISE
%token RETURN
%token TRY
%token WHILE
%token WITH
%token YIELD
%token LBRACKET
%token RBRACKET
%token LBRACE
%token RBRACE
%token SEMICOLON
%token LOWERCASE
%token <ystr1> NUM
%token LETTER
%token KATWPAVLA
%token QUOTE
%token DOUBLEQUOTE
%token DIGIT
%token r
%token u
%token R
%token U
%token f
%token F
%token fr
%token Fr
%token fR
%token FR
%token rf
%token Rf
%token rF
%token RF
%token SHORTSTRING
%token LONGSTRING
%token IDENTIFIER
%token INTEGER
%token FLOATNUMBER
%token IMAGINUMBER
%token LEFTBRACKET
%token RIGHTBRACKET
%token LSQUAREBRACKET
%token RSQUAREBRACKET
%token CURLLEFT
%token CURLRIGHT
%token PLUS
%token MUL
%token DIVISION
%token MINUS
%token ISON
%token KOMMA
%token ANWKATWTELEIA
%token PRINT 
%token SINISON
%token PLINISON
%token TELEIA
%token AS
%token INIT
%token MEGALUTERO
%token MIKROTERO
%token DIAFORO


	
%%


programm: 
        |atom programm
        |classi  programm
        |function programm
        ;





atom: IDENTIFIER{printf("IDENTIFIER\n");}
    |literal {printf("LITERAL\n");}
    | enclosure {printf("ENCLOSURE\n");}
    ;





literal: stringliteral 
       |INTEGER
       |FLOATNUMBER {printf("FLOATNUMBER\n");}
       |IMAGINUMBER {printf("IMAGINERYNUMBER\n");}
       ;
  
stringliteral: stringprefixShort {printf("STRINGPREFIXSHORT\n");}
             |stringprefixLong   {printf("STRINGPREFIXLONG\n");}
               ;

stringprefixShort: r SHORTSTRING
            |u SHORTSTRING
            |R SHORTSTRING
            |U SHORTSTRING
            |f SHORTSTRING
            |F SHORTSTRING
            |fr SHORTSTRING
            |Fr SHORTSTRING
            |fR SHORTSTRING
            |FR SHORTSTRING
            |rf SHORTSTRING
            |rF SHORTSTRING
            |Rf SHORTSTRING
            |RF SHORTSTRING
            ; 
                
stringprefixLong:  r LONGSTRING
            |u LONGSTRING
            |R LONGSTRING
            |U LONGSTRING
            |f LONGSTRING
            |F LONGSTRING
            |fr LONGSTRING
            |Fr LONGSTRING
            |fR LONGSTRING
            |FR LONGSTRING
            |rf LONGSTRING
            |rF LONGSTRING
            |Rf LONGSTRING
            |RF LONGSTRING
            ; 


enclosure: parenth_form 
         |list_display
         |set_display 
         |dict_display
         //|string_conversion 
         //|yield_atom
         ;


parenth_form: LEFTBRACKET  RIGHTBRACKET {printf("PARENTFFORM CORRECT1\n");}
            |LEFTBRACKET IDENTIFIER  RIGHTBRACKET {printf("PARENTFFORM CORRECT2\n");}
            |LEFTBRACKET comprehension RIGHTBRACKET {printf("PARENTHFORMCOMREHENSION\n");}
            ;


list_display: LSQUAREBRACKET RSQUAREBRACKET {printf("LISTDISPLAY1\n");}
            |LSQUAREBRACKET IDENTIFIER RSQUAREBRACKET {printf("LISTDISPLAY2\n");}
            |LSQUAREBRACKET comprehension RSQUAREBRACKET {printf("LISTDISPLAYCOMREHENSION\n");}
            ;

set_display: CURLLEFT CURLRIGHT {printf("CURL1\n");}
           |CURLLEFT IDENTIFIER CURLRIGHT  {printf("CURL2\n");}
           |CURLLEFT comprehension CURLRIGHT {printf("SETDISPLAYCOMREHENSION\n");}
           ;

dict_display:IDENTIFIER ISON CURLLEFT CURLRIGHT {printf("DICTIONARY DISPLAY\n");}
            |IDENTIFIER ISON CURLLEFT dictindex CURLRIGHT {printf("DICTIONARY DISPLAY2\n");}
            ;


dictindex:IDENTIFIER ANWKATWTELEIA IDENTIFIER 
         |dictindex KOMMA IDENTIFIER ANWKATWTELEIA IDENTIFIER
         ;
comprehension: IDENTIFIER FOR IDENTIFIER IN IDENTIFIER FOR IDENTIFIER IN IDENTIFIER
             |IDENTIFIER PLUS IDENTIFIER FOR IDENTIFIER IN IDENTIFIER FOR IDENTIFIER IN IDENTIFIER
             |IDENTIFIER MINUS IDENTIFIER FOR IDENTIFIER IN IDENTIFIER FOR IDENTIFIER IN IDENTIFIER
             |IDENTIFIER MUL IDENTIFIER FOR IDENTIFIER IN IDENTIFIER FOR IDENTIFIER IN IDENTIFIER
             |IDENTIFIER DIVISION IDENTIFIER FOR IDENTIFIER IN IDENTIFIER FOR IDENTIFIER IN IDENTIFIER
             ;




simple_statements: statements {printf("STATEMENT\n");}
                 |simple_statements statements {printf("SIMPLESTATMENT\n");}
                 |pass_stm
                 |del_stmt
                 |return_stmt
                 |yield_stmt
                 |raise_stmt
                 |break_stmt
                 |continue_stmt
                 |import_stmt
                 |global_stmt
                 |nonlocal_stmt
                 ;


statements: expression_statement
          |assignment_statment
          ; 



expression_statement: PRINT LEFTBRACKET DOUBLEQUOTE protash DOUBLEQUOTE RIGHTBRACKET
                   |PRINT FLOATNUMBER
                   ;

protash: IDENTIFIER
       |protash IDENTIFIER
       ;



assignment_statment: IDENTIFIER ISON FLOATNUMBER
                  |IDENTIFIER ISON IMAGINUMBER
                  |IDENTIFIER ISON INTEGER
                  |IDENTIFIER ISON IDENTIFIER
                  |augmented_assignment_stmt {printf("AUGUMENTEDSTATMENT\n");}
                  ;

augmented_assignment_stmt: IDENTIFIER  PLUS ISON  IDENTIFIER
                         |IDENTIFIER MINUS ISON IDENTIFIER
                         ;


pass_stm: PASS
         ;

del_stmt: DEL IDENTIFIER
        |DEL LEFTBRACKET IDENTIFIER RIGHTBRACKET
        |DEL LSQUAREBRACKET IDENTIFIER RSQUAREBRACKET
        ;


return_stmt: RETURN IDENTIFIER {printf("return statement\n");}
           ;


yield_stmt: YIELD IDENTIFIER {printf("yield statement\n");}
          |YIELD FROM IDENTIFIER
          ;


raise_stmt: RAISE IDENTIFIER FROM IDENTIFIER {printf("raisestm\n");}
          |RAISE IDENTIFIER LEFTBRACKET DOUBLEQUOTE IDENTIFIER DOUBLEQUOTE RIGHTBRACKET FROM IDENTIFIER {printf("raisestm2\n");}
          ;

break_stmt: BREAK
          ;

continue_stmt: CONTINUE
             ;
   
import_stmt: IMPORT IDENTIFIER {printf("IMPORT IDENTIFIER\n");}
           |IMPORT module {printf("IMPORT MODULE\n");}
           |FROM module IMPORT IDENTIFIER {printf("FROM IMPORT MODULE\n");}
           |IMPORT module AS IDENTIFIER {printf(" IMPORT MODULE AS\n");}
           ;


module: IDENTIFIER
      |IDENTIFIER TELEIA IDENTIFIER
      |module TELEIA IDENTIFIER
      ;

global_stmt: GLOBAL IDENTIFIER {printf("global statement\n");}
           |GLOBAL IDENTIFIER synexeia_ekfrashs {printf("global statement2\n");}
           ;

synexeia_ekfrashs: KOMMA IDENTIFIER 
                 |synexeia_ekfrashs KOMMA IDENTIFIER 
                 ;

nonlocal_stmt: NONLOCAL IDENTIFIER {printf("nonlocal statement\n");}
             |NONLOCAL IDENTIFIER synexeia_ekfrashs {printf("nonlocal statement2\n");}
             ;
 



stmt_list: simple_statements
         |stmt_list simple_statements
         ;



if_stm: IF IDENTIFIER  sygrites IDENTIFIER  ANWKATWTELEIA  expression_statement
      |IF IDENTIFIER sygrites IDENTIFIER ANWKATWTELEIA  expression_statement ELIF IDENTIFIER sygrites IDENTIFIER ANWKATWTELEIA  expression_statement
      ;

sygrites: ISON ISON 
        |MEGALUTERO
        |MIKROTERO
        |DIAFORO
        ;
for_stm: FOR IDENTIFIER IN IDENTIFIER ANWKATWTELEIA expression_statement
       |FOR IDENTIFIER IN IDENTIFIER ANWKATWTELEIA if_stm 
       ;



 
constructor: defconstructor
           |parameterizedconstructor
           |defconstructor parameterizedconstructor
           |constructor defconstructor
           |constructor parameterizedconstructor 
           ;



defconstructor: DEF INIT LEFTBRACKET IDENTIFIER RIGHTBRACKET ANWKATWTELEIA swmaconstr {printf("default\n");}
              ;                                                                        

                                                                                       
             



parameterizedconstructor: DEF IDENTIFIER LEFTBRACKET IDENTIFIER RIGHTBRACKET swmaconstr 
                        |DEF IDENTIFIER LEFTBRACKET IDENTIFIER synexeia_ekfrashs RIGHTBRACKET ANWKATWTELEIA recursive_swmaconstr {printf("parameterizedconstructor2\n");}
                        |DEF IDENTIFIER LEFTBRACKET IDENTIFIER synexeia_ekfrashs RIGHTBRACKET ANWKATWTELEIA recursive_swmaconstr object  {printf("parameterizedconstructor with object creation\n");}
                        |DEF IDENTIFIER LEFTBRACKET IDENTIFIER synexeia_ekfrashs RIGHTBRACKET ANWKATWTELEIA recursive_swmaconstr function
                        |DEF IDENTIFIER LEFTBRACKET IDENTIFIER synexeia_ekfrashs RIGHTBRACKET ANWKATWTELEIA recursive_swmaconstr object function
                        ;                                                                                                
                                                                                                               


swmaconstr: module ISON DOUBLEQUOTE IDENTIFIER DOUBLEQUOTE
          |module ISON IDENTIFIER
          ;


recursive_swmaconstr: swmaconstr 
                    |recursive_swmaconstr swmaconstr
                    ;





object: IDENTIFIER ISON IDENTIFIER LEFTBRACKET IDENTIFIER RIGHTBRACKET
      |IDENTIFIER ISON IDENTIFIER LEFTBRACKET IDENTIFIER synexeia_ekfrashs RIGHTBRACKET
      ;








function: DEF IDENTIFIER LEFTBRACKET IDENTIFIER  RIGHTBRACKET ANWKATWTELEIA stmt_list {printf("FUNCTION\n");}
        ; 



classi:CLASS IDENTIFIER ANWKATWTELEIA stmt_list {printf("NEWCLASS WITH STATEMENTS\n");}
      |CLASS IDENTIFIER ANWKATWTELEIA constructor  {printf("NEWCLASS WITH STATEMENTS2\n");}
      |CLASS IDENTIFIER ANWKATWTELEIA stmt_list constructor {printf("NEWCLASS WITH STATEMENTS3\n");}
      |CLASS IDENTIFIER ANWKATWTELEIA constructor stmt_list {printf("NEWCLASS WITH STATEMENTS4\n");} 
      |CLASS IDENTIFIER klhronomikothta ANWKATWTELEIA stmt_list {printf("NEWCLASS WITH STATEMENTS5\n");}
      |CLASS IDENTIFIER klhronomikothta ANWKATWTELEIA constructor stmt_list {printf("NEWCLASS WITH STATEMENTS6\n");}
      |CLASS IDENTIFIER ANWKATWTELEIA stmt_list constructor if_stm {printf("NEWCLASS WITH ifstm\n");}
      |CLASS IDENTIFIER ANWKATWTELEIA stmt_list constructor if_stm for_stm  {printf("NEWCLASS WITH ifstm&forstm\n NO SYNTAX ERROR DETECTED\n");}
     ;

klhronomikothta: IDENTIFIER
               ;




%%

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
	