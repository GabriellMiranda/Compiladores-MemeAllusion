/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "translate.y"

    #include "Patricia/ArvoreP.c"
    #include "Patricia/ArvoreP.h"
    #include "y.tab.h"
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <ctype.h>
    #include "codigoIntermediario/codigoIntermediario.h"
    #include "codigoIntermediario/codigoIntermediario.c"
    #include "ArvoreBinaria/Tree.c"
    #include "ArvoreBinaria/Tree.h"
    No *abstrata;
    Lista lista;
    extern char *yytext;
    void yyerror(char *s);
    extern int yylineno; /* Variável responsável por armazenar a linha atual do arquivo fonte */
    int yylex();
    int yywrap();

    int qtdErros = 0; 

    char tipoSimbolo[100];
    char tipo[100];
    int linha;


    char var1[100];
    char var2[100];
    ArvorePatricia *tabela;

     void TypeIsCorrect(char *var1, char *var2){
    	char *tipo1 = (char*)malloc(100 * sizeof(char));
    	char *tipo2 = (char*)malloc(100 * sizeof(char));
    	buscar(var1,tabela,tipo1);
    	buscar(var2,tabela,tipo2);
    	if(strcmp(tipo1,"") == 0){
    	    printf("\nErro semântico próximo a linha %d, termo '%s' não foi declarado\n",yylineno,var1);
            exit(0);
    	}
    	else if(strcmp(tipo2,"") == 0){
            printf("\nErro semântico próximo a linha %d, termo '%s' não foi declarado\n",yylineno,var2);
            exit(0);
        }
        else{
            if(strcmp(tipo1,tipo2) != 0){
                printf("\nErro semântico próximo a linha %d, Os tipos dos termos '%s' e '%s' são incompatíveis\n",yylineno-1,var1,var2);
                exit(0);
            }
        }
     }

#line 124 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    VOID = 269,                    /* VOID  */
    RETURN = 270,                  /* RETURN  */
    ATRIBUICAO = 271,              /* ATRIBUICAO  */
    MENORQUE = 272,                /* MENORQUE  */
    MAIORQUE = 273,                /* MAIORQUE  */
    IGUALDADE = 274,               /* IGUALDADE  */
    NOTIGUAL = 275,                /* NOTIGUAL  */
    MENORIGUALQUE = 276,           /* MENORIGUALQUE  */
    MAIORIGUALQUE = 277,           /* MAIORIGUALQUE  */
    AND = 278,                     /* AND  */
    OR = 279,                      /* OR  */
    CONTINUE = 280,                /* CONTINUE  */
    TYPEDEF = 281,                 /* TYPEDEF  */
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
    SCANF = 294,                   /* SCANF  */
    DECLARARVARIAVEIS = 295,       /* DECLARARVARIAVEIS  */
    IMPLEMENTARFUNCOES = 296,      /* IMPLEMENTARFUNCOES  */
    MAIN = 297,                    /* MAIN  */
    RUN = 298,                     /* RUN  */
    FIMEXPRESSAO = 299,            /* FIMEXPRESSAO  */
    FIMDECLARACOES = 300,          /* FIMDECLARACOES  */
    FIMMAIN = 301,                 /* FIMMAIN  */
    FIMDECODIGO = 302,             /* FIMDECODIGO  */
    NOMEARSTRUCT = 303,            /* NOMEARSTRUCT  */
    DEFAULT = 304,                 /* DEFAULT  */
    PLUS = 305,                    /* PLUS  */
    MINUS = 306,                   /* MINUS  */
    DIV = 307,                     /* DIV  */
    MULT = 308,                    /* MULT  */
    EXP = 309,                     /* EXP  */
    DO = 310                       /* DO  */
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
#define VOID 269
#define RETURN 270
#define ATRIBUICAO 271
#define MENORQUE 272
#define MAIORQUE 273
#define IGUALDADE 274
#define NOTIGUAL 275
#define MENORIGUALQUE 276
#define MAIORIGUALQUE 277
#define AND 278
#define OR 279
#define CONTINUE 280
#define TYPEDEF 281
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
#define SCANF 294
#define DECLARARVARIAVEIS 295
#define IMPLEMENTARFUNCOES 296
#define MAIN 297
#define RUN 298
#define FIMEXPRESSAO 299
#define FIMDECLARACOES 300
#define FIMMAIN 301
#define FIMDECODIGO 302
#define NOMEARSTRUCT 303
#define DEFAULT 304
#define PLUS 305
#define MINUS 306
#define DIV 307
#define MULT 308
#define EXP 309
#define DO 310

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 54 "translate.y"

    char *ident;

