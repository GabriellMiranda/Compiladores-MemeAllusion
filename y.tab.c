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

    ArvorePatricia *tabela;

#line 95 "y.tab.c"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 5,                     /* DOUBLE  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_STRUCT = 7,                     /* STRUCT  */
  YYSYMBOL_FALSE = 8,                      /* FALSE  */
  YYSYMBOL_TRUE = 9,                       /* TRUE  */
  YYSYMBOL_LETRA = 10,                     /* LETRA  */
  YYSYMBOL_DECIMAL = 11,                   /* DECIMAL  */
  YYSYMBOL_NEGATIVO = 12,                  /* NEGATIVO  */
  YYSYMBOL_POSITIVO = 13,                  /* POSITIVO  */
  YYSYMBOL_ID = 14,                        /* ID  */
  YYSYMBOL_ILAVAMOSNOS = 15,               /* ILAVAMOSNOS  */
  YYSYMBOL_RECEBA = 16,                    /* RECEBA  */
  YYSYMBOL_MENORQUE = 17,                  /* MENORQUE  */
  YYSYMBOL_MAIORQUE = 18,                  /* MAIORQUE  */
  YYSYMBOL_GEMEAS = 19,                    /* GEMEAS  */
  YYSYMBOL_NOTIGUAL = 20,                  /* NOTIGUAL  */
  YYSYMBOL_MENORIGUALQUE = 21,             /* MENORIGUALQUE  */
  YYSYMBOL_MAIORIGUALQUE = 22,             /* MAIORIGUALQUE  */
  YYSYMBOL_II = 23,                        /* II  */
  YYSYMBOL_OU = 24,                        /* OU  */
  YYSYMBOL_CONTINUE = 25,                  /* CONTINUE  */
  YYSYMBOL_TYPEDEF = 26,                   /* TYPEDEF  */
  YYSYMBOL_RETURN = 27,                    /* RETURN  */
  YYSYMBOL_PRINTF = 28,                    /* PRINTF  */
  YYSYMBOL_FOR = 29,                       /* FOR  */
  YYSYMBOL_WHILE = 30,                     /* WHILE  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_CASE = 33,                      /* CASE  */
  YYSYMBOL_SWITCH = 34,                    /* SWITCH  */
  YYSYMBOL_GOTO = 35,                      /* GOTO  */
  YYSYMBOL_MALLOC = 36,                    /* MALLOC  */
  YYSYMBOL_SIZEOF = 37,                    /* SIZEOF  */
  YYSYMBOL_BREAK = 38,                     /* BREAK  */
  YYSYMBOL_STR = 39,                       /* STR  */
  YYSYMBOL_LEIAME = 40,                    /* LEIAME  */
  YYSYMBOL_NUMERO = 41,                    /* NUMERO  */
  YYSYMBOL_DEFAULT = 42,                   /* DEFAULT  */
  YYSYMBOL_PLUS = 43,                      /* PLUS  */
  YYSYMBOL_MINUS = 44,                     /* MINUS  */
  YYSYMBOL_DIV = 45,                       /* DIV  */
  YYSYMBOL_MULT = 46,                      /* MULT  */
  YYSYMBOL_EXP = 47,                       /* EXP  */
  YYSYMBOL_DO = 48,                        /* DO  */
  YYSYMBOL_49_ = 49,                       /* '('  */
  YYSYMBOL_50_ = 50,                       /* ')'  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53_ = 53,                       /* ';'  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_55_ = 55,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_program = 57,                   /* program  */
  YYSYMBOL_main = 58,                      /* main  */
  YYSYMBOL_datatype = 59,                  /* datatype  */
  YYSYMBOL_body = 60,                      /* body  */
  YYSYMBOL_case = 61,                      /* case  */
  YYSYMBOL_else = 62,                      /* else  */
  YYSYMBOL_condition = 63,                 /* condition  */
  YYSYMBOL_statement = 64,                 /* statement  */
  YYSYMBOL_init = 65,                      /* init  */
  YYSYMBOL_list_ids = 66,                  /* list_ids  */
  YYSYMBOL_const = 67,                     /* const  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_aritmetica = 69,                /* aritmetica  */
  YYSYMBOL_relop = 70,                     /* relop  */
  YYSYMBOL_value = 71,                     /* value  */
  YYSYMBOL_string = 72,                    /* string  */
  YYSYMBOL_return = 73,                    /* return  */
  YYSYMBOL_identificador = 74,             /* identificador  */
  YYSYMBOL_break = 75                      /* break  */
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
#define YYLAST   320

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  148

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
      49,    50,     2,     2,    54,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,    53,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    80,    80,    83,    86,    87,    88,    89,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   106,
     107,   108,   111,   112,   115,   116,   117,   120,   121,   122,
     123,   126,   129,   130,   131,   132,   133,   134,   135,   139,
     141,   142,   145,   146,   147,   148,   149,   152,   153,   154,
     155,   156,   157,   158,   159,   162,   163,   164,   167,   169,
     170,   173,   176
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT",
  "DOUBLE", "CHAR", "STRUCT", "FALSE", "TRUE", "LETRA", "DECIMAL",
  "NEGATIVO", "POSITIVO", "ID", "ILAVAMOSNOS", "RECEBA", "MENORQUE",
  "MAIORQUE", "GEMEAS", "NOTIGUAL", "MENORIGUALQUE", "MAIORIGUALQUE", "II",
  "OU", "CONTINUE", "TYPEDEF", "RETURN", "PRINTF", "FOR", "WHILE", "IF",
  "ELSE", "CASE", "SWITCH", "GOTO", "MALLOC", "SIZEOF", "BREAK", "STR",
  "LEIAME", "NUMERO", "DEFAULT", "PLUS", "MINUS", "DIV", "MULT", "EXP",
  "DO", "'('", "')'", "'{'", "'}'", "';'", "','", "':'", "$accept",
  "program", "main", "datatype", "body", "case", "else", "condition",
  "statement", "init", "list_ids", "const", "expression", "aritmetica",
  "relop", "value", "string", "return", "identificador", "break", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-102)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-22)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     134,  -102,  -102,  -102,  -102,    28,   -44,    29,  -102,    -1,
    -102,   -26,   272,  -102,     6,    16,    33,    38,    39,    37,
      43,     8,    62,   234,    44,   233,  -102,    59,    66,    27,
      27,    62,  -102,    59,   272,    52,    -9,    -8,   272,    55,
    -102,    -2,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
      -2,  -102,   -36,    60,  -102,  -102,  -102,    67,    52,  -102,
     270,  -102,     5,    69,    71,    70,    80,    62,    -2,    62,
    -102,  -102,    63,  -102,    58,  -102,    58,    74,    62,    27,
      61,    -2,     1,    72,    78,    62,   100,    52,     5,  -102,
    -102,     5,    81,  -102,  -102,  -102,  -102,  -102,  -102,    -2,
    -102,    23,    88,   272,  -102,  -102,  -102,   272,   -16,    25,
      93,  -102,    58,    90,    66,   130,   143,    -2,    95,    99,
      92,    27,  -102,   102,  -102,   121,   101,   272,  -102,  -102,
     104,   111,   112,  -102,   272,   272,   113,   272,   272,   272,
     103,  -102,   182,   195,    10,  -102,  -102,  -102
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     5,     7,     6,     0,     0,     0,     1,     0,
       3,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    18,     0,     0,    32,
      32,     0,    62,     0,     0,    30,    35,    32,    12,     0,
      11,    32,    54,    53,    52,    51,    50,    49,    48,    47,
      32,    58,     0,     0,    26,    25,    39,     0,    56,    55,
       0,    57,    35,     0,     0,     0,     0,    32,    32,     0,
      27,    60,     0,     2,    28,    41,    29,     0,    32,    32,
       0,    32,     0,     0,     0,    32,     0,    33,    34,    38,
      31,    35,     0,    59,    42,    43,    45,    44,    46,    32,
      13,     0,     0,     0,    24,    38,    37,     0,     0,     0,
       0,    36,    40,     0,     0,     0,     0,    32,     0,     0,
       0,    32,    14,     0,     9,    23,     0,     0,    16,    15,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
      18,    17,     0,     0,    18,     8,    22,    19
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,   165,   -12,    31,  -102,   -28,   -25,  -102,
     -11,   -55,   -46,  -102,   107,   -18,    -3,  -102,   -21,  -101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    22,    38,   119,   133,    57,    24,    70,
      58,    59,    74,    99,    50,    60,    61,    39,    25,    26
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    36,    63,    53,    76,     9,    13,    68,    62,    62,
      64,    35,    13,    89,    77,    13,    62,   117,    78,    72,
      62,    82,    66,    75,    52,    12,   118,   105,     8,    62,
      65,    51,    75,    56,   140,    54,    55,    51,   144,    56,
      69,    13,    56,   117,    10,    71,    88,    91,    92,    11,
      90,   102,   118,   112,    69,    27,    87,    62,    62,    34,
      62,   106,   -20,   104,    62,    28,    51,   101,    56,     1,
       2,     3,     4,   113,   109,   120,    13,    67,    62,    67,
      13,    75,    29,     1,     2,     3,     4,    30,    31,   123,
      32,   115,    33,   130,    13,   116,    62,    40,    51,   126,
      62,    94,    95,    96,    97,    98,    67,    73,    14,    15,
      16,    17,   103,    79,    18,   135,    93,    80,    19,    83,
      20,    84,   139,   107,    85,   142,   143,   100,    21,   108,
     110,   111,    86,     1,     2,     3,     4,     1,     2,     3,
       4,   114,   121,   122,    13,   129,     1,     2,     3,     4,
     127,   128,   131,   132,   136,   -21,   134,    13,    14,    15,
      16,    17,   137,   138,    18,     7,   141,    81,    19,     0,
      20,    14,    15,    16,    17,   147,     0,    18,    21,     0,
       0,    19,   124,    20,     0,     1,     2,     3,     4,     0,
       0,    21,     0,     0,     0,   125,    13,     0,     1,     2,
       3,     4,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    16,    17,     0,     0,    18,     0,     0,     0,
      19,     0,    20,    14,    15,    16,    17,     0,     0,    18,
      21,     0,     0,    19,   145,    20,     0,     1,     2,     3,
       4,     0,     0,    21,     0,     0,     0,   146,    13,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     0,     0,
       0,    37,    14,    15,    16,    17,     0,     0,    18,     0,
       0,     0,    19,     0,    20,     1,     2,     3,     4,     0,
       0,     0,    21,     0,     0,     0,    13,    42,    43,    44,
      45,    46,    47,    48,    49,     0,     0,     0,     0,     0,
      14,    15,    16,    17,     0,     0,    18,     0,     0,     0,
      19,     0,    20,     0,     0,     0,     0,     0,     0,     0,
      21
};

