%{
  #include <stdio.h>
%}

/* This tells flex to read only one input file */

%option noyywrap


delim [ \t\n]
ws {delim}+
digito [0-9]
numero {digito}+|([-]{digito}+)
letra [a-zA-Z]
decimal ({positivo}|{negativo})(\.{digito}+)?(E[+]?{digito}+)?
ponteiro (_x9){letra}+
break ["parecomisso"]
boolean ("realmente"|"mentiraa")
operadores  \+|\-|\*|\/|\*\*
operadoresLogic ("MenorQue"|"MaiorQue"|"gemeas"|"notIgual"|"MenorIgualQue"|"MaiorIgualQue"|"ii"|"ou")
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
return "lei3Newton"
do "faz"


float "Thais"
double "Fabricio"
char "Nacif"
struct "fusao"
int "Daniel"
sizeof "saizonof"
malloc "alok"
id {letra}({letra}|{digito})*

/*regras*/
%%
{ws}              {/*nenhuma acao e nehum retorno*/}

{int}             {printf("Foi encontrado um tipo int. Lexema: %s\n", yytext);}
{float}           {printf("Foi encontrado um tipo float. Lexema: %s\n",yytext);}
{double}          {printf("Foi encontrado tipo double. Lexema: %s\n",yytext);}
{char}            {printf("Foi encontrado um tipo char. Lexema: %s\n",yytext);}
{struct}          {printf("Foi encontrado uma struct. Lexema: %s\n",yytext);}
{boolean}         {printf("Foi ecnontrado um boolean. Lexema: %s\n", yytext);}
{numero}          {printf("Foi encontrado um numero. Lexema: %s\n", yytext);}


"leiame"          {printf("Foi encontrado um scanf. Lexema: %s\n", yytext);}
"ilaVamosNos"     {printf("Foi encontrado a main. Lexema: %s\n", yytext);}

{continue}        {printf("Foi encontrado um 'continue'. Lexema: %s\n",yytext);}
{typedef}         {printf("Foi encontrado um 'typedef'. Lexema: %s\n",yytext);}
{do}              {printf("Foi encontrado um 'do'. Lexema: %s\n",yytext);}
{return}          {printf("Foi encontrado um return. Lexema: %s\n",yytext);}
{printf}          {printf("Foi encontrado um print. Lexema: %s\n", yytext);}
{for}             {printf("Foi encontrado um for. Lexema: %s\n", yytext);}
{while}           {printf("Foi encontrado um while. Lexema: %s\n", yytext);}
{if}              {printf("Foi encontrado um if. Lexema: %s\n", yytext);}
{else}            {printf("Foi encontrado um else. Lexema: %s\n", yytext);}
{case}            {printf("Foi encontrado um case. Lexema: %s\n", yytext);}
{switch}          {printf("Foi encontrado um switch. Lexema: %s\n", yytext);}
{goto}            {printf("Foi encontrado um goto. Lexema: %s\n", yytext);}
{malloc}	        {printf("Foi encontrado um malloc. Lexema: %s\n", yytext);}
{sizeof}          {printf("Foi encontrado um sizeof. Lexema: %s\n", yytext);}
{ponteiro}        {printf("Foi encontrado um ponteiro. Lexema: %s\n", yytext);}
{break}		        {printf("Foi encontrado um break. Lexema: %s\n", yytext);}



{operadores}      {printf("Foi encontrado um operador. Lexema: %s\n", yytext);}
{operadoresLogic} {printf("Foi encontrado um operadoresLogicos. Lexema: %s\n", yytext);}
{id}              {printf("Foi encontrado um id. Lexema: %s\n", yytext);}
\(                {printf("Foi encontrado um abreParentese. Lexema: %s\n", yytext);}  
\)                {printf("Foi ecnontrado um fechaParentese. Lexema: %s\n", yytext);}
\;                {printf("Foi encontrado um ponto e virgula. Lexema: %s\n", yytext);}
\:                {printf("Foi encontrado um dois pontos. Lexema: %s\n", yytext);}
\{                {printf("Foi encontrado um inicio de escopo. Lexema: %s\n", yytext);}
\}                {printf("Foi encontrado um fim de escopo. Lexema: %s\n", yytext);}



%%

int main(void) {
    yylex();
    return 0;
}
