%{
    #include "translate.tab.h"
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <ctype.h>
    void yyerror(char *s);
    extern int yylineno; /* Variável responsável por armazenar a linha atual do arquivo fonte */
    int yylex();
    int yywrap();
%}

%token INT
%token FLOAT
%token DOUBLE
%token CHAR
%token STRUCT


%token FALSE
%token TRUE
%token LETRA
%token DECIMAL
%token NEGATIVO
%token POSITIVO
%token ID

%token ILAVAMOSNOS
%token RECEBA

%token MENORQUE
%left MAIORQUE
%left GEMEAS
%left NOTIGUAL
%left MENORIGUALQUE
%left MAIORIGUALQUE
%left II
%left OU

%token CONTINUE
%token TYPEDEF
%token RETURN
%token PRINTF
%token FOR
%token WHILE
%token IF
%token ELSE
%token CASE
%token SWITCH
%token GOTO
%token MALLOC
%token SIZEOF
%token PONTEIRO
%token BREAK
%token STR
%token LEIAME
%token NUMERO
%left PLUS
%left MINUS
%left DIV
%left MULT
%right EXP
%left DO


%%

program:  main '(' ')' '{' body return '}' {}
    ;


main: datatype ILAVAMOSNOS
;

datatype: INT 
| FLOAT 
| CHAR
| DOUBLE
;

body: FOR '(' statement ';' condition ';' statement ')' '{' body '}'
| WHILE '(' condition ')' '{' body '}'
| IF '(' condition ')' '{' body '}' else
| statement ';' 
| body body
| PRINTF '(' STR ')' ';'
| PRINTF '('STR',' list_ids ')' ';'
| LEIAME '('STR',' list_ids ')' ';'
| break
;

else: ELSE '{' body '}'
|
;

condition: value relop value 
| TRUE 
| FALSE
;

statement: datatype identificador init 
| identificador RECEBA expression 
| identificador relop expression
| datatype list_ids 
;

init: RECEBA value 
|
;

list_ids:    
| list_ids',' list_ids  
| list_ids',' identificador
| identificador
| identificador'('identificador')'
| identificador RECEBA identificador
| identificador RECEBA NUMERO 
;


expression: expression aritmetica expression
| value
;

aritmetica: PLUS {}
| MINUS {}
| MULT {}
| DIV {}
| EXP {}
;

relop: OU {}
| II {}
| MAIORIGUALQUE {}
| MENORIGUALQUE {}
| NOTIGUAL {}
| GEMEAS {}
| MAIORQUE {}
| MENORQUE {}
;

value: NUMERO
| list_ids
| STR
;

return: RETURN value ';' 
| RETURN ';'
;

identificador: ID 

break: BREAK ';'

%%



void yyerror(char *s) {
    printf("\n\nErro sintático próximo à linha %d\n", yylineno);
}

int main(void){
    printf("%d\t", yylineno);
    yyparse();
    return 0;
}