#line 291 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_FALSE = 3,                      /* FALSE  */
  YYSYMBOL_TRUE = 4,                       /* TRUE  */
  YYSYMBOL_LETRA = 5,                      /* LETRA  */
  YYSYMBOL_DECIMAL = 6,                    /* DECIMAL  */
  YYSYMBOL_NUMERO = 7,                     /* NUMERO  */
  YYSYMBOL_ID = 8,                         /* ID  */
  YYSYMBOL_INT = 9,                        /* INT  */
  YYSYMBOL_FLOAT = 10,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_CHAR = 12,                      /* CHAR  */
  YYSYMBOL_STRUCT = 13,                    /* STRUCT  */
  YYSYMBOL_VOID = 14,                      /* VOID  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_ATRIBUICAO = 16,                /* ATRIBUICAO  */
  YYSYMBOL_MENORQUE = 17,                  /* MENORQUE  */
  YYSYMBOL_MAIORQUE = 18,                  /* MAIORQUE  */
  YYSYMBOL_IGUALDADE = 19,                 /* IGUALDADE  */
  YYSYMBOL_NOTIGUAL = 20,                  /* NOTIGUAL  */
  YYSYMBOL_MENORIGUALQUE = 21,             /* MENORIGUALQUE  */
  YYSYMBOL_MAIORIGUALQUE = 22,             /* MAIORIGUALQUE  */
  YYSYMBOL_AND = 23,                       /* AND  */
  YYSYMBOL_OR = 24,                        /* OR  */
  YYSYMBOL_CONTINUE = 25,                  /* CONTINUE  */
  YYSYMBOL_TYPEDEF = 26,                   /* TYPEDEF  */
  YYSYMBOL_PRINTF = 27,                    /* PRINTF  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_WHILE = 29,                     /* WHILE  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_CASE = 32,                      /* CASE  */
  YYSYMBOL_SWITCH = 33,                    /* SWITCH  */
  YYSYMBOL_GOTO = 34,                      /* GOTO  */
  YYSYMBOL_MALLOC = 35,                    /* MALLOC  */
  YYSYMBOL_SIZEOF = 36,                    /* SIZEOF  */
  YYSYMBOL_BREAK = 37,                     /* BREAK  */
  YYSYMBOL_STR = 38,                       /* STR  */
  YYSYMBOL_SCANF = 39,                     /* SCANF  */
  YYSYMBOL_DECLARARVARIAVEIS = 40,         /* DECLARARVARIAVEIS  */
  YYSYMBOL_IMPLEMENTARFUNCOES = 41,        /* IMPLEMENTARFUNCOES  */
  YYSYMBOL_MAIN = 42,                      /* MAIN  */
  YYSYMBOL_RUN = 43,                       /* RUN  */
  YYSYMBOL_FIMEXPRESSAO = 44,              /* FIMEXPRESSAO  */
  YYSYMBOL_FIMDECLARACOES = 45,            /* FIMDECLARACOES  */
  YYSYMBOL_FIMMAIN = 46,                   /* FIMMAIN  */
  YYSYMBOL_FIMDECODIGO = 47,               /* FIMDECODIGO  */
  YYSYMBOL_NOMEARSTRUCT = 48,              /* NOMEARSTRUCT  */
  YYSYMBOL_DEFAULT = 49,                   /* DEFAULT  */
  YYSYMBOL_PLUS = 50,                      /* PLUS  */
  YYSYMBOL_MINUS = 51,                     /* MINUS  */
  YYSYMBOL_DIV = 52,                       /* DIV  */
  YYSYMBOL_MULT = 53,                      /* MULT  */
  YYSYMBOL_EXP = 54,                       /* EXP  */
  YYSYMBOL_DO = 55,                        /* DO  */
  YYSYMBOL_56_ = 56,                       /* ':'  */
  YYSYMBOL_57_ = 57,                       /* '.'  */
  YYSYMBOL_58_ = 58,                       /* '<'  */
  YYSYMBOL_59_ = 59,                       /* '>'  */
  YYSYMBOL_60_ = 60,                       /* ';'  */
  YYSYMBOL_61_ = 61,                       /* '|'  */
  YYSYMBOL_62_ = 62,                       /* ','  */
  YYSYMBOL_YYACCEPT = 63,                  /* $accept  */
  YYSYMBOL_program = 64,                   /* program  */
  YYSYMBOL_body = 65,                      /* body  */
  YYSYMBOL_statement = 66,                 /* statement  */
  YYSYMBOL_switch = 67,                    /* switch  */
  YYSYMBOL_case = 68,                      /* case  */
  YYSYMBOL_funcao = 69,                    /* funcao  */
  YYSYMBOL_printf = 70,                    /* printf  */
  YYSYMBOL_strprint = 71,                  /* strprint  */
  YYSYMBOL_for = 72,                       /* for  */
  YYSYMBOL_forpate1 = 73,                  /* forpate1  */
  YYSYMBOL_forpate2 = 74,                  /* forpate2  */
  YYSYMBOL_while = 75,                     /* while  */
  YYSYMBOL_if = 76,                        /* if  */
  YYSYMBOL_condition = 77,                 /* condition  */
  YYSYMBOL_value = 78,                     /* value  */
  YYSYMBOL_else = 79,                      /* else  */
  YYSYMBOL_const = 80,                     /* const  */
  YYSYMBOL_relop = 81,                     /* relop  */
  YYSYMBOL_expression = 82,                /* expression  */
  YYSYMBOL_declaraVariaveis = 83,          /* declaraVariaveis  */
  YYSYMBOL_declararVar = 84,               /* declararVar  */
  YYSYMBOL_vetor = 85,                     /* vetor  */
  YYSYMBOL_implementaFuncoes = 86,         /* implementaFuncoes  */
  YYSYMBOL_declararFun = 87,               /* declararFun  */
  YYSYMBOL_tipofunc = 88,                  /* tipofunc  */
  YYSYMBOL_listDeclVar = 89,               /* listDeclVar  */
  YYSYMBOL_listDeclVarVirg = 90,           /* listDeclVarVirg  */
  YYSYMBOL_listValue = 91,                 /* listValue  */
  YYSYMBOL_listValueVirg = 92,             /* listValueVirg  */
  YYSYMBOL_acessarVetOuStruct = 93,        /* acessarVetOuStruct  */
  YYSYMBOL_acessarVetOuStructLoop = 94,    /* acessarVetOuStructLoop  */
  YYSYMBOL_return = 95,                    /* return  */
  YYSYMBOL_datatype = 96,                  /* datatype  */
  YYSYMBOL_identificador = 97              /* identificador  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    62,     2,    57,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    60,
      58,     2,    59,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   121,   121,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   136,   137,   138,   139,   144,   146,
     147,   148,   151,   153,   156,   159,   161,   164,   167,   169,
     171,   172,   173,   176,   177,   178,   181,   182,   185,   186,
     191,   192,   193,   194,   195,   196,   197,   198,   203,   204,
     205,   206,   207,   208,   214,   216,   217,   218,   219,   222,
     224,   226,   227,   231,   235,   236,   239,   240,   243,   244,
     247,   248,   251,   252,   255,   256,   259,   260,   263,   264,
     265,   266,   267,   268,   271
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "FALSE", "TRUE",
  "LETRA", "DECIMAL", "NUMERO", "ID", "INT", "FLOAT", "DOUBLE", "CHAR",
  "STRUCT", "VOID", "RETURN", "ATRIBUICAO", "MENORQUE", "MAIORQUE",
  "IGUALDADE", "NOTIGUAL", "MENORIGUALQUE", "MAIORIGUALQUE", "AND", "OR",
  "CONTINUE", "TYPEDEF", "PRINTF", "FOR", "WHILE", "IF", "ELSE", "CASE",
  "SWITCH", "GOTO", "MALLOC", "SIZEOF", "BREAK", "STR", "SCANF",
  "DECLARARVARIAVEIS", "IMPLEMENTARFUNCOES", "MAIN", "RUN", "FIMEXPRESSAO",
  "FIMDECLARACOES", "FIMMAIN", "FIMDECODIGO", "NOMEARSTRUCT", "DEFAULT",
  "PLUS", "MINUS", "DIV", "MULT", "EXP", "DO", "':'", "'.'", "'<'", "'>'",
  "';'", "'|'", "','", "$accept", "program", "body", "statement", "switch",
  "case", "funcao", "printf", "strprint", "for", "forpate1", "forpate2",
  "while", "if", "condition", "value", "else", "const", "relop",
  "expression", "declaraVariaveis", "declararVar", "vetor",
  "implementaFuncoes", "declararFun", "tipofunc", "listDeclVar",
  "listDeclVarVirg", "listValue", "listValueVirg", "acessarVetOuStruct",
  "acessarVetOuStructLoop", "return", "datatype", "identificador", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,   -38,    40,    12,   199,  -139,     4,    22,  -139,  -139,
    -139,  -139,    16,  -139,  -139,     5,    65,    18,    21,   199,
     199,  -139,   -23,   205,  -139,    61,    26,  -139,    24,   199,
    -139,    19,    29,    23,    34,    39,    41,    61,    30,    45,
      33,    61,     7,  -139,    61,    46,    47,    48,    -2,    65,
    -139,  -139,  -139,    68,  -139,    58,  -139,   125,    91,    65,
      20,    20,    24,  -139,    92,    61,  -139,  -139,    24,    80,
      61,  -139,    61,    61,    61,    24,    95,   199,  -139,     9,
    -139,  -139,    83,    85,    84,   130,  -139,  -139,    88,   181,
      90,    94,    93,   105,    98,    61,  -139,   111,   118,   119,
    -139,   108,  -139,   109,   107,  -139,    58,  -139,    58,    65,
     129,    20,    64,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,    24,  -139,   113,   132,   142,    61,   127,    61,
      61,   143,    61,    24,    24,    24,    24,    24,    24,    14,
      24,  -139,  -139,   116,   126,  -139,   120,   121,  -139,  -139,
    -139,   120,   122,   135,  -139,  -139,  -139,   128,    61,  -139,
      57,  -139,  -139,  -139,  -139,  -139,  -139,   120,   131,   133,
     205,    24,   134,    65,   136,    61,     7,    61,  -139,  -139,
    -139,    61,   124,  -139,  -139,   137,   172,    61,   147,  -139,
     149,   191,    65,  -139,  -139,    24,  -139,    61,  -139,    24,
      18,  -139,  -139,  -139,  -139,  -139
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    58,     1,     0,     0,    78,    79,
      81,    80,    83,    82,    54,     0,     0,    62,     0,    58,
      58,    84,     0,     0,    60,    13,     0,    57,     0,    58,
      83,     0,     0,     0,     0,     0,     0,    13,     0,     0,
       0,    13,    21,    17,    13,     0,     0,     0,     0,     0,
      38,    39,    34,     0,    33,    75,    55,     0,     0,     0,
       0,     0,     0,     8,     0,    13,     2,     9,     0,     0,
      13,     7,    13,    13,    13,     0,     0,    58,    59,     0,
      35,    63,     0,     0,     0,     0,    32,    31,     0,     0,
       0,     0,     0,     0,     0,    13,    11,     0,     0,     0,
      15,    53,    14,    75,     0,    56,    75,    74,    75,    65,
       0,     0,     0,    28,    47,    46,    45,    44,    43,    42,
      41,    40,     0,    29,     0,     0,     0,    13,     0,    13,
      13,    37,    13,     0,     0,     0,     0,     0,     0,     0,
      69,    73,    72,     0,     0,    24,    71,     0,    26,    30,
      18,    71,     0,     0,    20,     3,     4,     0,    13,    10,
      53,    48,    49,    51,    50,    52,    16,    71,     0,     0,
       0,    69,     0,     0,     0,    13,    21,    13,     5,    68,
      22,    13,    67,    70,    23,     0,     0,    13,     0,    19,
       0,    77,    65,    64,    25,     0,     6,    13,    36,     0,
      62,    66,    27,    12,    76,    61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,    10,  -139,  -139,    44,   146,  -139,  -139,  -139,
    -139,  -139,    96,  -139,   -50,   -26,  -139,   -71,   123,  -130,
    -139,   -10,  -139,  -139,    25,  -139,    31,  -139,    55,  -138,
    -139,   -58,  -139,   -22,   -16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    40,    41,    42,    70,    43,    44,   146,    45,
      84,   185,    46,    47,    88,   160,   158,    54,   122,   102,
       3,    14,    15,     7,    24,    82,   143,   193,   168,   172,
     107,    80,   200,    16,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      22,    31,    53,   161,   162,   163,   164,   165,   106,    26,
      27,    90,    55,   174,    75,    50,    51,    21,     4,    56,
      50,    51,    21,    86,    87,    28,    50,    51,    21,   179,
      50,    51,    21,    77,    89,    89,    91,     1,    29,    68,
       5,   148,    94,    85,    55,    55,    55,    63,   141,   101,
     142,    67,    55,     6,    71,    76,    69,   104,    52,   103,
      17,   147,    52,   108,    18,   202,    20,   105,   106,    21,
      50,    51,    19,    21,    49,    93,    23,    25,    57,    66,
      96,    59,    97,    98,    99,    89,    58,    64,    32,    33,
      34,    35,    60,   144,    36,    55,   149,    61,    37,    62,
      38,    65,    72,    73,    74,   128,    55,   133,   134,   135,
     136,   137,   166,    78,   167,    79,    39,    55,    55,    55,
      55,    55,    55,   108,    55,   114,   115,   116,   117,   118,
     119,   120,   121,    81,    83,    92,    95,   153,   104,   155,
     156,   109,   159,   110,   111,   167,   112,   113,   182,   123,
     126,   125,   132,   124,   127,    55,   129,   186,   133,   134,
     135,   136,   137,   130,   131,   140,   139,   145,   178,   150,
     151,    34,   154,   204,   157,   169,   144,   170,   175,    55,
     176,   173,   171,    55,   177,   188,   192,   190,   195,   181,
     180,   191,   197,   184,   198,   187,   194,   196,   114,   115,
     116,   117,   118,   119,   120,   121,   199,   203,     8,     9,
      10,    11,    12,    13,     8,     9,    10,    11,    30,    13,
     189,   100,   152,   201,   138,   205,   183
};

static const yytype_uint8 yycheck[] =
{
      16,    23,    28,   133,   134,   135,   136,   137,    79,    19,
      20,    61,    28,   151,    16,     6,     7,     8,    56,    29,
       6,     7,     8,     3,     4,    48,     6,     7,     8,   167,
       6,     7,     8,    49,    60,    61,    62,    40,    61,    32,
       0,   112,    68,    59,    60,    61,    62,    37,   106,    75,
     108,    41,    68,    41,    44,    57,    49,    43,    38,    75,
      56,   111,    38,    79,    42,   195,    61,    77,   139,     8,
       6,     7,    56,     8,    48,    65,    58,    56,    59,    46,
      70,    58,    72,    73,    74,   111,    57,    57,    27,    28,
      29,    30,    58,   109,    33,   111,   122,    58,    37,    58,
      39,    56,    56,    56,    56,    95,   122,    50,    51,    52,
      53,    54,   138,    45,   140,    57,    55,   133,   134,   135,
     136,   137,   138,   139,   140,    17,    18,    19,    20,    21,
      22,    23,    24,     8,    43,    43,    56,   127,    43,   129,
     130,    58,   132,    58,    60,   171,    16,    59,   170,    59,
      45,    58,    44,    59,    56,   171,    45,   173,    50,    51,
      52,    53,    54,    45,    45,    58,    57,    38,   158,    56,
      38,    29,    45,   199,    31,    59,   192,    51,    56,   195,
      45,    60,    62,   199,    56,   175,    62,   177,    16,    56,
      59,   181,    45,    59,    45,    59,    59,   187,    17,    18,
      19,    20,    21,    22,    23,    24,    15,   197,     9,    10,
      11,    12,    13,    14,     9,    10,    11,    12,    13,    14,
     176,    75,   126,   192,   101,   200,   171
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    40,    64,    83,    56,     0,    41,    86,     9,    10,
      11,    12,    13,    14,    84,    85,    96,    56,    42,    56,
      61,     8,    97,    58,    87,    56,    84,    84,    48,    61,
      13,    96,    27,    28,    29,    30,    33,    37,    39,    55,
      65,    66,    67,    69,    70,    72,    75,    76,    97,    48,
       6,     7,    38,    78,    80,    97,    84,    59,    57,    58,
      58,    58,    58,    65,    57,    56,    46,    65,    32,    49,
      68,    65,    56,    56,    56,    16,    57,    97,    45,    57,
      94,     8,    88,    43,    73,    97,     3,     4,    77,    78,
      77,    78,    43,    65,    78,    56,    65,    65,    65,    65,
      69,    78,    82,    97,    43,    84,    80,    93,    97,    58,
      58,    60,    16,    59,    17,    18,    19,    20,    21,    22,
      23,    24,    81,    59,    59,    58,    45,    56,    65,    45,
      45,    45,    44,    50,    51,    52,    53,    54,    81,    57,
      58,    94,    94,    89,    97,    38,    71,    77,    80,    78,
      56,    38,    75,    65,    45,    65,    65,    31,    79,    65,
      78,    82,    82,    82,    82,    82,    78,    78,    91,    59,
      51,    62,    92,    60,    92,    56,    45,    56,    65,    92,
      59,    56,    96,    91,    59,    74,    97,    59,    65,    68,
      65,    65,    62,    90,    59,    16,    65,    45,    45,    15,
      95,    89,    82,    65,    78,    87
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    66,    66,    67,    68,
      68,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    77,    77,    78,    78,    78,    79,    79,    80,    80,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      82,    82,    82,    82,    83,    84,    84,    84,    84,    85,
      86,    87,    87,    88,    89,    89,    90,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      96,    96,    96,    96,    97
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     5,     5,     6,     8,     2,     2,     2,
       5,     3,     9,     0,     3,     3,     5,     1,     5,     6,
       4,     0,     6,     7,     1,     8,     3,     3,     4,     4,
       3,     1,     1,     1,     1,     2,     4,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     1,     3,     4,     6,     3,     0,     5,
       3,    11,     0,     1,     4,     0,     2,     0,     2,     0,
       2,     0,     2,     2,     2,     0,     2,     0,     1,     1,
       1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 10: /* body: identificador ATRIBUICAO value FIMEXPRESSAO body  */
