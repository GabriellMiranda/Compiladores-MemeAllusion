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
    #include "y.tab.h"
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
            exit(1);
    	}
    	else if(strcmp(tipo2,"") == 0){
            printf("\nErro semântico na linha %d, termo '%s' não foi declarado\n",yylineno,var2);
            exit(1);
        }
        else{
            if(strcmp(tipo1,tipo2) != 0){
                printf("\nErro semântico na linha %d, Os tipos dos termos '%s' e '%s' são incompatíveis\n",yylineno,var1,var2);
                exit(1);
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
#line 49 "translate.y"

    char *ident;

#line 268 "y.tab.c"

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
  YYSYMBOL_ILAVAMOSNOS = 14,               /* ILAVAMOSNOS  */
  YYSYMBOL_RECEBA = 15,                    /* RECEBA  */
  YYSYMBOL_MENORQUE = 16,                  /* MENORQUE  */
  YYSYMBOL_MAIORQUE = 17,                  /* MAIORQUE  */
  YYSYMBOL_GEMEAS = 18,                    /* GEMEAS  */
  YYSYMBOL_NOTIGUAL = 19,                  /* NOTIGUAL  */
  YYSYMBOL_MENORIGUALQUE = 20,             /* MENORIGUALQUE  */
  YYSYMBOL_MAIORIGUALQUE = 21,             /* MAIORIGUALQUE  */
  YYSYMBOL_II = 22,                        /* II  */
  YYSYMBOL_OU = 23,                        /* OU  */
  YYSYMBOL_CONTINUE = 24,                  /* CONTINUE  */
  YYSYMBOL_TYPEDEF = 25,                   /* TYPEDEF  */
  YYSYMBOL_RETURN = 26,                    /* RETURN  */
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
  YYSYMBOL_LEIAME = 39,                    /* LEIAME  */
  YYSYMBOL_DEFAULT = 40,                   /* DEFAULT  */
  YYSYMBOL_PLUS = 41,                      /* PLUS  */
  YYSYMBOL_MINUS = 42,                     /* MINUS  */
  YYSYMBOL_DIV = 43,                       /* DIV  */
  YYSYMBOL_MULT = 44,                      /* MULT  */
  YYSYMBOL_EXP = 45,                       /* EXP  */
  YYSYMBOL_DO = 46,                        /* DO  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ')'  */
  YYSYMBOL_49_ = 49,                       /* '{'  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_51_ = 51,                       /* ';'  */
  YYSYMBOL_52_ = 52,                       /* ','  */
  YYSYMBOL_53_ = 53,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_program = 55,                   /* program  */
  YYSYMBOL_main = 56,                      /* main  */
  YYSYMBOL_datatype = 57,                  /* datatype  */
  YYSYMBOL_body = 58,                      /* body  */
  YYSYMBOL_case = 59,                      /* case  */
  YYSYMBOL_else = 60,                      /* else  */
  YYSYMBOL_condition = 61,                 /* condition  */
  YYSYMBOL_statement = 62,                 /* statement  */
  YYSYMBOL_list_ids = 63,                  /* list_ids  */
  YYSYMBOL_const = 64,                     /* const  */
  YYSYMBOL_flutuante = 65,                 /* flutuante  */
  YYSYMBOL_number = 66,                    /* number  */
  YYSYMBOL_expression = 67,                /* expression  */
  YYSYMBOL_aritmetica = 68,                /* aritmetica  */
  YYSYMBOL_relop = 69,                     /* relop  */
  YYSYMBOL_value = 70,                     /* value  */
  YYSYMBOL_string = 71,                    /* string  */
  YYSYMBOL_return = 72,                    /* return  */
  YYSYMBOL_identificador = 73,             /* identificador  */
  YYSYMBOL_break = 74                      /* break  */
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   312

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  150

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
      47,    48,     2,     2,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    51,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   107,   107,   110,   113,   114,   115,   116,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   133,
     134,   135,   138,   139,   142,   143,   144,   147,   148,   149,
     150,   154,   155,   156,   157,   158,   159,   160,   164,   165,
     168,   171,   174,   175,   178,   179,   180,   181,   182,   185,
     186,   187,   188,   189,   190,   191,   192,   195,   196,   197,
     200,   202,   203,   206,   209
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
  "STRUCT", "ILAVAMOSNOS", "RECEBA", "MENORQUE", "MAIORQUE", "GEMEAS",
  "NOTIGUAL", "MENORIGUALQUE", "MAIORIGUALQUE", "II", "OU", "CONTINUE",
  "TYPEDEF", "RETURN", "PRINTF", "FOR", "WHILE", "IF", "ELSE", "CASE",
  "SWITCH", "GOTO", "MALLOC", "SIZEOF", "BREAK", "STR", "LEIAME",
  "DEFAULT", "PLUS", "MINUS", "DIV", "MULT", "EXP", "DO", "'('", "')'",
  "'{'", "'}'", "';'", "','", "':'", "$accept", "program", "main",
  "datatype", "body", "case", "else", "condition", "statement", "list_ids",
  "const", "flutuante", "number", "expression", "aritmetica", "relop",
  "value", "string", "return", "identificador", "break", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-73)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-22)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      95,   -73,   -73,   -73,   -73,    32,   -14,    16,   -73,    -3,
     -73,    -5,   258,   -73,    10,    23,    47,    49,    52,    28,
      53,    -2,    84,   226,    50,   259,   -73,    70,    65,    20,
      20,    84,   -73,    70,   258,    57,    -8,    30,   258,    66,
     -73,    34,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
      34,   -73,   -33,    64,   -73,   -73,   -73,   -73,    71,    57,
     -73,   -73,   -73,   289,   -73,    -4,    72,    73,    74,   102,
      84,    34,    84,   -73,    67,   -73,    45,   -73,    45,    82,
      84,    20,    85,    34,    76,    87,    88,    84,    93,    57,
      -4,   -73,   -73,    -4,    75,   -73,   -73,   -73,   -73,   -73,
     -73,    34,   -73,   -17,    89,   258,   -73,   -73,   -73,   258,
     -26,     0,    78,   -73,    45,    96,    65,   134,   148,    34,
      97,    99,   100,    20,   -73,    90,   -73,   122,   101,   258,
     -73,   -73,   107,   116,   117,   -73,   258,   258,   118,   258,
     258,   258,   120,   -73,   180,   194,    14,   -73,   -73,   -73
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     5,     7,     6,     0,     0,     0,     1,     0,
       3,     0,     0,    63,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,    18,     0,     0,    31,
      31,     0,    64,     0,     0,    30,    34,    31,    12,     0,
      11,    31,    56,    55,    54,    53,    52,    51,    50,    49,
      31,    60,     0,     0,    26,    25,    40,    41,     0,    58,
      57,    39,    38,     0,    59,    34,     0,     0,     0,     0,
      31,    31,     0,    62,     0,     2,    28,    43,    29,     0,
      31,    31,     0,    31,     0,     0,     0,    31,     0,    32,
      33,    37,    27,    34,     0,    61,    44,    45,    47,    46,
      48,    31,    13,     0,     0,     0,    24,    37,    36,     0,
       0,     0,     0,    35,    42,     0,     0,     0,     0,    31,
       0,     0,     0,    31,    14,     0,     9,    23,     0,     0,
      16,    15,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,    18,    17,     0,     0,    18,     8,    22,    19
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -73,   -73,   -73,   168,   -12,    26,   -73,   -28,   -25,    -9,
     -67,   -73,   -73,   -45,   -73,   111,   -16,   -15,   -73,   -21,
     -72
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    22,    38,   121,   135,    58,    24,    59,
      60,    61,    62,    76,   101,    50,    63,    64,    39,    25,
      26
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    36,    66,    53,    91,    78,   119,    71,    65,    65,
      67,    84,    52,    35,   120,    79,    65,   107,    68,    80,
      65,    74,    69,    54,    55,    77,    56,    57,    13,    65,
      10,   115,     8,     9,    77,    70,    56,    57,    13,    72,
      56,    57,    13,    72,    12,    11,   119,    34,   122,    90,
      93,    94,    70,   104,   120,    92,   114,    27,    51,    65,
      65,    89,    65,   108,   -20,   142,    65,   106,    51,   146,
      28,   103,    51,    13,     1,     2,     3,     4,   111,    32,
      65,    73,    56,    57,    13,    77,    96,    97,    98,    99,
     100,   125,    13,   117,    29,   132,    30,   118,    65,    31,
      33,    40,    65,   128,     1,     2,     3,     4,    51,    70,
      13,     1,     2,     3,     4,    81,    75,   137,    95,    82,
      85,    86,   112,   113,   141,   123,    87,   144,   145,    14,
      15,    16,    17,   102,   105,    18,   109,   110,   133,    19,
     116,    20,    13,     1,     2,     3,     4,   124,    21,   130,
     129,   131,    88,   134,   136,   138,    13,     1,     2,     3,
       4,    14,    15,    16,    17,   139,   140,    18,     7,   143,
     -21,    19,   149,    20,    83,    14,    15,    16,    17,     0,
      21,    18,     0,     0,   126,    19,     0,    20,    13,     1,
       2,     3,     4,     0,    21,     0,     0,     0,   127,     0,
       0,     0,    13,     1,     2,     3,     4,    14,    15,    16,
      17,     0,     0,    18,     0,     0,     0,    19,     0,    20,
       0,    14,    15,    16,    17,     0,    21,    18,     0,     0,
     147,    19,     0,    20,    13,     1,     2,     3,     4,     0,
      21,     0,     0,     0,   148,     0,     0,     0,     0,     0,
       0,     0,    37,    14,    15,    16,    17,     0,     0,    18,
       0,     0,     0,    19,     0,    20,    13,     1,     2,     3,
       4,     0,    21,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,     0,     0,    14,    15,    16,    17,     0,
       0,    18,     0,     0,     0,    19,     0,    20,     0,     0,
       0,     0,     0,     0,    21,    42,    43,    44,    45,    46,
      47,    48,    49
};

