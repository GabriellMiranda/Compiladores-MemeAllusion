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
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    DOUBLE = 260,                  /* DOUBLE  */
    CHAR = 261,                    /* CHAR  */
    STRUCT = 262,                  /* STRUCT  */
    FALSE = 263,                   /* FALSE  */
    TRUE = 264,                    /* TRUE  */
    LETRA = 265,                   /* LETRA  */
    DECIMAL = 266,                 /* DECIMAL  */
    NEGATIVO = 267,                /* NEGATIVO  */
    POSITIVO = 268,                /* POSITIVO  */
    ID = 269,                      /* ID  */
    ILAVAMOSNOS = 270,             /* ILAVAMOSNOS  */
    RECEBA = 271,                  /* RECEBA  */
    MENORQUE = 272,                /* MENORQUE  */
    MAIORQUE = 273,                /* MAIORQUE  */
    GEMEAS = 274,                  /* GEMEAS  */
    NOTIGUAL = 275,                /* NOTIGUAL  */
    MENORIGUALQUE = 276,           /* MENORIGUALQUE  */
    MAIORIGUALQUE = 277,           /* MAIORIGUALQUE  */
    II = 278,                      /* II  */
    OU = 279,                      /* OU  */
    CONTINUE = 280,                /* CONTINUE  */
    TYPEDEF = 281,                 /* TYPEDEF  */
    RETURN = 282,                  /* RETURN  */
    PRINTF = 283,                  /* PRINTF  */
    FOR = 284,                     /* FOR  */
    WHILE = 285,                   /* WHILE  */
    IF = 286,                      /* IF  */
    ELSE = 287,                    /* ELSE  */
    CASE = 288,                    /* CASE  */
    SWITCH = 289,                  /* SWITCH  */
    GOTO = 290,                    /* GOTO  */
    MALLOC = 291,                  /* MALLOC  */
    SIZEOF = 292,                  /* SIZEOF  */
    BREAK = 293,                   /* BREAK  */
    STR = 294,                     /* STR  */
    LEIAME = 295,                  /* LEIAME  */
    NUMERO = 296,                  /* NUMERO  */
    DEFAULT = 297,                 /* DEFAULT  */
    PLUS = 298,                    /* PLUS  */
    MINUS = 299,                   /* MINUS  */
    DIV = 300,                     /* DIV  */
    MULT = 301,                    /* MULT  */
    EXP = 302,                     /* EXP  */
    DO = 303                       /* DO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define FLOAT 259
#define DOUBLE 260
#define CHAR 261
#define STRUCT 262
#define FALSE 263
#define TRUE 264
#define LETRA 265
#define DECIMAL 266
#define NEGATIVO 267
#define POSITIVO 268
#define ID 269
#define ILAVAMOSNOS 270
#define RECEBA 271
#define MENORQUE 272
#define MAIORQUE 273
#define GEMEAS 274
#define NOTIGUAL 275
#define MENORIGUALQUE 276
#define MAIORIGUALQUE 277
#define II 278
#define OU 279
#define CONTINUE 280
#define TYPEDEF 281
#define RETURN 282
#define PRINTF 283
#define FOR 284
#define WHILE 285
#define IF 286
#define ELSE 287
#define CASE 288
#define SWITCH 289
#define GOTO 290
#define MALLOC 291
#define SIZEOF 292
#define BREAK 293
#define STR 294
#define LEIAME 295
#define NUMERO 296
#define DEFAULT 297
#define PLUS 298
#define MINUS 299
#define DIV 300
#define MULT 301
#define EXP 302
#define DO 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