#line 130 "translate.y"
                                                   {TypeIsCorrect((yyvsp[-4].ident),  (yyvsp[-2].ident));}
#line 1507 "y.tab.c"
    break;

  case 14: /* statement: identificador ATRIBUICAO expression  */
#line 136 "translate.y"
                                               {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[-1].ident));}
#line 1513 "y.tab.c"
    break;

  case 15: /* statement: identificador ATRIBUICAO funcao  */
#line 137 "translate.y"
                                  {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1519 "y.tab.c"
    break;

  case 16: /* statement: identificador ATRIBUICAO value relop value  */
#line 138 "translate.y"
                                             {TypeIsCorrect((yyvsp[-4].ident),  (yyvsp[-2].ident)); TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident)); }
#line 1525 "y.tab.c"
    break;

  case 24: /* strprint: STR  */
#line 156 "translate.y"
              {adcSimb(&tabela, "STRING", yytext, yylineno, "CONSTANTE");}
#line 1531 "y.tab.c"
    break;

  case 26: /* forpate1: identificador ATRIBUICAO const  */
#line 161 "translate.y"
                                         {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1537 "y.tab.c"
    break;

  case 27: /* forpate2: identificador ATRIBUICAO expression  */
#line 164 "translate.y"
                                              {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1543 "y.tab.c"
    break;

  case 30: /* condition: value relop value  */
#line 171 "translate.y"
                             {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1549 "y.tab.c"
    break;

  case 31: /* condition: TRUE  */
#line 172 "translate.y"
       {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
#line 1555 "y.tab.c"
    break;

  case 32: /* condition: FALSE  */
#line 173 "translate.y"
        {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
#line 1561 "y.tab.c"
    break;

  case 34: /* value: STR  */
#line 177 "translate.y"
      {adcSimb(&tabela, "STRING", yytext, yylineno, "CONSTANTE");}
#line 1567 "y.tab.c"
    break;

  case 38: /* const: DECIMAL  */
#line 185 "translate.y"
               {adcSimb(&tabela, "FLOAT", yytext, yylineno, "CONSTANTE");}
#line 1573 "y.tab.c"
    break;

  case 39: /* const: NUMERO  */
#line 186 "translate.y"
         {adcSimb(&tabela, "INT", yytext, yylineno, "CONSTANTE");}
#line 1579 "y.tab.c"
    break;

  case 40: /* relop: OR  */
#line 191 "translate.y"
          {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1585 "y.tab.c"
    break;

  case 41: /* relop: AND  */
#line 192 "translate.y"
      {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1591 "y.tab.c"
    break;

  case 42: /* relop: MAIORIGUALQUE  */
#line 193 "translate.y"
                {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1597 "y.tab.c"
    break;

  case 43: /* relop: MENORIGUALQUE  */
#line 194 "translate.y"
                {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1603 "y.tab.c"
    break;

  case 44: /* relop: NOTIGUAL  */
#line 195 "translate.y"
           {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1609 "y.tab.c"
    break;

  case 45: /* relop: IGUALDADE  */
#line 196 "translate.y"
            {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1615 "y.tab.c"
    break;

  case 46: /* relop: MAIORQUE  */
#line 197 "translate.y"
           {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1621 "y.tab.c"
    break;

  case 47: /* relop: MENORQUE  */
#line 198 "translate.y"
           {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1627 "y.tab.c"
    break;

  case 48: /* expression: value PLUS expression  */
#line 203 "translate.y"
                                  {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));insereLista(&lista,"+", 1);insereLista(&lista,(yyvsp[-2].ident), 0);insertNo(&abstrata,"+");insertNo(&abstrata,(yyvsp[-2].ident)); }
#line 1633 "y.tab.c"
    break;

  case 49: /* expression: value MINUS expression  */
#line 204 "translate.y"
                         {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));insereLista(&lista,"-", 1);insereLista(&lista,(yyvsp[-2].ident), 0);  insertNo(&abstrata,"-");insertNo(&abstrata,(yyvsp[-2].ident));}
#line 1639 "y.tab.c"
    break;

  case 50: /* expression: value MULT expression  */
#line 205 "translate.y"
                        {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));insereLista(&lista,"*", 1);insereLista(&lista,(yyvsp[-2].ident), 0); insertNo(&abstrata,"*");insertNo(&abstrata,(yyvsp[-2].ident)); }
#line 1645 "y.tab.c"
    break;

  case 51: /* expression: value DIV expression  */
#line 206 "translate.y"
                       {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));insereLista(&lista,"/", 1);insereLista(&lista,(yyvsp[-2].ident), 0); insertNo(&abstrata,"/");insertNo(&abstrata,(yyvsp[-2].ident)); }
#line 1651 "y.tab.c"
    break;

  case 52: /* expression: value EXP expression  */
#line 207 "translate.y"
                       {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1657 "y.tab.c"
    break;

  case 53: /* expression: value  */
#line 208 "translate.y"
        { insertNo(&abstrata,(yyvsp[0].ident));percorrerLista(&lista);iniciaLista(&lista);insereLista(&lista,(yyvsp[0].ident), 0);}
#line 1663 "y.tab.c"
    break;

  case 63: /* tipofunc: ID  */
#line 231 "translate.y"
              { (yyval.ident) = strdup((yyvsp[0].ident)); strcpy(tipoSimbolo, "FUNCAO"); adcSimb(&tabela, tipo, (yyvsp[0].ident), yylineno, tipoSimbolo);strcpy(tipo, ""); TypeIsCorrect((yyvsp[0].ident),  (yyvsp[0].ident));}
#line 1669 "y.tab.c"
    break;

  case 68: /* listValue: value listValueVirg  */
#line 243 "translate.y"
                               {TypeIsCorrect((yyvsp[-1].ident), (yyvsp[-1].ident));}
#line 1675 "y.tab.c"
    break;

  case 78: /* datatype: INT  */
#line 263 "translate.y"
              {strcpy(tipo, "INT");}
#line 1681 "y.tab.c"
    break;

  case 79: /* datatype: FLOAT  */
#line 264 "translate.y"
        {strcpy(tipo, "FLOAT");}
#line 1687 "y.tab.c"
    break;

  case 80: /* datatype: CHAR  */
#line 265 "translate.y"
       {strcpy(tipo, "CHAR");}
#line 1693 "y.tab.c"
    break;

  case 81: /* datatype: DOUBLE  */
#line 266 "translate.y"
         {strcpy(tipo, "DOUBLE");}
#line 1699 "y.tab.c"
    break;

  case 82: /* datatype: VOID  */
#line 267 "translate.y"
         {strcpy(tipo,"VOID");}
#line 1705 "y.tab.c"
    break;

  case 83: /* datatype: STRUCT  */
#line 268 "translate.y"
         {strcpy(tipo,"STRUCT");}
#line 1711 "y.tab.c"
    break;

  case 84: /* identificador: ID  */
#line 271 "translate.y"
                  { (yyval.ident) = strdup((yyvsp[0].ident)); strcpy(tipoSimbolo, "VARIAVEL"); adcSimb(&tabela, tipo, (yyvsp[0].ident), yylineno, tipoSimbolo);strcpy(tipo, ""); TypeIsCorrect((yyvsp[0].ident),  (yyvsp[0].ident));}
#line 1717 "y.tab.c"
    break;


#line 1721 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 274 "translate.y"



void yyerror(char *s) {
    printf("\n\nErro sintático próximo à linha %d\n", yylineno);
    printf("Possivel erro sintatico próximo ao termo --> %s \n\n", yytext);
    qtdErros++;
}

int main(void){
   // initNo(&abstrata);
    FILE *arquivo;
    arquivo = fopen("tresEndereco.txt","w");
    fprintf(arquivo,"%s","");
    fclose(arquivo);
    iniciaArvore(&tabela);
    iniciaLista(&lista);
    printf("%d\t", yylineno);
    yyparse();
    if(qtdErros == 0){
        printf("\n\nPrograma Sintaticamente Correto\n");
        imprimirTab(tabela);
        //imprimeTree(abstrata);
        //printf("\n%d", calculo(abstrata));
        percorrerLista(&lista);
    }
    return 0;
}

