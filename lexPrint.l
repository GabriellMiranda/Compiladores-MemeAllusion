%{
  int linha = 1;
  #include <stdio.h>
%}

/* This tells flex to read only one input file */

%option noyywrap
%x comment

delim [ \t]
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
erro [.]|[^]|[~]|[$]]

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
\n                {linha++;}
"//"              {BEGIN(comment);printf("Comentario ignorado:: ");}
<comment>\n       {linha++;}
<comment>"//"     {BEGIN(INITIAL);printf("\n");}
{ws}              {/*nenhuma acao e nehum retorno*/}
{int}             {printf("-> %s\n", yytext);}
{float}           {printf("-> %s\n", yytext);}
{double}          {printf("-> %s\n", yytext);}
{char}            {printf("-> %s\n", yytext);}
{struct}          {printf("-> %s\n", yytext);}
{boolean}         {printf("-> %s\n", yytext);}
{numero}          {printf("-> %s\n", yytext);}


"leiame"          {printf("-> %s\n", yytext);}
"ilaVamosNos"     {printf("-> %s\n", yytext);}
"receba"          {printf("-> %s\n", yytext);}

{continue}        {printf("-> %s\n", yytext);}
{typedef}         {printf("-> %s\n", yytext);}
{do}              {printf("-> %s\n", yytext);}
{return}          {printf("-> %s\n", yytext);}
{printf}          {printf("-> %s\n", yytext);}
{for}             {printf("-> %s\n", yytext);}
{while}           {printf("-> %s\n", yytext);}
{if}              {printf("-> %s\n", yytext);}
{else}            {printf("-> %s\n", yytext);}
{case}            {printf("-> %s\n", yytext);}
{switch}          {printf("-> %s\n", yytext);}
{goto}            {printf("-> %s\n", yytext);}
{malloc}	        {printf("-> %s\n", yytext);}
{sizeof}          {printf("-> %s\n", yytext);}
{ponteiro}        {printf("-> %s\n", yytext);}
{break}		        {printf("-> %s\n", yytext);}



{operadores}      {printf("-> %s\n", yytext);}
{operadoresLogic} {printf("-> %s\n", yytext);}
{id}              {printf("-> %s\n", yytext);}
\(                {printf("-> %s\n", yytext);}
\)                {printf("-> %s\n", yytext);}
\;                {printf("-> %s\n", yytext);}
\:                {printf("-> %s\n", yytext);}
\{                {printf("-> %s\n", yytext);}
\}                {printf("-> %s\n", yytext);}
\,                {printf("-> %s\n", yytext);}
{erro}            {printf(":: Erro Léxico :: Linha -> %d Erro de lexema: %s\n",linha, yytext);}



%%

int main(void) {
    yylex();
    return 0;
}