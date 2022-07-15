%{
    #include "ArvoreP.c"
    #include "ArvoreP.h"
    #include "y.tab.h"
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <ctype.h>

    extern char *yytext;
    void yyerror(char *s);
    extern int yylineno; /* Variável responsável por armazenar a linha atual do arquivo fonte */
    int yylex();
    int yywrap();

    int qtdErros = 0; 

    char tipoSimbolo[100];
    char tipo[100];
    int linha;

    ArvorePatricia *tabela;
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

datatype: INT {strcpy(tipo, "INT");}
| FLOAT {strcpy(tipo, "FLOAT");}
| CHAR {strcpy(tipo, "CHAR");}
| DOUBLE {strcpy(tipo, "DOUBLE");}
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

value: NUMERO {strcpy(tipo, "CONSTANTE");}
| list_ids
| STR {strcpy(tipo, "STRING");}
;

return: RETURN value ';' 
| RETURN ';'
;

identificador: ID { strcpy(tipoSimbolo, "VARIAVEL"); adcSimb(&tabela, tipo, yytext, yylineno, tipoSimbolo);}

identificador2:  ID { char nome[100] = "VETOR<"; strcat(nome, tipo); strcat(nome, ">"); strcpy(tipoSimbolo, "VARIAVEL"); adcSimb(&tabela, nome, yytext, yylineno, tipoSimbolo);}

break: BREAK ';'

%%



void yyerror(char *s) {
    printf("\n\nErro sintático próximo à linha %d\n", yylineno);
    qtdErros++;
}

int main(void){
    iniciaArvore(&tabela);
    printf("%d\t", yylineno);
    yyparse();
    printf("\n");
    if(qtdErros == 0){
        printf("\n\nPrograma Sintaticamente Correto\n");
        imprimirTab(tabela);
    }
    return 0;
}

