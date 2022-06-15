%{
    #include <stdio.h>
/*codigo colocado aqui aparece no arquivo gerado pelo flex*/
%}
/* This tells flex to read only one input file */
%option noyywrap


delim       [ \t\n]
ws      {delim}+
 
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

{printf} {printf("Foi encontrado um print. Lexema: %s\n", yytext);}
{for} {printf("Foi encontrado um for. Lexema: %s\n", yytext);}
{while} {printf("Foi encontrado um while. Lexema: %s\n", yytext);}
{if} {printf("Foi encontrado um if. Lexema: %s\n", yytext);}
{else} {printf("Foi encontrado um else. Lexema: %s\n", yytext);}
{case} {printf("Foi encontrado um case. Lexema: %s\n", yytext);}
{switch} {printf("Foi encontrado um switch. Lexema: %s\n", yytext);}
{goto} {printf("Foi encontrado um goto. Lexema: %s\n", yytext);}
{continue} {printf("Foi encontrado um continue. Lexema: %s\n", yytext);}
{sizeof} {printf("Foi encontrado um sizeof. Lexema: %s\n", yytext);}
{do} {printf("Foi encontrado um do. Lexema: %s\n", yytext);}




%%
/*codigo em C. Foi criado o main, mas podem ser criadas outras funcoes aqui.*/
int main(void)
{
    /* Call the lexer, then quit. */
    yylex();
    return 0;
}