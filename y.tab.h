/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    Thais = 258,                   /* Thais  */
    Daniel = 259,                  /* Daniel  */
    Fabricio = 260,                /* Fabricio  */
    Glaucia = 261,                 /* Glaucia  */
    Nacif = 262,                   /* Nacif  */
    id = 263,                      /* id  */
    uaiu = 264,                    /* uaiu  */
    paraZe = 265,                  /* paraZe  */
    letra = 266,                   /* letra  */
    decimal = 267,                 /* decimal  */
    positivo = 268,                /* positivo  */
    negativo = 269,                /* negativo  */
    parecomisso = 270,             /* parecomisso  */
    casemito = 271,                /* casemito  */
    toBeContinua = 272,            /* toBeContinua  */
    quediafoisso = 273,            /* quediafoisso  */
    MenorQue = 274,                /* MenorQue  */
    MaiorQue = 275,                /* MaiorQue  */
    MenorIgualQue = 276,           /* MenorIgualQue  */
    MaiorIgualQue = 277,           /* MaiorIgualQue  */
    gemeas = 278,                  /* gemeas  */
    notIgual = 279,                /* notIgual  */
    ii = 280,                      /* ii  */
    ou = 281                       /* ou  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define Thais 258
#define Daniel 259
#define Fabricio 260
#define Glaucia 261
#define Nacif 262
#define id 263
#define uaiu 264
#define paraZe 265
#define letra 266
#define decimal 267
#define positivo 268
#define negativo 269
#define parecomisso 270
#define casemito 271
#define toBeContinua 272
#define quediafoisso 273
#define MenorQue 274
#define MaiorQue 275
#define MenorIgualQue 276
#define MaiorIgualQue 277
#define gemeas 278
#define notIgual 279
#define ii 280
#define ou 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
