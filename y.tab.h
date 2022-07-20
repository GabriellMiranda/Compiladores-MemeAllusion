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
    FALSE = 258,                   /* FALSE  */
    TRUE = 259,                    /* TRUE  */
    LETRA = 260,                   /* LETRA  */
    DECIMAL = 261,                 /* DECIMAL  */
    NUMERO = 262,                  /* NUMERO  */
    ID = 263,                      /* ID  */
    INT = 264,                     /* INT  */
    FLOAT = 265,                   /* FLOAT  */
    DOUBLE = 266,                  /* DOUBLE  */
    CHAR = 267,                    /* CHAR  */
    STRUCT = 268,                  /* STRUCT  */
    ILAVAMOSNOS = 269,             /* ILAVAMOSNOS  */
    RECEBA = 270,                  /* RECEBA  */
    MENORQUE = 271,                /* MENORQUE  */
    MAIORQUE = 272,                /* MAIORQUE  */
    GEMEAS = 273,                  /* GEMEAS  */
    NOTIGUAL = 274,                /* NOTIGUAL  */
    MENORIGUALQUE = 275,           /* MENORIGUALQUE  */
    MAIORIGUALQUE = 276,           /* MAIORIGUALQUE  */
    II = 277,                      /* II  */
    OU = 278,                      /* OU  */
    CONTINUE = 279,                /* CONTINUE  */
    TYPEDEF = 280,                 /* TYPEDEF  */
    RETURN = 281,                  /* RETURN  */
    PRINTF = 282,                  /* PRINTF  */
    FOR = 283,                     /* FOR  */
    WHILE = 284,                   /* WHILE  */
    IF = 285,                      /* IF  */
    ELSE = 286,                    /* ELSE  */
    CASE = 287,                    /* CASE  */
    SWITCH = 288,                  /* SWITCH  */
    GOTO = 289,                    /* GOTO  */
    MALLOC = 290,                  /* MALLOC  */
    SIZEOF = 291,                  /* SIZEOF  */
    BREAK = 292,                   /* BREAK  */
    STR = 293,                     /* STR  */
    LEIAME = 294,                  /* LEIAME  */
    DEFAULT = 295,                 /* DEFAULT  */
    PLUS = 296,                    /* PLUS  */
    MINUS = 297,                   /* MINUS  */
    DIV = 298,                     /* DIV  */
    MULT = 299,                    /* MULT  */
    EXP = 300,                     /* EXP  */
    DO = 301                       /* DO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define FALSE 258
#define TRUE 259
#define LETRA 260
#define DECIMAL 261
#define NUMERO 262
#define ID 263
#define INT 264
#define FLOAT 265
#define DOUBLE 266
#define CHAR 267
#define STRUCT 268
#define ILAVAMOSNOS 269
#define RECEBA 270
#define MENORQUE 271
#define MAIORQUE 272
#define GEMEAS 273
#define NOTIGUAL 274
#define MENORIGUALQUE 275
#define MAIORIGUALQUE 276
#define II 277
#define OU 278
#define CONTINUE 279
#define TYPEDEF 280
#define RETURN 281
#define PRINTF 282
#define FOR 283
#define WHILE 284
#define IF 285
#define ELSE 286
#define CASE 287
#define SWITCH 288
#define GOTO 289
#define MALLOC 290
#define SIZEOF 291
#define BREAK 292
#define STR 293
#define LEIAME 294
#define DEFAULT 295
#define PLUS 296
#define MINUS 297
#define DIV 298
#define MULT 299
#define EXP 300
#define DO 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 55 "translate.y"

    int valor;
    char *ident;

#line 164 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
