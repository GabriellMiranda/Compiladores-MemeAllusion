%{
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    #include"lex.yy.c"
    
    void yyerror(const char *s);
    int yylex();
    int yywrap();
%}

%token Thais
%token Daniel
%token Fabricio
%token Glaucia
%token Nacif

%token id
%token uaiu
%token paraZe
%token letra
%token decimal
%token positivo
%token negativo

%token parecomisso
%token casemito
%token toBeContinua
%token quediafoisso

%token MenorQue
%token MaiorQue
%token MenorIgualQue
%token MaiorIgualQue
%token gemeas
%token notIgual
%token ii
%token ou


%%
term: letra 
    | id 
    | decimal 
    | positivo
    | negativo

tipo: Thais 
    | Daniel 
    | Fabricio
    | Glaucia
    | Nacif

break: parecomisso ';'


operadores: '+'| '-'| '*'|'/' 

logic : MenorQue
    | MaiorQue
    |gemeas
    |notIgual
    |MenorIgualQue
    |MaiorIgualQue
    |ii
    |ou

expr: expr operadores expr ';'
    | expr operadores expr ';'
    | expr operadores expr ';'
    | expr operadores expr ';'
    | expr gemeas expr  ';'
    | expr notIgual expr ';'
    | expr logic expr ';'
    | term ';'

case: casemito expr: bloco

continue: toBeContinua ';'


stmt: paraZe '{' expr '}'






%%

int main(void){
    yyparse();
    return 0;
}