%{
    #include "ArvoreP.c"
    #include "ArvoreP.h"
    #include "translate2.tab.h"
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


    char var1[100];
    char var2[100];
    ArvorePatricia *tabela;

     void TypeIsCorrect(char *var1, char *var2){
    	char *tipo1 = (char*)malloc(100 * sizeof(char));
    	char *tipo2 = (char*)malloc(100 * sizeof(char));
    	buscar(var1,tabela,tipo1);
    	buscar(var2,tabela,tipo2);
    	if(strcmp(tipo1,"") == 0){
    	    printf("\nErro semântico na linha %d, termo '%s' não foi declarado\n",yylineno,var1);
            exit(0);
    	}
    	else if(strcmp(tipo2,"") == 0){
            printf("\nErro semântico na linha %d, termo '%s' não foi declarado\n",yylineno,var2);
            exit(0);
        }
        else{
            if(strcmp(tipo1,tipo2) != 0){
                printf("\nErro semântico na linha %d, Os tipos dos termos '%s' e '%s' são incompatíveis\n",yylineno-1,var1,var2);
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
| identificador ATRIBUICAO value FIMEXPRESSAO body
| switch case body
| DO ':' body FIMDECLARACOES while ':' body FIMDECLARACOES body
|
;

statement: identificador ATRIBUICAO expression {TypeIsCorrect($<ident>1,  $<ident>3);}
| identificador ATRIBUICAO funcao
| identificador ATRIBUICAO value relop value
| funcao 
;
switch: SWITCH '<' value '>' ':';

case: CASE value ':' body  FIMDECLARACOES case  
| DEFAULT ':' body  FIMDECLARACOES
| 
;

funcao: identificador'.'RUN'<'listValue'>';

printf: PRINTF'.'RUN '<' STR listValueVirg'>' 
;

for: FOR '<' identificador ATRIBUICAO value ';' condition ';'  identificador ATRIBUICAO expression '>';


while: WHILE '<' condition '>';

if: IF '<' condition '>'  ;

condition: value relop value
| TRUE {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
| FALSE {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
;

value: const
| STR
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



expression: value aritmetica expression {TypeIsCorrect($<ident>1,  $<ident>3);}
| value
;

aritmetica: PLUS {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
| MINUS {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
| MULT {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
| DIV {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
| EXP {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
;



declaraVariaveis: DECLARARVARIAVEIS ':' declararVar  ;

declararVar: datatype identificador '|' declararVar
| STRUCT ':' declararVar  NOMEARSTRUCT identificador declararVar
| vetor '|' declararVar
|
;

vetor: datatype identificador NOMEARSTRUCT value FIMDECLARACOES ;

implementaFuncoes: IMPLEMENTARFUNCOES ':' declararFun ;

declararFun: '<'datatype'>' identificador '<'listDeclVar'>' ':' body return declararFun
|
;

listDeclVar: identificador MINUS datatype listDeclVarVirg
|  
;

listDeclVarVirg: ',' listDeclVar
|
;

listValue: value listValueVirg
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

identificador: ID { $<ident>$ = strdup($<ident>1); strcpy(tipoSimbolo, "VARIAVEL"); adcSimb(&tabela, tipo, $<ident>1, yylineno, tipoSimbolo);strcpy(tipo, "");}
;

%%


void yyerror(char *s) {
    printf("\n\nErro sintático próximo à linha %d\n", yylineno);
    printf("Possivel erro sintatico próximo ao termo --> %s \n\n", yytext);
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

