/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_TRANSLATE2_TAB_H_INCLUDED
# define YY_YY_TRANSLATE2_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FALSE = 258,
     TRUE = 259,
     LETRA = 260,
     DECIMAL = 261,
     NUMERO = 262,
     ID = 263,
     INT = 264,
     FLOAT = 265,
     DOUBLE = 266,
     CHAR = 267,
     STRUCT = 268,
     VOID = 269,
     RETURN = 270,
     ATRIBUICAO = 271,
     MENORQUE = 272,
     MAIORQUE = 273,
     IGUALDADE = 274,
     NOTIGUAL = 275,
     MENORIGUALQUE = 276,
     MAIORIGUALQUE = 277,
     AND = 278,
     OR = 279,
     CONTINUE = 280,
     TYPEDEF = 281,
     PRINTF = 282,
     FOR = 283,
     WHILE = 284,
     IF = 285,
     ELSE = 286,
     CASE = 287,
     SWITCH = 288,
     GOTO = 289,
     MALLOC = 290,
     SIZEOF = 291,
     BREAK = 292,
     STR = 293,
     SCANF = 294,
     DECLARARVARIAVEIS = 295,
     IMPLEMENTARFUNCOES = 296,
     MAIN = 297,
     RUN = 298,
     FIMEXPRESSAO = 299,
     FIMDECLARACOES = 300,
     FIMMAIN = 301,
     FIMDECODIGO = 302,
     NOMEARSTRUCT = 303,
     DEFAULT = 304,
     PLUS = 305,
     MINUS = 306,
     DIV = 307,
     MULT = 308,
     EXP = 309,
     DO = 310
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 49 "translate2.y"

    char *ident;


/* Line 2058 of yacc.c  */
#line 117 "translate2.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_TRANSLATE2_TAB_H_INCLUDED  */