static const yytype_int16 yycheck[] =
{
      12,    22,    30,    28,    71,    50,    32,    15,    29,    30,
      31,    15,    27,    22,    40,    48,    37,    84,    33,    52,
      41,    37,    34,     3,     4,    41,     6,     7,     8,    50,
      14,    48,     0,    47,    50,    52,     6,     7,     8,    47,
       6,     7,     8,    47,    49,    48,    32,    49,    48,    70,
      71,    72,    52,    81,    40,    71,   101,    47,    38,    80,
      81,    70,    83,    84,    50,   137,    87,    83,    38,   141,
      47,    80,    38,     8,     9,    10,    11,    12,    87,    51,
     101,    51,     6,     7,     8,   101,    41,    42,    43,    44,
      45,   116,     8,   105,    47,   123,    47,   109,   119,    47,
      47,    51,   123,   119,     9,    10,    11,    12,    38,    52,
       8,     9,    10,    11,    12,    51,    50,   129,    51,    48,
      48,    48,    29,    48,   136,    47,    52,   139,   140,    27,
      28,    29,    30,    51,    49,    33,    49,    49,    48,    37,
      51,    39,     8,     9,    10,    11,    12,    51,    46,    50,
      53,    51,    50,    31,    53,    48,     8,     9,    10,    11,
      12,    27,    28,    29,    30,    49,    49,    33,     0,    51,
      50,    37,   146,    39,    63,    27,    28,    29,    30,    -1,
      46,    33,    -1,    -1,    50,    37,    -1,    39,     8,     9,
      10,    11,    12,    -1,    46,    -1,    -1,    -1,    50,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    27,    28,    29,
      30,    -1,    -1,    33,    -1,    -1,    -1,    37,    -1,    39,
      -1,    27,    28,    29,    30,    -1,    46,    33,    -1,    -1,
      50,    37,    -1,    39,     8,     9,    10,    11,    12,    -1,
      46,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    33,
      -1,    -1,    -1,    37,    -1,    39,     8,     9,    10,    11,
      12,    -1,    46,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    33,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    16,    17,    18,    19,    20,
      21,    22,    23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    10,    11,    12,    55,    56,    57,     0,    47,
      14,    48,    49,     8,    27,    28,    29,    30,    33,    37,
      39,    46,    57,    58,    62,    73,    74,    47,    47,    47,
      47,    47,    51,    47,    49,    63,    73,    26,    58,    72,
      51,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      69,    38,    71,    62,     3,     4,     6,     7,    61,    63,
      64,    65,    66,    70,    71,    73,    61,    73,    71,    58,
      52,    15,    47,    51,    70,    50,    67,    70,    67,    48,
      52,    51,    48,    69,    15,    48,    48,    52,    50,    63,
      73,    64,    70,    73,    73,    51,    41,    42,    43,    44,
      45,    68,    51,    63,    61,    49,    70,    64,    73,    49,
      49,    63,    29,    48,    67,    48,    51,    58,    58,    32,
      40,    59,    48,    47,    51,    62,    50,    50,    70,    53,
      50,    51,    61,    48,    31,    60,    53,    58,    48,    49,
      49,    58,    74,    51,    58,    58,    74,    50,    50,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    57,    57,    57,    57,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    59,    60,    60,    61,    61,    61,    62,    62,    62,
      62,    63,    63,    63,    63,    63,    63,    63,    64,    64,
      65,    66,    67,    67,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    70,
      71,    72,    72,    73,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     2,     1,     1,     1,     1,    11,     7,
       8,     2,     2,     5,     7,     7,     7,     9,     1,     6,
       5,     4,     4,     0,     3,     1,     1,     4,     3,     3,
       2,     0,     3,     3,     1,     4,     3,     3,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     2
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
  case 4: /* datatype: INT  */
#line 113 "translate.y"
              {strcpy(tipo, "INT");}
#line 1447 "y.tab.c"
    break;

  case 5: /* datatype: FLOAT  */
#line 114 "translate.y"
        {strcpy(tipo, "FLOAT");}
#line 1453 "y.tab.c"
    break;

  case 6: /* datatype: CHAR  */
#line 115 "translate.y"
       {strcpy(tipo, "CHAR");}
#line 1459 "y.tab.c"
    break;

  case 7: /* datatype: DOUBLE  */
#line 116 "translate.y"
         {strcpy(tipo, "DOUBLE");}
#line 1465 "y.tab.c"
    break;

  case 24: /* condition: value relop value  */
#line 142 "translate.y"
                             {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1471 "y.tab.c"
    break;

  case 25: /* condition: TRUE  */
#line 143 "translate.y"
       {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
#line 1477 "y.tab.c"
    break;

  case 26: /* condition: FALSE  */
#line 144 "translate.y"
        {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
#line 1483 "y.tab.c"
    break;

  case 27: /* statement: datatype identificador RECEBA value  */
#line 147 "translate.y"
                                               {TypeIsCorrect((yyvsp[-3].ident),  (yyvsp[-1].ident));}
#line 1489 "y.tab.c"
    break;

  case 28: /* statement: identificador RECEBA expression  */
#line 148 "translate.y"
                                  {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1495 "y.tab.c"
    break;

  case 29: /* statement: identificador relop expression  */
#line 149 "translate.y"
                                 {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1501 "y.tab.c"
    break;

  case 36: /* list_ids: identificador RECEBA identificador  */
#line 159 "translate.y"
                                     {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1507 "y.tab.c"
    break;

  case 37: /* list_ids: identificador RECEBA const  */
#line 160 "translate.y"
                             {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1513 "y.tab.c"
    break;

  case 40: /* flutuante: DECIMAL  */
#line 168 "translate.y"
                   {adcSimb(&tabela, "FLOAT", yytext, yylineno, "CONSTANTE");}
#line 1519 "y.tab.c"
    break;

  case 41: /* number: NUMERO  */
#line 171 "translate.y"
               {adcSimb(&tabela, "INT", yytext, yylineno, "CONSTANTE");}
#line 1525 "y.tab.c"
    break;

  case 42: /* expression: expression aritmetica expression  */
#line 174 "translate.y"
                                             {TypeIsCorrect((yyvsp[-2].ident),  (yyvsp[0].ident));}
#line 1531 "y.tab.c"
    break;

  case 44: /* aritmetica: PLUS  */
#line 178 "translate.y"
                 {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1537 "y.tab.c"
    break;

  case 45: /* aritmetica: MINUS  */
#line 179 "translate.y"
        {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1543 "y.tab.c"
    break;

  case 46: /* aritmetica: MULT  */
#line 180 "translate.y"
       {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1549 "y.tab.c"
    break;

  case 47: /* aritmetica: DIV  */
#line 181 "translate.y"
      {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1555 "y.tab.c"
    break;

  case 48: /* aritmetica: EXP  */
#line 182 "translate.y"
      {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1561 "y.tab.c"
    break;

  case 49: /* relop: OU  */
#line 185 "translate.y"
          {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1567 "y.tab.c"
    break;

  case 50: /* relop: II  */
#line 186 "translate.y"
     {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1573 "y.tab.c"
    break;

  case 51: /* relop: MAIORIGUALQUE  */
#line 187 "translate.y"
                {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1579 "y.tab.c"
    break;

  case 52: /* relop: MENORIGUALQUE  */
#line 188 "translate.y"
                {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1585 "y.tab.c"
    break;

  case 53: /* relop: NOTIGUAL  */
#line 189 "translate.y"
           {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1591 "y.tab.c"
    break;

  case 54: /* relop: GEMEAS  */
#line 190 "translate.y"
         {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1597 "y.tab.c"
    break;

  case 55: /* relop: MAIORQUE  */
#line 191 "translate.y"
           {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1603 "y.tab.c"
    break;

  case 56: /* relop: MENORQUE  */
#line 192 "translate.y"
           {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1609 "y.tab.c"
    break;

  case 60: /* string: STR  */
#line 200 "translate.y"
            {adcSimb(&tabela, "STRING", yytext, yylineno, "VETOR");}
#line 1615 "y.tab.c"
    break;

  case 63: /* identificador: ID  */
#line 206 "translate.y"
                  { (yyval.ident) = strdup((yyvsp[0].ident)); strcpy(tipoSimbolo, "VARIAVEL"); adcSimb(&tabela, tipo, (yyvsp[0].ident), yylineno, tipoSimbolo);strcpy(tipo, "");}
#line 1621 "y.tab.c"
    break;


#line 1625 "y.tab.c"

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

#line 212 "translate.y"



void yyerror(char *s) {
    printf("\n\nErro sintático próximo à linha %d\n", yylineno);
    printf("Possivel erro sintatico antes ou depois do termo --> %s \n\n", yytext);
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

