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

    #include "ArvoreP.c"
    #include "ArvoreP.h"
    #include "translate2.tab.h"
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <ctype.h>

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
    	    printf("\nErro semântico na linha %d, termo '%s' não foi declarado\n",yylineno,var1);
            exit(0);
    	}
    	else if(strcmp(tipo2,"") == 0){
            printf("\nErro semântico na linha %d, termo '%s' não foi declarado\n",yylineno,var2);
            exit(0);
        }
        else{
            if(strcmp(tipo1,tipo2) != 0){
                printf("\nErro semântico na linha %d, Os tipos dos termos '%s' e '%s' são incompatíveis\n",yylineno-1,var1,var2);
                exit(0);
            }
        }
     }

#line 119 "y.tab.c"

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
#line 49 "translate.y"

    char *ident;

#line 286 "y.tab.c"

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
  YYSYMBOL_for = 71,                       /* for  */
  YYSYMBOL_while = 72,                     /* while  */
  YYSYMBOL_if = 73,                        /* if  */
  YYSYMBOL_condition = 74,                 /* condition  */
  YYSYMBOL_value = 75,                     /* value  */
  YYSYMBOL_else = 76,                      /* else  */
  YYSYMBOL_const = 77,                     /* const  */
  YYSYMBOL_relop = 78,                     /* relop  */
  YYSYMBOL_expression = 79,                /* expression  */
  YYSYMBOL_aritmetica = 80,                /* aritmetica  */
  YYSYMBOL_declaraVariaveis = 81,          /* declaraVariaveis  */
  YYSYMBOL_declararVar = 82,               /* declararVar  */
  YYSYMBOL_vetor = 83,                     /* vetor  */
  YYSYMBOL_implementaFuncoes = 84,         /* implementaFuncoes  */
  YYSYMBOL_declararFun = 85,               /* declararFun  */
  YYSYMBOL_listDeclVar = 86,               /* listDeclVar  */
  YYSYMBOL_listDeclVarVirg = 87,           /* listDeclVarVirg  */
  YYSYMBOL_listValue = 88,                 /* listValue  */
  YYSYMBOL_listValueVirg = 89,             /* listValueVirg  */
  YYSYMBOL_acessarVetOuStruct = 90,        /* acessarVetOuStruct  */
  YYSYMBOL_acessarVetOuStructLoop = 91,    /* acessarVetOuStructLoop  */
  YYSYMBOL_return = 92,                    /* return  */
  YYSYMBOL_datatype = 93,                  /* datatype  */
  YYSYMBOL_identificador = 94              /* identificador  */
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
#define YYLAST   223

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  199

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
static const yytype_uint8 yyrline[] =
{
       0,   116,   116,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   131,   132,   133,   134,   136,   138,
     139,   140,   143,   145,   148,   151,   153,   155,   156,   157,
     160,   161,   162,   165,   166,   169,   170,   175,   176,   177,
     178,   179,   180,   181,   182,   187,   188,   191,   192,   193,
     194,   195,   200,   202,   203,   204,   205,   208,   210,   212,
     213,   216,   217,   220,   221,   224,   225,   228,   229,   232,
     233,   236,   237,   240,   241,   244,   245,   246,   247,   248,
     249,   252
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
  "case", "funcao", "printf", "for", "while", "if", "condition", "value",
  "else", "const", "relop", "expression", "aritmetica", "declaraVariaveis",
  "declararVar", "vetor", "implementaFuncoes", "declararFun",
  "listDeclVar", "listDeclVarVirg", "listValue", "listValueVirg",
  "acessarVetOuStruct", "acessarVetOuStructLoop", "return", "datatype",
  "identificador", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-144)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -34,   -45,    21,     6,    25,  -144,   -26,    13,  -144,  -144,
    -144,  -144,     0,  -144,  -144,    18,    82,    34,    38,    25,
      25,  -144,   -30,   119,  -144,    41,    47,  -144,    16,    25,
    -144,    40,    43,    39,    44,    46,    51,    41,    48,    45,
      64,    41,   -29,  -144,    41,    55,    57,    60,    -9,    82,
    -144,  -144,  -144,    73,  -144,    66,  -144,    82,    83,    82,
      69,    69,    16,  -144,    96,    41,  -144,  -144,    16,    85,
      41,  -144,    41,    41,    41,    16,   100,    25,  -144,    20,
    -144,    86,    87,   130,  -144,  -144,    89,    65,    91,    92,
      95,   109,   102,    41,  -144,   111,   114,   115,  -144,   169,
    -144,   105,   106,  -144,    66,  -144,    66,    82,   125,    16,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,    16,
    -144,   112,   127,   141,    41,   126,    41,    41,   143,    41,
    -144,  -144,  -144,  -144,  -144,    16,    16,     7,    16,  -144,
    -144,   113,   128,   120,   116,  -144,  -144,   120,   121,   136,
    -144,  -144,  -144,   138,    41,  -144,  -144,    84,  -144,   120,
     124,   139,   119,    16,   137,    69,   140,    41,   -29,    41,
    -144,  -144,  -144,    41,   122,  -144,  -144,   142,    41,   152,
    -144,   153,   185,    82,  -144,    82,  -144,    41,  -144,    16,
      34,  -144,   187,  -144,  -144,  -144,    16,   145,  -144
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    56,     1,     0,     0,    75,    76,
      78,    77,    80,    79,    52,     0,     0,    60,     0,    56,
      56,    81,     0,     0,    58,    13,     0,    55,     0,    56,
      80,     0,     0,     0,     0,     0,     0,    13,     0,     0,
       0,    13,    21,    17,    13,     0,     0,     0,     0,     0,
      35,    36,    31,     0,    30,    72,    53,     0,     0,     0,
       0,     0,     0,     8,     0,    13,     2,     9,     0,     0,
      13,     7,    13,    13,    13,     0,     0,    56,    57,     0,
      32,     0,     0,     0,    29,    28,     0,     0,     0,     0,
       0,     0,     0,    13,    11,     0,     0,     0,    15,    46,
      14,    72,     0,    54,    72,    71,    72,    62,     0,     0,
      25,    44,    43,    42,    41,    40,    39,    38,    37,     0,
      26,     0,     0,     0,    13,     0,    13,    13,    34,    13,
      47,    48,    50,    49,    51,     0,     0,     0,    66,    70,
      69,     0,     0,    68,     0,    27,    18,    68,     0,     0,
      20,     3,     4,     0,    13,    10,    16,    46,    45,    68,
       0,     0,     0,    66,     0,     0,     0,    13,    21,    13,
       5,    65,    22,    13,    64,    67,    23,     0,    13,     0,
      19,     0,    74,    62,    61,     0,     6,    13,    33,     0,
      60,    63,     0,    12,    73,    59,     0,     0,    24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,   -12,  -144,  -144,    33,   131,  -144,  -144,    88,
    -144,   -59,   -11,  -144,   -71,   108,  -131,  -144,  -144,   -10,
    -144,  -144,    15,    26,  -144,    49,  -143,  -144,   -64,  -144,
     -22,   -16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    40,    41,    42,    70,    43,    44,    45,    46,
      47,    86,    87,   154,    54,   119,   100,   136,     3,    14,
      15,     7,    24,   141,   184,   160,   164,   105,    80,   190,
      16,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      22,    31,    88,    68,   166,   158,     1,    75,   104,    26,
      27,     4,    55,    50,    51,    21,   171,    53,    28,    56,
      69,     5,    50,    51,    21,    63,    50,    51,    21,    67,
      17,    29,    71,    77,     8,     9,    10,    11,    12,    13,
     139,    81,   140,    83,    55,    55,    55,     6,    76,    21,
     102,    89,    55,    91,    52,    18,    19,    92,    94,   101,
      95,    96,    97,   106,    99,   197,   104,   103,    32,    33,
      34,    35,    84,    85,    36,    50,    51,    21,    37,    20,
      38,   125,   111,   112,   113,   114,   115,   116,   117,   118,
      21,   142,    23,    55,    25,    49,    39,    59,   144,    57,
      58,    65,    60,    55,    61,    64,   177,    52,   145,    62,
      66,    72,   149,    73,   151,   152,    74,   155,    78,    55,
      55,   106,    55,    79,   156,   157,    82,   159,     8,     9,
      10,    11,    30,    13,   130,   131,   132,   133,   134,    90,
     174,    93,   170,   102,   107,   108,   109,    55,   110,    55,
     120,   121,   159,   122,   123,   179,   126,   181,   124,   127,
     128,   182,   137,   143,   138,   147,   186,   142,   146,   192,
      34,   150,   161,    55,   153,   193,   165,   167,   194,   162,
      55,   168,   163,   172,   183,   157,   111,   112,   113,   114,
     115,   116,   117,   118,   169,   173,   176,   187,   188,   178,
     189,   180,   185,   196,   198,   195,    98,   135,     0,   191,
       0,   148,   175,   129,     0,     0,     0,     0,     0,   130,
     131,   132,   133,   134
};