static const yytype_int16 yycheck[] =
{
      12,    22,    30,    28,    50,    49,    14,    16,    29,    30,
      31,    22,    14,    68,    50,    14,    37,    33,    54,    37,
      41,    16,    34,    41,    27,    51,    42,    82,     0,    50,
      33,    39,    50,    41,   135,     8,     9,    39,   139,    41,
      49,    14,    41,    33,    15,    53,    67,    68,    69,    50,
      68,    79,    42,    99,    49,    49,    67,    78,    79,    51,
      81,    82,    52,    81,    85,    49,    39,    78,    41,     3,
       4,     5,     6,    50,    85,    50,    14,    54,    99,    54,
      14,    99,    49,     3,     4,     5,     6,    49,    49,   114,
      53,   103,    49,   121,    14,   107,   117,    53,    39,   117,
     121,    43,    44,    45,    46,    47,    54,    52,    28,    29,
      30,    31,    51,    53,    34,   127,    53,    50,    38,    50,
      40,    50,   134,    51,    54,   137,   138,    53,    48,    51,
      30,    50,    52,     3,     4,     5,     6,     3,     4,     5,
       6,    53,    49,    53,    14,    53,     3,     4,     5,     6,
      55,    52,    50,    32,    50,    52,    55,    14,    28,    29,
      30,    31,    51,    51,    34,     0,    53,    60,    38,    -1,
      40,    28,    29,    30,    31,   144,    -1,    34,    48,    -1,
      -1,    38,    52,    40,    -1,     3,     4,     5,     6,    -1,
      -1,    48,    -1,    -1,    -1,    52,    14,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,
      38,    -1,    40,    28,    29,    30,    31,    -1,    -1,    34,
      48,    -1,    -1,    38,    52,    40,    -1,     3,     4,     5,
       6,    -1,    -1,    48,    -1,    -1,    -1,    52,    14,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    40,     3,     4,     5,     6,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    14,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    57,    58,    59,     0,    49,
      15,    50,    51,    14,    28,    29,    30,    31,    34,    38,
      40,    48,    59,    60,    64,    74,    75,    49,    49,    49,
      49,    49,    53,    49,    51,    66,    74,    27,    60,    73,
      53,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      70,    39,    72,    64,     8,     9,    41,    63,    66,    67,
      71,    72,    74,    63,    74,    72,    60,    54,    16,    49,
      65,    53,    71,    52,    68,    71,    68,    50,    54,    53,
      50,    70,    16,    50,    50,    54,    52,    66,    74,    67,
      71,    74,    74,    53,    43,    44,    45,    46,    47,    69,
      53,    66,    63,    51,    71,    67,    74,    51,    51,    66,
      30,    50,    68,    50,    53,    60,    60,    33,    42,    61,
      50,    49,    53,    64,    52,    52,    71,    55,    52,    53,
      63,    50,    32,    62,    55,    60,    50,    51,    51,    60,
      75,    53,    60,    60,    75,    52,    52,    61
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    59,    59,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    61,
      61,    61,    62,    62,    63,    63,    63,    64,    64,    64,
      64,    65,    66,    66,    66,    66,    66,    66,    66,    67,
      68,    68,    69,    69,    69,    69,    69,    70,    70,    70,
      70,    70,    70,    70,    70,    71,    71,    71,    72,    73,
      73,    74,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     2,     1,     1,     1,     1,    11,     7,
       8,     2,     2,     5,     7,     7,     7,     9,     1,     6,
       5,     4,     4,     0,     3,     1,     1,     3,     3,     3,
       2,     2,     0,     3,     3,     1,     4,     3,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     2
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
#line 86 "translate.y"
              {strcpy(tipo, "INT");}
#line 1419 "y.tab.c"
    break;

  case 5: /* datatype: FLOAT  */
#line 87 "translate.y"
        {strcpy(tipo, "FLOAT");}
#line 1425 "y.tab.c"
    break;

  case 6: /* datatype: CHAR  */
#line 88 "translate.y"
       {strcpy(tipo, "CHAR");}
#line 1431 "y.tab.c"
    break;

  case 7: /* datatype: DOUBLE  */
#line 89 "translate.y"
         {strcpy(tipo, "DOUBLE");}
#line 1437 "y.tab.c"
    break;

  case 25: /* condition: TRUE  */
#line 116 "translate.y"
       {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
#line 1443 "y.tab.c"
    break;

  case 26: /* condition: FALSE  */
#line 117 "translate.y"
        {adcSimb(&tabela, "INT", yytext, yylineno, "BOOLEAN");}
#line 1449 "y.tab.c"
    break;

  case 39: /* const: NUMERO  */
#line 139 "translate.y"
              {adcSimb(&tabela, "CONST", yytext, yylineno, "CONSTANTE");}
#line 1455 "y.tab.c"
    break;

  case 42: /* aritmetica: PLUS  */
#line 145 "translate.y"
                 {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1461 "y.tab.c"
    break;

  case 43: /* aritmetica: MINUS  */
#line 146 "translate.y"
        {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1467 "y.tab.c"
    break;

  case 44: /* aritmetica: MULT  */
#line 147 "translate.y"
       {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1473 "y.tab.c"
    break;

  case 45: /* aritmetica: DIV  */
#line 148 "translate.y"
      {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1479 "y.tab.c"
    break;

  case 46: /* aritmetica: EXP  */
#line 149 "translate.y"
      {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "ARITIMETICO");}
#line 1485 "y.tab.c"
    break;

  case 47: /* relop: OU  */
#line 152 "translate.y"
          {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1491 "y.tab.c"
    break;

  case 48: /* relop: II  */
#line 153 "translate.y"
     {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1497 "y.tab.c"
    break;

  case 49: /* relop: MAIORIGUALQUE  */
#line 154 "translate.y"
                {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1503 "y.tab.c"
    break;

  case 50: /* relop: MENORIGUALQUE  */
#line 155 "translate.y"
                {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1509 "y.tab.c"
    break;

  case 51: /* relop: NOTIGUAL  */
#line 156 "translate.y"
           {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1515 "y.tab.c"
    break;

  case 52: /* relop: GEMEAS  */
#line 157 "translate.y"
         {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1521 "y.tab.c"
    break;

  case 53: /* relop: MAIORQUE  */
#line 158 "translate.y"
           {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1527 "y.tab.c"
    break;

  case 54: /* relop: MENORQUE  */
#line 159 "translate.y"
           {adcSimb(&tabela, "OPERADOR", yytext, yylineno, "LOGICO");}
#line 1533 "y.tab.c"
    break;

  case 58: /* string: STR  */
#line 167 "translate.y"
            {adcSimb(&tabela, "STRING", yytext, yylineno, "VETOR");}
#line 1539 "y.tab.c"
    break;

  case 61: /* identificador: ID  */
#line 173 "translate.y"
                  { strcpy(tipoSimbolo, "VARIAVEL"); adcSimb(&tabela, tipo, yytext, yylineno, tipoSimbolo);}
#line 1545 "y.tab.c"
    break;


#line 1549 "y.tab.c"

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

#line 179 "translate.y"




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

