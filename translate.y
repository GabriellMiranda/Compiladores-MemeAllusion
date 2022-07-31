%{
    #include "Patricia/ArvoreP.c"
    #include "Patricia/ArvoreP.h"
    #include "y.tab.h"
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <ctype.h>
    #include "codigoIntermediario/codigoIntermediario.h"
    #include "codigoIntermediario/codigoIntermediario.c"
    #include "Tree.c"
    #include "Tree.h"
    No *abstrata;
    Lista lista;
    extern char *yytext;
    void yyerror(char *s);
    extern int yylineno; /* Variável responsável por armazenar a linha atual do arquivo fonte */
    int yylex();
    int yywrap();

    int qtdErros = 0; 

    char tipoSimbolo[100];
    char tipo[100];
    int linha;


    char var1[100];
    char var2[100];
    ArvorePatricia *tabela;

     void TypeIsCorrect(char *var1, char *var2){
    	char *tipo1 = (char*)malloc(100 * sizeof(char));
    	char *tipo2 = (char*)malloc(100 * sizeof(char));
    	buscar(var1,tabela,tipo1);
    	buscar(var2,tabela,tipo2);
    	if(strcmp(tipo1,"") == 0){
    	    printf("\nErro semântico próximo a linha %d, termo '%s' não foi declarado\n",yylineno,var1);
            exit(0);
    	}
    	else if(strcmp(tipo2,"") == 0){
            printf("\nErro semântico próximo a linha %d, termo '%s' não foi declarado\n",yylineno,var2);
            exit(0);
        }
        else{
            if(strcmp(tipo1,tipo2) != 0){
                printf("\nErro semântico próximo a linha %d, Os tipos dos termos '%s' e '%s' são incompatíveis\n",yylineno-1,var1,var2);
                exit(0);
            }
        }
     }
%}

%union {
    char *ident;
}


%token FALSE
%token TRUE
%token LETRA
%token <ident> DECIMAL
%token <ident> NUMERO
%token <ident> ID

%token INT
%token FLOAT
%token DOUBLE
%token CHAR
%token STRUCT
%token VOID

%token RETURN
%token ATRIBUICAO

%token MENORQUE
%left MAIORQUE
%left IGUALDADE
%left NOTIGUAL
%left MENORIGUALQUE
%left MAIORIGUALQUE
%left AND
%left OR

%token CONTINUE
%token TYPEDEF
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
%token SCANF
%token DECLARARVARIAVEIS
%token IMPLEMENTARFUNCOES
%token MAIN
%token RUN
%token FIMEXPRESSAO
%token FIMDECLARACOES
%token FIMMAIN
%token FIMDECODIGO
%token NOMEARSTRUCT

%token DEFAULT
%left PLUS
%left MINUS
%left DIV
%left MULT
%right EXP
%left DO


%%

program: declaraVariaveis implementaFuncoes MAIN ':' body FIMMAIN;

body: for ':' body FIMDECLARACOES body
| while ':' body FIMDECLARACOES body
| if ':' body FIMDECLARACOES else body
| SCANF'.'RUN '<' STR listValueVirg '>' body
| printf body
| BREAK body
| statement body 
| identificador ATRIBUICAO value FIMEXPRESSAO body {TypeIsCorrect($<ident>1,  $<ident>3);}
| switch case body
| DO ':' body FIMDECLARACOES while ':' body FIMDECLARACOES body
|
;

statement: identificador ATRIBUICAO expression {TypeIsCorrect($<ident>1,  $<ident>2);}
| identificador ATRIBUICAO funcao {TypeIsCorrect($<ident>1,  $<ident>3);}
| identificador ATRIBUICAO value relop value {TypeIsCorrect($<ident>1,  $<ident>3); TypeIsCorrect($<ident>3,  $<ident>5); }
| funcao 
;



switch: SWITCH '<' value '>' ':';

case: CASE value ':' body  FIMDECLARACOES case  
| DEFAULT ':' body  FIMDECLARACOES
| 
;

funcao: identificador'.'RUN'<'listValue'>'; 

printf: PRINTF'.'RUN '<' strprint listValueVirg'>' 
;

strprint: STR {adcSimb(&tabela, "STRING", yytext, yylineno, "CONSTANTE");}
;

for: FOR '<' forpate1 ';' condition ';' forpate2 '>'; 

forpate1: identificador ATRIBUICAO const {TypeIsCorrect($<ident>1,  $<ident>3);}
;

forpate2: identificador ATRIBUICAO expression {TypeIsCorrect($<ident>1,  $<ident>3);}
;

while: WHILE '<' condition '>';

if: IF '<' condition '>'  ;

