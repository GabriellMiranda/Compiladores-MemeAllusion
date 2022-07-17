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
%token BREAK
%token STR
%token LEIAME
%token NUMERO
%token DEFAULT
%left PLUS
%left MINUS
%left DIV
%left MULT
%right EXP
%left DO


%%

program:  main '(' ')' '{' body return '}'
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
| PRINTF '(' string ')' ';'
| PRINTF '(' string ',' list_ids ')' ';'
| LEIAME '(' string ',' list_ids ')' ';'
| SWITCH '('identificador')' '{'case'}'
| DO '{' body '}' WHILE'('condition')'';'
| break
;


case: CASE value ':' body break case  
| CASE value ':' body break 
| DEFAULT ':' body  break
;

else: ELSE '{' body '}'
|
;

condition: value relop value 
| TRUE {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
| FALSE {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
;

statement: datatype identificador init 
| identificador RECEBA expression 
| identificador relop expression
| datatype list_ids 
;

init: RECEBA value 
;

list_ids:    
| list_ids',' list_ids  
| list_ids',' identificador
| identificador
| identificador'('identificador')'
| identificador RECEBA identificador
| identificador RECEBA const
;


const: NUMERO {adcSimb(&tabela, "CONST", yytext, yylineno, "CONSTANTE");}

expression: expression aritmetica expression
| value
;

aritmetica: PLUS {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
| MINUS {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
| MULT {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
| DIV {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
| EXP {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
;

relop: OU {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| II {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| MAIORIGUALQUE {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| MENORIGUALQUE {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| NOTIGUAL {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| GEMEAS {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| MAIORQUE {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| MENORQUE {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
;

value: const
| list_ids
| string
;

string: STR {adcSimb(&tabela, "STRING", yytext, yylineno, "VETOR");}

return: RETURN value ';' 
| RETURN ';'
;

identificador: ID { strcpy(tipoSimbolo, "VARIAVEL"); adcSimb(&tabela, tipo, yytext, yylineno, tipoSimbolo);}
;

break: BREAK ';'
;

%%



void yyerror(char *s) {
    printf("\n\nErro sintático próximo à linha %d\n", yylineno);
    printf("Possivel erro sintatico antes ou depois do termo --> %s \n\n", yytext);
    qtdErros++;
}

int main(void){
    iniciaArvore(&tabela);
    printf("%d\t", yylineno);
    yyparse();
    if(qtdErros == 0){
        printf("\n\nPrograma Sintaticamente Correto\n");
        imprimirTab(tabela);
    }
    return 0;
}