static const yytype_int16 yycheck[] =
{
      16,    23,    61,    32,   147,   136,    40,    16,    79,    19,
      20,    56,    28,     6,     7,     8,   159,    28,    48,    29,
      49,     0,     6,     7,     8,    37,     6,     7,     8,    41,
      56,    61,    44,    49,     9,    10,    11,    12,    13,    14,
     104,    57,   106,    59,    60,    61,    62,    41,    57,     8,
      43,    62,    68,    65,    38,    42,    56,    68,    70,    75,
      72,    73,    74,    79,    75,   196,   137,    77,    27,    28,
      29,    30,     3,     4,    33,     6,     7,     8,    37,    61,
      39,    93,    17,    18,    19,    20,    21,    22,    23,    24,
       8,   107,    58,   109,    56,    48,    55,    58,   109,    59,
      57,    56,    58,   119,    58,    57,   165,    38,   119,    58,
      46,    56,   124,    56,   126,   127,    56,   129,    45,   135,
     136,   137,   138,    57,   135,   136,    43,   138,     9,    10,
      11,    12,    13,    14,    50,    51,    52,    53,    54,    43,
     162,    56,   154,    43,    58,    58,    16,   163,    59,   165,
      59,    59,   163,    58,    45,   167,    45,   169,    56,    45,
      45,   173,    57,    38,    58,    38,   178,   183,    56,   185,
      29,    45,    59,   189,    31,   187,    60,    56,   189,    51,
     196,    45,    62,    59,    62,   196,    17,    18,    19,    20,
      21,    22,    23,    24,    56,    56,    59,    45,    45,    59,
      15,   168,    60,    16,    59,   190,    75,    99,    -1,   183,
      -1,   123,   163,    44,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    40,    64,    81,    56,     0,    41,    84,     9,    10,
      11,    12,    13,    14,    82,    83,    93,    56,    42,    56,
      61,     8,    94,    58,    85,    56,    82,    82,    48,    61,
      13,    93,    27,    28,    29,    30,    33,    37,    39,    55,
      65,    66,    67,    69,    70,    71,    72,    73,    94,    48,
       6,     7,    38,    75,    77,    94,    82,    59,    57,    58,
      58,    58,    58,    65,    57,    56,    46,    65,    32,    49,
      68,    65,    56,    56,    56,    16,    57,    94,    45,    57,
      91,    94,    43,    94,     3,     4,    74,    75,    74,    75,
      43,    65,    75,    56,    65,    65,    65,    65,    69,    75,
      79,    94,    43,    82,    77,    90,    94,    58,    58,    16,
      59,    17,    18,    19,    20,    21,    22,    23,    24,    78,
      59,    59,    58,    45,    56,    65,    45,    45,    45,    44,
      50,    51,    52,    53,    54,    78,    80,    57,    58,    91,
      91,    86,    94,    38,    75,    75,    56,    38,    72,    65,
      45,    65,    65,    31,    76,    65,    75,    75,    79,    75,
      88,    59,    51,    62,    89,    60,    89,    56,    45,    56,
      65,    89,    59,    56,    93,    88,    59,    74,    59,    65,
      68,    65,    65,    62,    87,    60,    65,    45,    45,    15,
      92,    86,    94,    65,    75,    85,    16,    79,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    66,    66,    67,    68,
      68,    68,    69,    70,    71,    72,    73,    74,    74,    74,
      75,    75,    75,    76,    76,    77,    77,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    80,
      80,    80,    81,    82,    82,    82,    82,    83,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    92,    92,    93,    93,    93,    93,    93,
      93,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     5,     5,     6,     8,     2,     2,     2,
       5,     3,     9,     0,     3,     3,     5,     1,     5,     6,
       4,     0,     6,     7,    12,     4,     4,     3,     1,     1,
       1,     1,     2,     4,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     4,     6,     3,     0,     5,     3,    11,
       0,     4,     0,     2,     0,     2,     0,     2,     0,     2,
       2,     2,     0,     2,     0,     1,     1,     1,     1,     1,
       1,     1
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
  case 14: /* statement: identificador ATRIBUICAO expression  */
#line 131 "translate.y"
                                               {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1496 "y.tab.c"
    break;

  case 28: /* condition: TRUE  */
#line 156 "translate.y"
       {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
#line 1502 "y.tab.c"
    break;

  case 29: /* condition: FALSE  */
#line 157 "translate.y"
        {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
#line 1508 "y.tab.c"
    break;

  case 35: /* const: DECIMAL  */
#line 169 "translate.y"
               {adcSimb(&tabela, "FLOAT", yytext, yylineno, "CONSTANTE");}
#line 1514 "y.tab.c"
    break;

  case 36: /* const: NUMERO  */
#line 170 "translate.y"
         {adcSimb(&tabela, "INT", yytext, yylineno, "CONSTANTE");}
#line 1520 "y.tab.c"
    break;

  case 37: /* relop: OR  */
#line 175 "translate.y"
          {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1526 "y.tab.c"
    break;

  case 38: /* relop: AND  */
#line 176 "translate.y"
      {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1532 "y.tab.c"
    break;

  case 39: /* relop: MAIORIGUALQUE  */
#line 177 "translate.y"
                {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1538 "y.tab.c"
    break;

  case 40: /* relop: MENORIGUALQUE  */
#line 178 "translate.y"
                {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1544 "y.tab.c"
    break;

  case 41: /* relop: NOTIGUAL  */
#line 179 "translate.y"
           {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1550 "y.tab.c"
    break;

  case 42: /* relop: IGUALDADE  */
#line 180 "translate.y"
            {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1556 "y.tab.c"
    break;

  case 43: /* relop: MAIORQUE  */
#line 181 "translate.y"
           {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1562 "y.tab.c"
    break;

  case 44: /* relop: MENORQUE  */
#line 182 "translate.y"
           {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1568 "y.tab.c"
    break;

  case 45: /* expression: value aritmetica expression  */
#line 187 "translate.y"
                                        {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1574 "y.tab.c"
    break;

  case 47: /* aritmetica: PLUS  */
#line 191 "translate.y"
                 {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1580 "y.tab.c"
    break;

  case 48: /* aritmetica: MINUS  */
#line 192 "translate.y"
        {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1586 "y.tab.c"
    break;

  case 49: /* aritmetica: MULT  */
#line 193 "translate.y"
       {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1592 "y.tab.c"
    break;

  case 50: /* aritmetica: DIV  */
#line 194 "translate.y"
      {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1598 "y.tab.c"
    break;

  case 51: /* aritmetica: EXP  */
#line 195 "translate.y"
      {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1604 "y.tab.c"
    break;

  case 75: /* datatype: INT  */
#line 244 "translate.y"
              {strcpy(tipo, "INT");}
#line 1610 "y.tab.c"
    break;

  case 76: /* datatype: FLOAT  */
#line 245 "translate.y"
        {strcpy(tipo, "FLOAT");}
#line 1616 "y.tab.c"
    break;

  case 77: /* datatype: CHAR  */
#line 246 "translate.y"
       {strcpy(tipo, "CHAR");}
#line 1622 "y.tab.c"
    break;

  case 78: /* datatype: DOUBLE  */
#line 247 "translate.y"
         {strcpy(tipo, "DOUBLE");}
#line 1628 "y.tab.c"
    break;

  case 79: /* datatype: VOID  */
#line 248 "translate.y"
         {strcpy(tipo,"VOID");}
#line 1634 "y.tab.c"
    break;

  case 80: /* datatype: STRUCT  */
#line 249 "translate.y"
         {strcpy(tipo,"STRUCT");}
#line 1640 "y.tab.c"
    break;

  case 81: /* identificador: ID  */
#line 252 "translate.y"
                  { (yyval.ident) = strdup((yyvsp[0].ident)); strcpy(tipoSimbolo, "VARIAVEL"); adcSimb(&tabela, tipo, (yyvsp[0].ident), yylineno, tipoSimbolo);strcpy(tipo, "");}
#line 1646 "y.tab.c"
    break;


#line 1650 "y.tab.c"

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

#line 255 "translate.y"



void yyerror(char *s) {
    printf("\n\nErro sintático próximo à linha %d\n", yylineno);
    printf("Possivel erro sintatico próximo ao termo --> %s \n\n", yytext);
    qtdErros++;
}

int main(void){
    iniciaArvore(&tabela);
    printf("%d\t", yylineno);
    yyparse();
    if(qtdErros == 0){
        printf("\n\nPrograma Sintaticamente Correto\n");
        imprimirTab(tabela);
    }
    return 0;
}