condition: value relop value {TypeIsCorrect($<ident>1,  $<ident>3);}
| TRUE {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
| FALSE {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
;

value: const
| STR {adcSimb(&tabela, "STRING", yytext, yylineno, "CONSTANTE");}
| identificador acessarVetOuStructLoop 
;

else: ELSE ':' body FIMDECLARACOES
|
;

const: DECIMAL {adcSimb(&tabela, "FLOAT", yytext, yylineno, "CONSTANTE");}
| NUMERO {adcSimb(&tabela, "INT", yytext, yylineno, "CONSTANTE");}
;



relop: OR {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| AND {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| MAIORIGUALQUE {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| MENORIGUALQUE {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| NOTIGUAL {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| IGUALDADE {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| MAIORQUE {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
| MENORQUE {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
;



expression: value PLUS expression {TypeIsCorrect($<ident>1,  $<ident>3);insereLista(&lista,"+", 1);insereLista(&lista,$<ident>1, 0);insertNo(&abstrata,"+");insertNo(&abstrata,$<ident>1); }
| value MINUS expression {TypeIsCorrect($<ident>1,  $<ident>3);insereLista(&lista,"-", 1);insereLista(&lista,$<ident>1, 0);  insertNo(&abstrata,"-");insertNo(&abstrata,$<ident>1);}                                              
| value MULT expression {TypeIsCorrect($<ident>1,  $<ident>3);insereLista(&lista,"*", 1);insereLista(&lista,$<ident>1, 0); insertNo(&abstrata,"*");insertNo(&abstrata,$<ident>1); }
| value DIV expression {TypeIsCorrect($<ident>1,  $<ident>3);insereLista(&lista,"/", 1);insereLista(&lista,$<ident>1, 0); insertNo(&abstrata,"/");insertNo(&abstrata,$<ident>1); }
| value EXP expression {TypeIsCorrect($<ident>1,  $<ident>3);}
| value { insertNo(&abstrata,$<ident>1);percorrerLista(&lista);iniciaLista(&lista);insereLista(&lista,$<ident>1, 0);}
;




declaraVariaveis: DECLARARVARIAVEIS ':' declararVar  ;

declararVar: datatype identificador '|' declararVar
| STRUCT ':' declararVar  NOMEARSTRUCT identificador declararVar
| vetor '|' declararVar
|
;

vetor: datatype identificador NOMEARSTRUCT value FIMDECLARACOES ;

implementaFuncoes: IMPLEMENTARFUNCOES ':' declararFun ;

declararFun: '<'datatype'>' tipofunc '<'listDeclVar'>' ':' body return declararFun 
|
;

/* aqui ele vai receber o tipo função por isso criei esta ER*/
tipofunc: ID  { $<ident>$ = strdup($<ident>1); strcpy(tipoSimbolo, "FUNCAO"); adcSimb(&tabela, tipo, $<ident>1, yylineno, tipoSimbolo);strcpy(tipo, ""); TypeIsCorrect($<ident>1,  $<ident>1);}
;

/* para fazer isso teria que avançar o yytext*/
listDeclVar: identificador MINUS datatype listDeclVarVirg
|  
;

listDeclVarVirg: ',' listDeclVar
|
;

listValue: value listValueVirg {TypeIsCorrect($<ident>1, $<ident>1);}
|  
;

listValueVirg: ',' listValue
|
;

acessarVetOuStruct: identificador acessarVetOuStructLoop
| const acessarVetOuStructLoop
;

acessarVetOuStructLoop: '.' acessarVetOuStruct
|
;

return: RETURN value
|
;

datatype: INT {strcpy(tipo, "INT");}
| FLOAT {strcpy(tipo, "FLOAT");}
| CHAR {strcpy(tipo, "CHAR");}
| DOUBLE {strcpy(tipo, "DOUBLE");}
| VOID   {strcpy(tipo,"VOID");}
| STRUCT {strcpy(tipo,"STRUCT");} 
;

identificador: ID { $<ident>$ = strdup($<ident>1); strcpy(tipoSimbolo, "VARIAVEL"); adcSimb(&tabela, tipo, $<ident>1, yylineno, tipoSimbolo);strcpy(tipo, ""); TypeIsCorrect($<ident>1,  $<ident>1);}
;

%%


void yyerror(char *s) {
    printf("\n\nErro sintático próximo à linha %d\n", yylineno);
    printf("Possivel erro sintatico próximo ao termo --> %s \n\n", yytext);
    qtdErros++;
}

int main(void){
    initNo(&abstrata);
    FILE *arquivo;
    arquivo = fopen("tresEndereco.txt","w");
    fprintf(arquivo,"%s","");
    fclose(arquivo);
    iniciaArvore(&tabela);
    iniciaLista(&lista);
    printf("%d\t", yylineno);
    yyparse();
    if(qtdErros == 0){
        printf("\n\nPrograma Sintaticamente Correto\n");
        imprimirTab(tabela);
        imprimeTree(abstrata);
        printf("\n%d", calculo(abstrata));
        percorrerLista(&lista);
    }
    return 0;
}

