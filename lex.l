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
positivo ((\+){digito}+|{digito}+)
negativo (-){digito}+
numero ((-){digito}+|(\+){digito}+)
letra [a-zA-Z]
decimal ({positivo}|{negativo})(\.{digito}+)?(E[+]?{digito}+)?
ponteiro (_x9){letra}+
comentario  [//]([^@]|\n)*[@]
simbolos [-()<>=+*/;{}.]  

break "parecomisso"
typedef   "tipoIsso"
continue  "toBeContinua"
printf "seliga"
for "paraZe"
while "uaiou"
if "hipotese"
else "quediafoisso"
case "cazemito"
switch "trocar"
goto "vai"
return "leiNewton"
do "faz"
erro [.]|[^]|[~]|[$]

float "Thais"
double "Fabricio"
char "Nacif"
int "Daniel"

struct "fusao"
sizeof "saizonof"
malloc "alok"
id {letra}({letra}|{digito})*

/*regras*/
%%

{ws}              {printf("%s", yytext);}
\n                {printf("\n%d\t", yylineno);}

{comentario}\n      { }

{int}             {printf("%s", yytext); return(INT);}//OK
{float}           {printf("%s", yytext); return(FLOAT);}//OK
{double}          {printf("%s", yytext); return(DOUBLE);}//OK
{char}            {printf("%s", yytext); return(CHAR);}//OK
{struct}          {printf("%s", yytext); return(STRUCT);}

"+"                {printf("%s", yytext); return(PLUS);}//OK
"-"                {printf("%s", yytext); return(MINUS);}//OK
"*"                {printf("%s", yytext); return(MULT);}//OK
"/"                {printf("%s", yytext); return(DIV);}//OK
"**"               {printf("%s", yytext); return(EXP);}//OK

"realmente"       {printf("%s", yytext); return(FALSE);}//OK
"mentira"         {printf("%s", yytext); return(TRUE);}//OK


{continue}        {printf("%s", yytext); return(CONTINUE);}
{typedef}         {printf("%s", yytext); return(TYPEDEF);}

"leiame"          {printf("%s", yytext); return(LEIAME);}
"ilaVamosNos"     {printf("%s", yytext); return(ILAVAMOSNOS);}//OK
"receba"          {printf("%s", yytext); return(RECEBA);}//OK
"MenorQue"        {printf("%s", yytext); return(MENORQUE);}//OK
"MaiorQue"        {printf("%s", yytext); return(MAIORQUE);}//OK
"gemeas"          {printf("%s", yytext); return(GEMEAS);}//OK
"notIgual"        {printf("%s", yytext); return(NOTIGUAL);}//OK
"MenorIgualQue"   {printf("%s", yytext); return(MENORIGUALQUE);}//OK
"MaiorIgualQue"   {printf("%s", yytext); return(MAIORIGUALQUE);}//OK
"ii"              {printf("%s", yytext); return(II);}//OK
"ou"              {printf("%s", yytext); return(OU);}//OK

{return}          {printf("%s", yytext); return(RETURN);}//OK
{printf}          {printf("%s", yytext); return(PRINTF);}
{for}             {printf("%s", yytext); return(FOR);}
{while}           {printf("%s", yytext); return(WHILE);}
{if}              {printf("%s", yytext); return(IF);}//OK
{else}            {printf("%s", yytext); return(ELSE);}//OK
{case}            {printf("%s", yytext); return(CASE);}
{switch}          {printf("%s", yytext); return(SWITCH);}
{goto}            {printf("%s", yytext); return(GOTO);}
{malloc}	        {printf("%s", yytext); return(MALLOC);}
{sizeof}          {printf("%s", yytext); return(SIZEOF);}
{ponteiro}        {printf("%s", yytext); return(PONTEIRO);}
{break}		        {printf("%s", yytext); return(BREAK);}
{do}              {printf("%s", yytext); return(DO);}
{id}              {printf("%s", yytext); return(ID);}//OK
{numero}          {printf("%s", yytext); return NUMERO;}//OK
{decimal}         {printf("%s", yytext); return NUMERO;}//OK

"("                {printf("%s", yytext); return('(');}//OK
")"                {printf("%s", yytext); return(')');}//OK
":"                {printf("%s", yytext); return(':');}
";"                {printf("%s", yytext); return(';');}//OK
","                {printf("%s", yytext); return(',');}
"{"                {printf("%s", yytext); return('{');}//OK
"}"                {printf("%s", yytext); return('}');}//OK


["].*["]           {printf("%s", yytext); return(STR);}//OK
%%

void yyerror_lex(char *s) {
    printf("\n\nErro léxico próximo a linha %d: %s\n", yylineno, s);
}

int yywarp(void){
  return 1;
}