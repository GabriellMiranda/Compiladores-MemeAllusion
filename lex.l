%{
  #include <stdio.h>
%}

/* This tells flex to read only one input file */

%option noyywrap


delim [ \t\n]
ws {delim}+
digito [0-9]
letra [a-zA-Z]
positivo ((\+){digito}+)|{digito}+
negativo (-){digito}+
decimal ({positivo}|{negativo})(\.{digito}+)?(E[+]?{digito}+)?
id {letra}({letra}|{digito})*
ponteiro (_x9){letra}+
multiplicacao ({positivo}|{negativo})("veis")({positivo}|{negativo})

typedef   "tipoIsso"
continue  "toBeContinua"
False "mentiraa"
True  "realmente"
printf "seliga"
for "paraZe"
while "uaiou"
if "hipotese"
else "quediafoisso"
case "cazemito"
switch "trocar"
goto "vai"
return "lei3Newton"
sizeof "tamanho"
do "faz"
true "realmente"
false "mentiraa"


/*regras*/
%%
{ws}             {/*nenhuma acao e nehum retorno*/}
"Thais" {printf("Foi encontrado um tipo float. Lexema: %s\n",yytext);}
"Fabricio" {printf("Foi encontrado tipo double. Lexema: %s\n",yytext);}
"Nacif" printf("Foi encontrado um tipo char. Lexema: %s\n",yytext);
"fusao" printf("Foi encontrado uma struct. Lexema: %s\n",yytext);

"receba"         {printf("Foi encontrado uma atribuicao '='. Lexema: %s\n",yytext);}
"MenorQue"       {printf("Foi encontrado um sinal '<'. Lexema: %s\n",yytext);}
"MaiorQue"       {printf("Foi encontrado um sinal '>'. Lexema: %s\n",yytext);}
"gemeas"         {printf("Foi encontrado um sinal '=='. Lexema: %s\n",yytext);}
"notIgual"       {printf("Foi encontrado um sinal '!='. Lexema: %s\n",yytext);}
"MenorIgualQue"  {printf("Foi encontrado um sinal '<='. Lexema: %s\n",yytext);}
"MaiorIgualQue"  {printf("Foi encontrado um sinal '>='. Lexema: %s\n",yytext);}
"ii"             {printf("Foi encontrado um sinal '&&'. Lexema: %s\n",yytext);}
"ou"             {printf("Foi encontrado um sinal '||'. Lexema: %s\n",yytext);}



{false}          {printf("Foi encontrado um 'False'. Lexema: %s\n",yytext);}
{true}           {printf("Foi encontrado um 'True'. Lexema: %s\n",yytext);}
{continue}       {printf("Foi encontrado um 'continue'. Lexema: %s\n",yytext);}
{typedef}        {printf("Foi encontrado um 'typedef'. Lexema: %s\n",yytext);}
{do}             {printf("Foi encontrado um 'do'. Lexema: %s\n",yytext);}
{return}         {printf("Foi encontrado um return. Lexema: %s\n",yytext);}
{printf}         {printf("Foi encontrado um print. Lexema: %s\n", yytext);}
{for}            {printf("Foi encontrado um for. Lexema: %s\n", yytext);}
{while}          {printf("Foi encontrado um while. Lexema: %s\n", yytext);}
{if}             {printf("Foi encontrado um if. Lexema: %s\n", yytext);}
{else}           {printf("Foi encontrado um else. Lexema: %s\n", yytext);}
{case}           {printf("Foi encontrado um case. Lexema: %s\n", yytext);}
{switch}         {printf("Foi encontrado um switch. Lexema: %s\n", yytext);}
{goto}           {printf("Foi encontrado um goto. Lexema: %s\n", yytext);}
{sizeof}         {printf("Foi encontrado um sizeof. Lexema: %s\n", yytext);}
{id}             {printf("Foi encontrado um id. Lexema: %s\n", yytext);}
{ponteiro} {printf("Foi encontrado um ponteiro. Lexema: %s\n", yytext);}
{multiplicacao} {printf("Foi encontrado uma multiplicacao. Lexema: %s\n", yytext);}

%%

int main(void) {
    yylex();
    return 0;
}