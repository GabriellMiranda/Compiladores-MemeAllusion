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

#ifndef YY_YY_TRANSLATE_TAB_H_INCLUDED
# define YY_YY_TRANSLATE_TAB_H_INCLUDED
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
     INT = 258,
     FLOAT = 259,
     DOUBLE = 260,
     CHAR = 261,
     STRUCT = 262,
     FALSE = 263,
     TRUE = 264,
     LETRA = 265,
     DECIMAL = 266,
     NEGATIVO = 267,
     POSITIVO = 268,
     ID = 269,
     ILAVAMOSNOS = 270,
     RECEBA = 271,
     MENORQUE = 272,
     MAIORQUE = 273,
     GEMEAS = 274,
     NOTIGUAL = 275,
     MENORIGUALQUE = 276,
     MAIORIGUALQUE = 277,
     II = 278,
     OU = 279,
     CONTINUE = 280,
     TYPEDEF = 281,
     RETURN = 282,
     PRINTF = 283,
     FOR = 284,
     WHILE = 285,
     IF = 286,
     ELSE = 287,
     CASE = 288,
     SWITCH = 289,
     GOTO = 290,
     MALLOC = 291,
     SIZEOF = 292,
     PONTEIRO = 293,
     BREAK = 294,
     STR = 295,
     LEIAME = 296,
     NUMERO = 297,
     PLUS = 298,
     MINUS = 299,
     DIV = 300,
     MULT = 301,
     EXP = 302,
     DO = 303
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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

#endif /* !YY_YY_TRANSLATE_TAB_H_INCLUDED  */
