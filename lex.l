%{
  #include <stdio.h>
  #include <string.h>
  #include "y.tab.h"
  void yyerror_lex(char *s);

%}

/* This tells flex to read only one input file */

%option noyywrap
%option yylineno 


/*definições regulares*/
delim [ \t]
ws {delim}+
digito [0-9]
numero ((-){digito}+|(\+){digito}+|{digito}+)
letra [a-zA-Z]
decimal ({numero})(\.{digito}+)?(E[+]?{digito}+)?
comentario  [@]([^@]|\n)*[@]
ponteiro _x9{letra}+


id {letra}({letra}|{digito})*
/*regras*/
%%

{ws}                     {printf("%s", yytext);}
\n                       {printf("\n%d\t", yylineno);}

{comentario}             {printf("%s",yytext);}


"natashacaldeirao"       {printf("%s", yytext); return(INT);}//OK
"cazemito"               {printf("%s", yytext); return(FLOAT);}//OK
"wanessa"                {printf("%s", yytext); return(DOUBLE);}//OK
"marinho"                {printf("%s", yytext); return(CHAR);}//OK
"juliete"                {printf("%s", yytext); return(STRUCT);}
"irineu"                 {printf("%s", yytext); return(VOID);}

"+"                      {printf("%s", yytext); return(PLUS);}//OK
"-"                      {printf("%s", yytext); return(MINUS);}//OK
"*"                      {printf("%s", yytext); return(MULT);}//OK
"/"                      {printf("%s", yytext); return(DIV);}//OK
"**"                     {printf("%s", yytext); return(EXP);}//OK

"opaitaon"               {printf("%s", yytext); return(TRUE);}//OK
"opaitaoff"              {printf("%s", yytext); return(FALSE);}//OK


"tobecontinua"           {printf("%s", yytext); return(CONTINUE);}
"tipoisso"               {printf("%s", yytext); return(TYPEDEF);}
"celokocachoeira"        {printf("%s", yytext); return(DECLARARVARIAVEIS);}
"memear"                 {printf("%s", yytext); return(RUN);}
"querocafeee"            {printf("%s", yytext); return(IMPLEMENTARFUNCOES);}
"soprusmenino"           {printf("%s", yytext); return(SCANF);}
"receba"                 {printf("%s", yytext); return(ATRIBUICAO);}//OK

"mopaz"                  {printf("%s", yytext); return(MENORQUE);}//OK 
"umpoucomais"            {printf("%s", yytext); return(MAIORQUE);}//OK
"dorime"                 {printf("%s", yytext); return(IGUALDADE);}//OK
"deixadeserfalsa"        {printf("%s", yytext); return(NOTIGUAL);}//OK
"pioral"                 {printf("%s", yytext); return(MENORIGUALQUE);}//OK
"maioral"                {printf("%s", yytext); return(MAIORIGUALQUE);}//OK
"ihmane"                 {printf("%s", yytext); return(AND);}//OK
"tapassada"              {printf("%s", yytext); return(OR);}//OK

"acertoumizeravi"        {printf("%s", yytext); return(RETURN);}//OK
"padraozinho"            {printf("%s", yytext); return(DEFAULT);}//OK
"seligaein"              {printf("%s", yytext); return(PRINTF);}
"paraze"                 {printf("%s", yytext); return(FOR);}
"uaiso"                  {printf("%s", yytext); return(WHILE);}
"masoqueeisso"           {printf("%s", yytext); return(IF);}//OK
"quediafoiisso"          {printf("%s", yytext); return(ELSE);}//OK
"botaumcropped"          {printf("%s", yytext); return(CASE);}
"reage"                  {printf("%s", yytext); return(SWITCH);}
"aloka"	                 {printf("%s", yytext); return(MALLOC);}
"mariacururu"            {printf("%s", yytext); return(SIZEOF);}
"parecomisso"	           {printf("%s", yytext); return(BREAK);}
"ameno"                  {printf("%s", yytext); return(DO);}
"allude"                 {printf("%s", yytext); return(MAIN);}

":)"                {printf("%s", yytext); return(FIMMAIN);}
";("                {printf("%s", yytext); return(FIMDECODIGO);}
":|"                {printf("%s", yytext);return(FIMEXPRESSAO);} 
"<-"                {printf("%s", yytext);return(FIMDECLARACOES);}
"->"                {printf("%s", yytext);return(NOMEARSTRUCT);}
"|"                 {printf("%s", yytext); return('|');}
":"                 {printf("%s", yytext); return(':');}
"<"                 {printf("%s", yytext); return('<');}
">"                 {printf("%s", yytext); return('>');}
";"                 {printf("%s", yytext); return(';');}
","                 {printf("%s", yytext); return(',');}
"."                 {printf("%s", yytext); return('.');}

{id}              {printf("%s", yytext); yylval.ident = strdup(yytext); return (ID);}//OK
{numero}          {printf("%s", yytext); yylval.ident = strdup(yytext); return(NUMERO);}//OK
{decimal}         {printf("%s", yytext); yylval.ident = strdup(yytext); return(DECIMAL);}//OK
{ponteiro}        {printf("%s",yytext);}
["].*["]          {printf("%s", yytext); return(STR);}//OK
[']{letra}['']    {printf("%s", yytext); return(CHAR);}//OK

.                  {yyerror_lex(yytext);}
%%

void yyerror_lex(char *s) {
    printf("\n\nErro léxico próximo a linha %d, Lexema não reconhecido: %s\n", yylineno, s);
    exit(0);
}

int yywarp(void){
  return 1;
}