%{
  #include <stdio.h>
%}

/* This tells flex to read only one input file */

%option noyywrap

delim [ \t\n]
ws {delim}+

typedef   "tipoIsso"
continue  "toBeContinua"
False "mentiraa"
True  "realmente"
digito [0-9]
letra [A-Za-z]
positivo ((\+){digito}+)|{digito}+
negativo (-){digito}+
decimal ({positivo}|{negativo})(\.{digito}+)?(E[+]?{digito}+)?
id {letra}+({letra}+|{digito}+)
printf "seliga"
for "paraZe"
while "uaiou"
if "hipotese"
else "quediafoisso"
case "cazemito"
switch "trocar"
goto "vai"
continue "toBecontinua"
return "lei3Newton"
sizeof "tamanho"
do "faz"

%%

{False}   {printf("Achei um 'False'. LEXEMA %s\n",yytext);}
{True}    {printf("Achei um 'True'.LEXEMA %s\n",yytext);}
{ws}      {/*nenhuma acao e nehum retorno*/}
{continue}        {printf("Achei um 'continue' .LEXEMA %s\n",yytext);}
{typedef}        {printf("Achei um 'typedef' .LEXEMA %s\n",yytext);}
{do}        {printf("Achei um 'do' .LEXEMA %s\n",yytext);}
{return}        {printf("Achei um return .LEXEMA %s\n",yytext);}
{printf} {printf("Foi encontrado um print. Lexema: %s\n", yytext);}
{for} {printf("Foi encontrado um for. Lexema: %s\n", yytext);}
{while} {printf("Foi encontrado um while. Lexema: %s\n", yytext);}
{if} {printf("Foi encontrado um if. Lexema: %s\n", yytext);}
{else} {printf("Foi encontrado um else. Lexema: %s\n", yytext);}
{case} {printf("Foi encontrado um case. Lexema: %s\n", yytext);}
{switch} {printf("Foi encontrado um switch. Lexema: %s\n", yytext);}
{goto} {printf("Foi encontrado um goto. Lexema: %s\n", yytext);}
{sizeof} {printf("Foi encontrado um sizeof. Lexema: %s\n", yytext);}
"receba"    {printf("Achei uma atribuicao .LEXEMA %s\n",yytext);}
"MenorQue"      {printf("Achei um sinal '<'.LEXEMA %s\n",yytext);}
"MaiorQue"      {printf("Achei um sinal '>'.LEXEMA %s\n",yytext);}
"gemeas"      {printf("Achei um sinal '=='.LEXEMA %s\n",yytext);}
"notIgual"      {printf("Achei um sinal '!='.LEXEMA %s\n",yytext);}
"MenorIgualQue"      {printf("Achei um sinal '<='.LEXEMA %s\n",yytext);}
"MaiorIgualQue"      {printf("Achei um sinal '>='.LEXEMA %s\n",yytext);}
"ii"      {printf("Achei um sinal '&&'.LEXEMA %s\n",yytext);}
"ou"      {printf("Achei um sinal '||'.LEXEMA %s\n",yytext);}

%%

int main(void) {
    yylex();
    return 0;
}