/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintax.y"

 	#include <stdio.h>
    	#include <string.h>
   	#include <stdlib.h>
   	#include "lex.yy.c"

	/* A funcao yyparse() gerada pelo bison vai automaticamente chamar a funcao
	   yylex() do flex.
	   A funcao yyparse() esta' definida no ficheiro ".tab.c" gerada por este
	   ficheiro ".y" e a yylex() no ficheiro "lex.yy.c" gerada pelo ficheiro ".l".

	   Como ambos os ficheiros sao compilados de forma independente para so'
	   depois serem ligados (linked), o ficheiro ".y" precisa de ter definida a
	   funcao yylex() para nao dar erro de compilacao.
	   Infelizmente precisamos ques o bison corra antes do flex (para gerar o
	   ficheiro ".tab.h" com os %tokens e algumas outras definicoes). Entao
	   declaramos essa funcao do flex como sendo "definida noutro ficheiro fonte",
	   ou seja, "externa":
	*/

	struct valorTipo {
                int valorInteiro=0;
                float valorReal=0.0;
                bool valorBoleano=false;
                char* nome_var;
                char* tipo_var;
                char* local_var;
            } variaveis[100];

	extern int yylex( void );
	extern FILE *yyin;

	void yyerror(char *s);
	int count_error=0;

	/* Estrutura para guardar variáveis com nome, tipo e local onde foi declarada */
    struct {
        char nome [33];
        char tipo [6];
        char local [8];
    }
    vars[100];

    int debug=0;
    char* msg;
    void debuf(char*);
    void bashInfo(char*);
    void adiciona_var(const char*, const char*, const char*);

    int existe_var(const char*, const char*, const char*);
    void apresenta_debug(char*);

    /* TODO :  APAGAR ESTE COMENTARIO ?!?!?  - - */
    /*int debug=0;*/
    int variaveis_criadas=0;

    int vars_preenchidas=0;
    int le_var(const char *nome);
    int encontra_var(const char *nome, int adicionar);

#line 132 "sintax.c"

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

#include "sintax.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENT = 3,                      /* IDENT  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_SE = 7,                         /* SE  */
  YYSYMBOL_SENAO = 8,                      /* SENAO  */
  YYSYMBOL_ENQUANTO = 9,                   /* ENQUANTO  */
  YYSYMBOL_PARA = 10,                      /* PARA  */
  YYSYMBOL_OU = 11,                        /* OU  */
  YYSYMBOL_E = 12,                         /* E  */
  YYSYMBOL_NOT = 13,                       /* NOT  */
  YYSYMBOL_ESTRUTURA = 14,                 /* ESTRUTURA  */
  YYSYMBOL_CONST = 15,                     /* CONST  */
  YYSYMBOL_MAIN = 16,                      /* MAIN  */
  YYSYMBOL_LOCAL = 17,                     /* LOCAL  */
  YYSYMBOL_GLOBAL = 18,                    /* GLOBAL  */
  YYSYMBOL_ESCREVE = 19,                   /* ESCREVE  */
  YYSYMBOL_ESCREVETUDO = 20,               /* ESCREVETUDO  */
  YYSYMBOL_ESCREVESTRING = 21,             /* ESCREVESTRING  */
  YYSYMBOL_LE = 22,                        /* LE  */
  YYSYMBOL_LETUDO = 23,                    /* LETUDO  */
  YYSYMBOL_LESTRING = 24,                  /* LESTRING  */
  YYSYMBOL_EXPOENTE = 25,                  /* EXPOENTE  */
  YYSYMBOL_RAIZ = 26,                      /* RAIZ  */
  YYSYMBOL_SIZE = 27,                      /* SIZE  */
  YYSYMBOL_GEN = 28,                       /* GEN  */
  YYSYMBOL_RESIZE = 29,                    /* RESIZE  */
  YYSYMBOL_VIRGULA = 30,                   /* VIRGULA  */
  YYSYMBOL_ABRECHAVETA = 31,               /* ABRECHAVETA  */
  YYSYMBOL_FECHACHAVETA = 32,              /* FECHACHAVETA  */
  YYSYMBOL_ABREPARENT = 33,                /* ABREPARENT  */
  YYSYMBOL_FECHAPARENT = 34,               /* FECHAPARENT  */
  YYSYMBOL_ABREVETOR = 35,                 /* ABREVETOR  */
  YYSYMBOL_FECHAVETOR = 36,                /* FECHAVETOR  */
  YYSYMBOL_IGUAL = 37,                     /* IGUAL  */
  YYSYMBOL_PV = 38,                        /* PV  */
  YYSYMBOL_PF = 39,                        /* PF  */
  YYSYMBOL_ASPAS = 40,                     /* ASPAS  */
  YYSYMBOL_EXCLAMACAO = 41,                /* EXCLAMACAO  */
  YYSYMBOL_COMPARATIVOS = 42,              /* COMPARATIVOS  */
  YYSYMBOL_COMENTARIO = 43,                /* COMENTARIO  */
  YYSYMBOL_PARAGRAFO = 44,                 /* PARAGRAFO  */
  YYSYMBOL_INTEIRO = 45,                   /* INTEIRO  */
  YYSYMBOL_REAL = 46,                      /* REAL  */
  YYSYMBOL_BOOLEANO = 47,                  /* BOOLEANO  */
  YYSYMBOL_MAIS = 48,                      /* MAIS  */
  YYSYMBOL_MENOS = 49,                     /* MENOS  */
  YYSYMBOL_MULTIPLICA = 50,                /* MULTIPLICA  */
  YYSYMBOL_DIVIDE = 51,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 52,                    /* MODULO  */
  YYSYMBOL_empty = 53,                     /* empty  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_input = 55,                     /* input  */
  YYSYMBOL_vazio = 56,                     /* vazio  */
  YYSYMBOL_comentario = 57,                /* comentario  */
  YYSYMBOL_programa = 58,                  /* programa  */
  YYSYMBOL_estructs_inicio = 59,           /* estructs_inicio  */
  YYSYMBOL_estructs = 60,                  /* estructs  */
  YYSYMBOL_estruct_corpo = 61,             /* estruct_corpo  */
  YYSYMBOL_tipo = 62,                      /* tipo  */
  YYSYMBOL_declara_variavel = 63,          /* declara_variavel  */
  YYSYMBOL_primeira_variavel = 64,         /* primeira_variavel  */
  YYSYMBOL_segunda_variavel = 65,          /* segunda_variavel  */
  YYSYMBOL_fim_linha = 66,                 /* fim_linha  */
  YYSYMBOL_vetor = 67,                     /* vetor  */
  YYSYMBOL_vetor_corpo = 68,               /* vetor_corpo  */
  YYSYMBOL_ident_ou_inteiro = 69,          /* ident_ou_inteiro  */
  YYSYMBOL_calculos = 70,                  /* calculos  */
  YYSYMBOL_operador = 71,                  /* operador  */
  YYSYMBOL_vetor_corpo_extra = 72,         /* vetor_corpo_extra  */
  YYSYMBOL_vetor_listas = 73,              /* vetor_listas  */
  YYSYMBOL_gerador = 74,                   /* gerador  */
  YYSYMBOL_constante_inicio = 75,          /* constante_inicio  */
  YYSYMBOL_constante = 76,                 /* constante  */
  YYSYMBOL_declaracao_atribuicao = 77,     /* declaracao_atribuicao  */
  YYSYMBOL_atributo = 78,                  /* atributo  */
  YYSYMBOL_valor = 79,                     /* valor  */
  YYSYMBOL_global_inicio = 80,             /* global_inicio  */
  YYSYMBOL_global = 81,                    /* global  */
  YYSYMBOL_global_corpo = 82,              /* global_corpo  */
  YYSYMBOL_expressao = 83,                 /* expressao  */
  YYSYMBOL_expressao_equivalencia = 84,    /* expressao_equivalencia  */
  YYSYMBOL_expressao_continuacao = 85,     /* expressao_continuacao  */
  YYSYMBOL_valores = 86,                   /* valores  */
  YYSYMBOL_valores_dentro = 87,            /* valores_dentro  */
  YYSYMBOL_metodos = 88,                   /* metodos  */
  YYSYMBOL_size = 89,                      /* size  */
  YYSYMBOL_resize = 90,                    /* resize  */
  YYSYMBOL_expoente = 91,                  /* expoente  */
  YYSYMBOL_exponte_raiz_variavel = 92,     /* exponte_raiz_variavel  */
  YYSYMBOL_exponte_raiz_extra = 93,        /* exponte_raiz_extra  */
  YYSYMBOL_raiz = 94,                      /* raiz  */
  YYSYMBOL_write = 95,                     /* write  */
  YYSYMBOL_write_all = 96,                 /* write_all  */
  YYSYMBOL_write_string = 97,              /* write_string  */
  YYSYMBOL_read = 98,                      /* read  */
  YYSYMBOL_read_all = 99,                  /* read_all  */
  YYSYMBOL_read_string = 100,              /* read_string  */
  YYSYMBOL_main_inicio = 101,              /* main_inicio  */
  YYSYMBOL_main = 102,                     /* main  */
  YYSYMBOL_instrucoes = 103,               /* instrucoes  */
  YYSYMBOL_ciclos = 104,                   /* ciclos  */
  YYSYMBOL_condicao_for = 105,             /* condicao_for  */
  YYSYMBOL_condicional = 106,              /* condicional  */
  YYSYMBOL_condicoes_inicio = 107,         /* condicoes_inicio  */
  YYSYMBOL_condicoes_resto = 108,          /* condicoes_resto  */
  YYSYMBOL_operadores_logicos = 109,       /* operadores_logicos  */
  YYSYMBOL_senao = 110,                    /* senao  */
  YYSYMBOL_local = 111,                    /* local  */
  YYSYMBOL_declara_funcao = 112,           /* declara_funcao  */
  YYSYMBOL_parametros_com_tipo = 113,      /* parametros_com_tipo  */
  YYSYMBOL_parametro = 114                 /* parametro  */
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
typedef yytype_int16 yy_state_t;

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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   582

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  202
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  388

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   143,   143,   144,   147,   150,   154,   155,   159,   164,
     165,   166,   167,   168,   170,   171,   174,   175,   176,   177,
     178,   183,   184,   185,   188,   191,   194,   195,   196,   197,
     200,   201,   206,   207,   208,   211,   212,   213,   216,   217,
     220,   223,   224,   225,   226,   229,   230,   233,   234,   237,
     242,   243,   244,   245,   246,   249,   252,   253,   254,   255,
     256,   257,   260,   261,   264,   265,   266,   271,   272,   273,
     274,   275,   278,   281,   282,   283,   284,   285,   286,   290,
     293,   294,   295,   296,   299,   300,   301,   304,   305,   308,
     309,   310,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   325,   328,   331,   334,   335,   336,   337,   338,
     341,   342,   345,   348,   351,   354,   357,   360,   363,   368,
     369,   370,   373,   376,   379,   380,   381,   382,   385,   386,
     387,   390,   391,   392,   395,   396,   397,   398,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   413,   416,
     419,   422,   423,   424,   425,   426,   429,   430,   433,   436,
     439,   442,   445,   448,   451,   456,   457,   458,   459,   460,
     461,   463,   464,   465,   466,   476,   477,   480,   483,   486,
     487,   488,   491,   492,   493,   494,   495,   498,   499,   500,
     503,   504,   505,   508,   509,   512,   513,   514,   515,   518,
     519,   522,   523
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENT", "INT",
  "FLOAT", "BOOL", "SE", "SENAO", "ENQUANTO", "PARA", "OU", "E", "NOT",
  "ESTRUTURA", "CONST", "MAIN", "LOCAL", "GLOBAL", "ESCREVE",
  "ESCREVETUDO", "ESCREVESTRING", "LE", "LETUDO", "LESTRING", "EXPOENTE",
  "RAIZ", "SIZE", "GEN", "RESIZE", "VIRGULA", "ABRECHAVETA",
  "FECHACHAVETA", "ABREPARENT", "FECHAPARENT", "ABREVETOR", "FECHAVETOR",
  "IGUAL", "PV", "PF", "ASPAS", "EXCLAMACAO", "COMPARATIVOS", "COMENTARIO",
  "PARAGRAFO", "INTEIRO", "REAL", "BOOLEANO", "MAIS", "MENOS",
  "MULTIPLICA", "DIVIDE", "MODULO", "empty", "$accept", "input", "vazio",
  "comentario", "programa", "estructs_inicio", "estructs", "estruct_corpo",
  "tipo", "declara_variavel", "primeira_variavel", "segunda_variavel",
  "fim_linha", "vetor", "vetor_corpo", "ident_ou_inteiro", "calculos",
  "operador", "vetor_corpo_extra", "vetor_listas", "gerador",
  "constante_inicio", "constante", "declaracao_atribuicao", "atributo",
  "valor", "global_inicio", "global", "global_corpo", "expressao",
  "expressao_equivalencia", "expressao_continuacao", "valores",
  "valores_dentro", "metodos", "size", "resize", "expoente",
  "exponte_raiz_variavel", "exponte_raiz_extra", "raiz", "write",
  "write_all", "write_string", "read", "read_all", "read_string",
  "main_inicio", "main", "instrucoes", "ciclos", "condicao_for",
  "condicional", "condicoes_inicio", "condicoes_resto",
  "operadores_logicos", "senao", "local", "declara_funcao",
  "parametros_com_tipo", "parametro", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
#endif

#define YYPACT_NINF (-243)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -243,   304,  -243,  -243,   -41,   -11,    14,    24,  -243,   356,
    -243,   356,  -243,  -243,   292,  -243,   153,  -243,   143,  -243,
    -243,     9,   281,   335,    60,   292,   153,   143,  -243,   292,
     153,   143,  -243,    20,  -243,    20,  -243,   105,  -243,   105,
    -243,    86,  -243,    86,  -243,    96,     3,     9,  -243,     9,
     106,     9,   104,  -243,  -243,  -243,   281,  -243,   281,   147,
     126,   466,   335,  -243,   335,   163,   335,   145,   335,   165,
    -243,  -243,  -243,  -243,  -243,  -243,   276,  -243,  -243,  -243,
     156,   383,   383,  -243,  -243,   188,  -243,   509,  -243,  -243,
     187,   186,   378,  -243,  -243,  -243,  -243,   476,  -243,  -243,
    -243,   379,  -243,  -243,  -243,  -243,   226,   235,   209,   173,
       3,  -243,     3,  -243,  -243,   213,   214,   220,   225,   232,
     237,   241,   242,   256,   262,   281,   273,   277,   283,   288,
     295,   316,   318,   327,   329,   338,   475,  -243,  -243,  -243,
       2,   215,   339,  -243,  -243,   383,   342,  -243,  -243,   344,
    -243,  -243,   417,   345,   235,   509,   186,  -243,  -243,   354,
     279,   349,    73,  -243,  -243,   383,   387,   403,   405,   376,
     381,   384,   317,   317,   409,   410,  -243,  -243,  -243,  -243,
    -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,   281,    57,
     281,   416,   382,   388,   186,   186,   417,  -243,   186,  -243,
     335,   276,   448,     9,   395,   400,   418,  -243,   426,   432,
     442,  -243,  -243,  -243,   383,   383,   383,   383,   451,   383,
     452,   454,   460,  -243,   481,  -243,  -243,   467,  -243,  -243,
    -243,  -243,  -243,  -243,  -243,   466,   472,   474,   477,   478,
     448,  -243,   448,   448,   470,   448,   448,   479,   448,   448,
     448,  -243,   473,   482,   487,  -243,  -243,  -243,  -243,  -243,
     317,  -243,   317,  -243,  -243,  -243,   317,  -243,  -243,  -243,
     494,   486,   537,   134,   134,   538,   186,  -243,  -243,  -243,
     448,  -243,  -243,    16,  -243,  -243,  -243,   513,   400,   508,
     383,  -243,   514,   515,   299,  -243,   175,   140,   516,  -243,
     517,   522,   519,   281,  -243,   521,    16,  -243,    16,  -243,
     502,  -243,  -243,  -243,  -243,  -243,   388,   523,  -243,  -243,
    -243,   175,   175,   524,   525,   299,   527,   556,   186,   186,
     276,  -243,  -243,   526,   193,   347,   347,   448,   448,   531,
     448,   507,   530,   532,  -243,   560,   533,   535,  -243,   134,
     134,   175,   175,   534,   536,     3,   539,   540,   541,  -243,
     276,   276,  -243,  -243,  -243,  -243,    25,  -243,   542,  -243,
    -243,  -243,   543,  -243,    54,  -243,  -243,   299,   448,   448,
    -243,  -243,   544,   545,   186,  -243,    16,  -243
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     3,     1,     0,     0,     0,     0,     5,    14,
      13,    14,     2,     6,     4,    12,     4,    53,     4,    70,
       7,     4,     4,     4,     0,     4,     4,     4,   119,     4,
       4,     4,   120,     0,    54,     0,    11,     0,    71,     0,
      52,     0,   121,     0,    69,     0,     4,     4,    20,     4,
       0,     4,     0,    21,    22,    23,     4,    61,     4,     0,
       0,     0,     4,    78,     4,     0,     4,     0,     4,     0,
       9,    50,    67,    10,    51,    68,     0,    38,    39,    37,
       0,    35,     4,    16,    17,    14,    19,     0,    56,    57,
       0,     4,     0,    41,    42,    43,    44,     0,    79,    73,
      74,     0,    24,    75,    72,    77,     0,     0,     0,     0,
       0,    46,     0,    36,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    31,    55,
      38,     0,    39,    65,    66,     0,     0,    89,    80,     0,
      88,    86,     0,     0,     0,     0,     4,    25,    27,     0,
       0,     0,     0,    32,    40,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    64,     4,     0,
       4,     0,    90,     0,     4,     4,     0,    81,     4,    26,
       4,    28,     4,     4,     0,     0,     0,    45,     0,     0,
       0,   116,   117,   118,     4,     4,     4,     4,     0,     4,
       0,     0,     0,    58,     0,    62,    59,    91,    87,    82,
      85,    84,    83,    76,    29,     0,     0,     0,     0,     0,
       4,   174,     4,     4,     0,     4,     4,     0,     4,     4,
       4,    18,     0,    47,     0,    34,   113,   114,   115,   111,
       0,   105,     0,   108,   109,   106,     0,   107,   112,   102,
       0,     0,     0,     0,     0,     0,     4,   165,   166,   167,
       4,   169,   170,     4,   171,   172,   173,     0,     0,     0,
       4,   110,     0,     0,     0,   137,     0,   186,     0,   179,
       0,     0,     0,     4,   168,     0,     4,   198,     4,   122,
       0,    48,    33,   104,   103,    63,    88,     0,   187,   188,
     189,     0,     0,     0,     0,     0,     0,     0,     4,     4,
       4,   195,   196,     0,     0,   183,   185,     4,     4,     0,
       4,     0,     0,     0,   202,     0,     0,   199,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
       0,     4,   181,   180,   182,   184,     4,   175,     0,   176,
     193,   194,     0,   200,     0,   192,   178,     0,     4,     4,
     190,   177,     0,     0,     4,   191,     4,   197
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -243,  -243,     0,    49,  -243,  -243,    23,   -42,    66,    50,
     415,  -243,   -50,   -77,  -243,   -18,    11,    78,   408,   282,
    -243,   298,   340,   -48,   286,  -132,   272,   450,   -51,    67,
    -243,  -115,   -53,  -139,    76,  -243,  -243,   -26,  -130,   263,
      -3,  -243,  -243,  -243,  -243,  -243,  -243,   158,   190,    51,
    -243,  -243,   201,  -177,  -242,   113,  -243,  -243,  -222,   221,
    -243
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,   241,   242,    12,    13,    14,    50,   107,   243,
     102,   157,   139,    51,    80,   145,   244,   262,   113,   254,
     206,    15,    16,    60,   188,   147,    17,    18,    67,   245,
      98,   148,   297,   150,   246,   126,   127,   128,   291,   261,
     129,   130,   131,   132,   133,   134,   135,    19,    28,   247,
     248,   302,   249,   298,   299,   322,   376,   250,   309,   346,
     347
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       2,    10,   193,    20,   189,    83,    77,    84,    88,    86,
      89,    99,    45,   100,    34,   103,    38,   105,    42,   305,
      21,    48,    57,    63,   158,    34,    38,    42,    81,    34,
      38,    42,    25,   374,    29,     6,    24,   197,     7,   149,
     -90,   191,   218,   220,    46,    22,    79,    48,    78,    48,
      11,    48,     8,    47,   317,    23,    57,    82,    57,     8,
     306,   236,    63,    35,    63,    39,    63,    43,    63,   137,
      49,    58,    64,    66,    35,    39,    43,   176,    35,    39,
      43,   231,   111,   158,   331,   379,   332,   224,    59,    65,
      68,   138,   164,    69,   165,   225,    49,   300,    49,   149,
      49,   204,    24,   146,   205,    58,   201,    58,   114,   364,
     365,    64,    66,    64,    66,    64,    66,    64,    66,   216,
     216,    24,    59,     7,    59,    57,   108,    76,    65,    68,
      65,    68,    65,    68,    65,    68,   292,   192,    85,    97,
     223,    87,   226,   149,   229,   230,   217,   217,   232,   233,
      90,   318,   319,   320,   214,   214,   138,   316,    91,   110,
     112,   251,   189,   125,   387,   111,   101,   296,   151,   219,
     219,     7,   362,   363,    58,   153,    44,   104,   192,   187,
     143,   144,   321,   215,   215,    72,     8,    41,    57,    75,
      57,    59,   109,   339,   138,   138,     8,    37,   138,   106,
      63,    32,     5,    48,   318,   319,   320,   216,   141,   216,
     162,   163,   190,   216,   259,   259,   259,   259,   192,   259,
     187,   143,   144,   110,   136,    32,   303,   196,   151,    32,
     137,   200,   159,    32,   217,   349,   217,    58,   160,    58,
     217,   161,   290,   112,   214,   381,   166,   167,   214,    64,
      66,   234,    49,   168,    59,   329,    59,   219,   169,   219,
     187,   143,   144,   219,   158,   170,    65,    68,   335,   336,
     171,   215,   151,   215,   172,   173,   138,   215,   342,   343,
      53,    54,    55,   307,    52,    53,    54,    55,    40,   174,
     259,   277,   260,   278,   279,   175,   281,   282,    71,   284,
     285,   286,    74,    57,     3,     4,   307,     6,   307,   154,
       7,   177,    36,    97,    46,   178,   375,   156,     5,     6,
     140,   179,     7,    70,     8,    56,   180,    73,   138,   138,
     344,   304,   308,   181,   386,     8,    33,   368,    61,    53,
      54,    55,   121,   122,   187,   143,   144,     8,     9,    26,
     141,    30,    58,   328,   182,   308,   183,   308,   318,   319,
     320,   344,   142,   143,   144,   184,   138,   185,   260,   327,
       5,     6,    24,    26,     7,    30,   186,   -64,     8,    62,
     194,   140,   195,   198,   138,   202,   307,   203,   353,   354,
     208,   356,    93,    94,    95,    96,   345,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   209,   124,   210,   154,
     211,   141,   221,   222,    46,   212,   155,   156,   213,   227,
     192,   191,   228,   142,   143,   144,   372,   345,   252,   382,
     383,    93,    94,    95,    96,   308,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   253,   124,   350,   351,   352,
     141,   235,    53,    54,    55,   236,   255,   237,   238,    27,
     256,    31,   187,   143,   144,   239,   257,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   258,   124,   263,   264,
     265,   266,   267,    27,   271,    31,   268,    27,   269,    31,
     270,     8,   240,    78,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    92,   124,   273,   272,   274,   280,   276,
     275,   283,   288,   152,    93,    94,    95,    96,   287,   289,
     187,   143,   144,   294,    93,    94,    95,    96,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   154,   124,   293,
     295,   301,    46,   310,   136,   156,   312,   333,   313,   314,
     323,   324,   325,   326,   330,   337,   338,   334,   340,   341,
     348,   355,   357,   359,   358,   361,   366,   360,   367,   199,
     311,   369,   377,   207,   378,   380,   384,   385,   370,   371,
     315,     0,   373
};

static const yytype_int16 yycheck[] =
{
       0,     1,   141,    44,   136,    47,     3,    49,    56,    51,
      58,    62,     3,    64,    14,    66,    16,    68,    18,     3,
      31,    21,    22,    23,   101,    25,    26,    27,    46,    29,
      30,    31,     9,     8,    11,    15,    16,   152,    18,    92,
      38,    39,   172,   173,    35,    31,    46,    47,    45,    49,
       1,    51,    43,    44,   296,    31,    56,    46,    58,    43,
      44,     7,    62,    14,    64,    16,    66,    18,    68,    44,
      21,    22,    23,    23,    25,    26,    27,   125,    29,    30,
      31,   196,    82,   160,   306,    31,   308,    30,    22,    23,
      23,    91,   110,    33,   112,    38,    47,   274,    49,   152,
      51,    28,    16,    92,    31,    56,   156,    58,    85,   351,
     352,    62,    62,    64,    64,    66,    66,    68,    68,   172,
     173,    16,    56,    18,    58,   125,    76,    31,    62,    62,
      64,    64,    66,    66,    68,    68,   266,     3,    32,    61,
     188,    37,   190,   196,   194,   195,   172,   173,   198,   200,
       3,    11,    12,    13,   172,   173,   156,   296,    32,    81,
      82,   203,   294,    87,   386,   165,     3,    33,    92,   172,
     173,    18,   349,   350,   125,    97,    18,    32,     3,    45,
      46,    47,    42,   172,   173,    27,    43,    44,   188,    31,
     190,   125,    36,   325,   194,   195,    43,    44,   198,    34,
     200,    11,    14,   203,    11,    12,    13,   260,    33,   262,
      37,    38,   136,   266,   214,   215,   216,   217,     3,   219,
      45,    46,    47,   145,    37,    35,   276,   149,   152,    39,
      44,   155,     6,    43,   260,    42,   262,   188,     3,   190,
     266,    32,   260,   165,   262,   377,    33,    33,   266,   200,
     200,   201,   203,    33,   188,   303,   190,   260,    33,   262,
      45,    46,    47,   266,   341,    33,   200,   200,   321,   322,
      33,   260,   196,   262,    33,    33,   276,   266,   328,   329,
       4,     5,     6,   283,     3,     4,     5,     6,    16,    33,
     290,   240,   214,   242,   243,    33,   245,   246,    26,   248,
     249,   250,    30,   303,     0,     1,   306,    15,   308,    30,
      18,    38,    14,   235,    35,    38,   366,    38,    14,    15,
       3,    38,    18,    25,    43,    44,    38,    29,   328,   329,
     330,   280,   283,    38,   384,    43,    44,   355,     3,     4,
       5,     6,    25,    26,    45,    46,    47,    43,    44,     9,
      33,    11,   303,   303,    38,   306,    38,   308,    11,    12,
      13,   361,    45,    46,    47,    38,   366,    38,   290,   303,
      14,    15,    16,    33,    18,    35,    38,    38,    43,    44,
      38,     3,    38,    38,   384,    31,   386,    38,   337,   338,
       3,   340,    48,    49,    50,    51,   330,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     3,    29,     3,    30,
      34,    33,     3,     3,    35,    34,    37,    38,    34,     3,
       3,    39,    34,    45,    46,    47,   360,   361,    33,   378,
     379,    48,    49,    50,    51,   386,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    45,    29,   334,   335,   336,
      33,     3,     4,     5,     6,     7,    38,     9,    10,     9,
      34,    11,    45,    46,    47,    17,    34,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    34,    29,   215,   216,
     217,    30,   219,    33,     3,    35,    34,    37,    34,    39,
      30,    43,    44,    45,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    37,    29,    33,    39,    33,    38,    31,
      33,    32,    30,    37,    48,    49,    50,    51,    45,    32,
      45,    46,    47,    37,    48,    49,    50,    51,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    30,    29,    45,
       3,     3,    35,    30,    37,    38,    38,    45,    34,    34,
      34,    34,    30,    34,    33,    31,    31,    34,    31,     3,
      34,    30,    32,     3,    32,    30,    32,    34,    32,   154,
     288,    32,    30,   165,    31,   374,    32,    32,    38,    38,
     294,    -1,   361
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    55,    56,     0,     1,    14,    15,    18,    43,    44,
      56,    57,    58,    59,    60,    75,    76,    80,    81,   101,
      44,    31,    31,    31,    16,    60,    76,    81,   102,    60,
      76,    81,   102,    44,    56,    57,    75,    44,    56,    57,
      80,    44,    56,    57,   101,     3,    35,    44,    56,    57,
      61,    67,     3,     4,     5,     6,    44,    56,    57,    62,
      77,     3,    44,    56,    57,    62,    63,    82,    83,    33,
      75,    80,   101,    75,    80,   101,    31,     3,    45,    56,
      68,    69,    70,    61,    61,    32,    61,    37,    77,    77,
       3,    32,    37,    48,    49,    50,    51,    71,    84,    82,
      82,     3,    64,    82,    32,    82,    34,    62,    63,    36,
      71,    56,    71,    72,    60,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    29,    88,    89,    90,    91,    94,
      95,    96,    97,    98,    99,   100,    37,    44,    56,    66,
       3,    33,    45,    46,    47,    69,    70,    79,    85,    86,
      87,    88,    37,    71,    30,    37,    38,    65,    67,     6,
       3,    32,    37,    38,    69,    69,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    77,    38,    38,    38,
      38,    38,    38,    38,    38,    38,    38,    45,    78,    79,
      88,    39,     3,    87,    38,    38,    71,    85,    38,    64,
      88,    66,    31,    38,    28,    31,    74,    72,     3,     3,
       3,    34,    34,    34,    69,    70,    86,    91,    92,    94,
      92,     3,     3,    77,    30,    38,    77,     3,    34,    66,
      66,    85,    66,    82,    63,     3,     7,     9,    10,    17,
      44,    56,    57,    63,    70,    83,    88,   103,   104,   106,
     111,    61,    33,    45,    73,    38,    34,    34,    34,    56,
      71,    93,    71,    93,    93,    93,    30,    93,    34,    34,
      30,     3,    39,    33,    33,    33,    31,   103,   103,   103,
      38,   103,   103,    32,   103,   103,   103,    45,    30,    32,
      69,    92,    92,    45,    37,     3,    33,    86,   107,   108,
     107,     3,   105,    66,   103,     3,    44,    56,    57,   112,
      30,    73,    38,    34,    34,    78,    87,   108,    11,    12,
      13,    42,   109,    34,    34,    30,    34,    62,    63,    77,
      33,   112,   112,    45,    34,    86,    86,    31,    31,    79,
      31,     3,    66,    66,    56,    62,   113,   114,    34,    42,
     109,   109,   109,   103,   103,    30,   103,    32,    32,     3,
      34,    30,   107,   107,   108,   108,    32,    32,    69,    32,
      38,    38,    62,   113,     8,    66,   110,    30,    31,    31,
     106,    79,   103,   103,    32,    32,    66,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    56,    57,    58,    58,    57,    59,
      59,    59,    59,    59,    60,    60,    61,    61,    61,    61,
      61,    62,    62,    62,    63,    64,    65,    65,    65,    65,
      66,    66,    67,    67,    67,    68,    68,    68,    69,    69,
      70,    71,    71,    71,    71,    72,    72,    73,    73,    74,
      75,    75,    75,    75,    75,    76,    77,    77,    77,    77,
      77,    77,    78,    78,    79,    79,    79,    80,    80,    80,
      80,    80,    81,    82,    82,    82,    82,    82,    82,    83,
      84,    84,    84,    84,    85,    85,    85,    86,    86,    87,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    89,    90,    91,    92,    92,    92,    92,    92,
      93,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     101,   101,   102,    83,    84,    84,    84,    84,    85,    85,
      85,    86,    86,    86,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    89,    90,
      91,    92,    92,    92,    92,    92,    93,    93,    94,    95,
      96,    97,    98,    99,   100,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   105,   106,   107,
     107,   107,   108,   108,   108,   108,   108,   109,   109,   109,
     110,   110,   110,   111,   111,   112,   112,   112,   112,   113,
     113,   114,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     1,     1,     2,     1,     3,
       3,     2,     1,     1,     0,     5,     2,     2,     6,     2,
       1,     1,     1,     1,     2,     2,     2,     1,     2,     3,
       1,     1,     4,     8,     6,     1,     2,     1,     1,     1,
       3,     1,     1,     1,     1,     3,     1,     1,     3,     6,
       3,     3,     2,     1,     1,     5,     2,     2,     5,     5,
       4,     1,     2,     5,     1,     1,     1,     3,     3,     2,
       1,     1,     4,     2,     2,     2,     5,     2,     1,     2,
       2,     3,     4,     4,     3,     3,     1,     3,     1,     1,
       1,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     6,     6,     2,     2,     2,     2,     2,
       2,     1,     4,     4,     4,     4,     3,     3,     3,     2,
       2,     1,     8,     2,     2,     3,     4,     4,     3,     3,
       1,     3,     3,     1,     1,     1,     3,     5,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     6,
       6,     2,     2,     2,     2,     2,     2,     1,     4,     4,
       4,     4,     3,     3,     3,     2,     2,     2,     3,     2,
       2,     2,     2,     2,     1,     7,     7,     7,     8,     1,
       5,     5,     5,     3,     5,     3,     1,     1,     1,     1,
       2,     4,     1,     7,     7,     2,     2,    10,     1,     1,
       3,     2,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 5: /* comentario: COMENTARIO  */
#line 150 "sintax.y"
                   {printf("Comentario encontrado\n");}
#line 1559 "sintax.c"
    break;

  case 7: /* programa: error PARAGRAFO  */
#line 155 "sintax.y"
                       { yyerrok; }
#line 1565 "sintax.c"
    break;

  case 8: /* comentario: COMENTARIO  */
#line 159 "sintax.y"
                   {printf("Comentario encontrado\n");}
#line 1571 "sintax.c"
    break;

  case 9: /* estructs_inicio: PARAGRAFO estructs constante_inicio  */
#line 164 "sintax.y"
                                            {printf("Paragrafo Estruturas encontrado\n");}
#line 1577 "sintax.c"
    break;

  case 10: /* estructs_inicio: comentario estructs constante_inicio  */
#line 165 "sintax.y"
                                             {printf("Comentario de Estruturas encontrado\n");}
#line 1583 "sintax.c"
    break;

  case 15: /* estructs: ESTRUTURA ABRECHAVETA estruct_corpo FECHACHAVETA estructs  */
#line 171 "sintax.y"
                                                                  {printf("Estruturas encontrado\n");}
#line 1589 "sintax.c"
    break;

  case 19: /* estruct_corpo: vetor estruct_corpo  */
#line 177 "sintax.y"
                             {printf("Vetor dentro de estruturas encontrado\n");}
#line 1595 "sintax.c"
    break;

  case 21: /* tipo: INT  */
#line 183 "sintax.y"
            {printf("Valor INTEIRO encontrado\n");}
#line 1601 "sintax.c"
    break;

  case 22: /* tipo: FLOAT  */
#line 184 "sintax.y"
              {printf("Valor FLOAT encontrado\n");}
#line 1607 "sintax.c"
    break;

  case 23: /* tipo: BOOL  */
#line 185 "sintax.y"
             {printf("Valor BOLEANO encontrado\n");}
#line 1613 "sintax.c"
    break;

  case 25: /* primeira_variavel: IDENT segunda_variavel  */
#line 191 "sintax.y"
                                     {(yyval.tipoint) = encontra_var((yyvsp[-1].nome_var),1);}
#line 1619 "sintax.c"
    break;

  case 32: /* vetor: ABREVETOR vetor_corpo FECHAVETOR PV  */
#line 206 "sintax.y"
                                                                {printf("Vetor encontrado\n");}
#line 1625 "sintax.c"
    break;

  case 33: /* vetor: ABREVETOR vetor_corpo FECHAVETOR IGUAL ABRECHAVETA vetor_listas FECHACHAVETA PV  */
#line 207 "sintax.y"
                                                                                        {printf("Vetor encontrado\n");}
#line 1631 "sintax.c"
    break;

  case 34: /* vetor: ABREVETOR vetor_corpo FECHAVETOR IGUAL gerador PV  */
#line 208 "sintax.y"
                                                                {printf("Vetor encontrado\n");}
#line 1637 "sintax.c"
    break;

  case 35: /* vetor_corpo: ident_ou_inteiro  */
#line 211 "sintax.y"
                                {printf("Vetor com variavel encontrado\n");}
#line 1643 "sintax.c"
    break;

  case 36: /* vetor_corpo: calculos vetor_corpo_extra  */
#line 212 "sintax.y"
                                   {printf("Vetor com calculo encontrado\n");}
#line 1649 "sintax.c"
    break;

  case 37: /* vetor_corpo: vazio  */
#line 213 "sintax.y"
                {printf("Vetor vazio encontrado\n");}
#line 1655 "sintax.c"
    break;

  case 38: /* ident_ou_inteiro: IDENT  */
#line 216 "sintax.y"
                {printf("Identificação de variavel encontrado\n");}
#line 1661 "sintax.c"
    break;

  case 40: /* calculos: ident_ou_inteiro operador ident_ou_inteiro  */
#line 220 "sintax.y"
                                                    {printf("Calculos encontrados\n");}
#line 1667 "sintax.c"
    break;

  case 49: /* gerador: GEN ABREPARENT INTEIRO VIRGULA INTEIRO FECHAPARENT  */
#line 237 "sintax.y"
                                                           {printf("Gerador encontrado\n");}
#line 1673 "sintax.c"
    break;

  case 50: /* constante_inicio: PARAGRAFO constante global_inicio  */
#line 242 "sintax.y"
                                          {printf("Paragrafo de Constante encontrado\n");}
#line 1679 "sintax.c"
    break;

  case 51: /* constante_inicio: comentario constante global_inicio  */
#line 243 "sintax.y"
                                           {printf("Comentario de Constante encontrado\n");}
#line 1685 "sintax.c"
    break;

  case 55: /* constante: CONST ABRECHAVETA declaracao_atribuicao FECHACHAVETA fim_linha  */
#line 249 "sintax.y"
                                                                       {printf("Constante encontrado\n");}
#line 1691 "sintax.c"
    break;

  case 67: /* global_inicio: PARAGRAFO global main_inicio  */
#line 271 "sintax.y"
                                     {printf("Paragrafo de Global encontrado\n");}
#line 1697 "sintax.c"
    break;

  case 68: /* global_inicio: comentario global main_inicio  */
#line 272 "sintax.y"
                                      {printf("Comentario de Global encontrado\n");}
#line 1703 "sintax.c"
    break;

  case 72: /* global: GLOBAL ABRECHAVETA global_corpo FECHACHAVETA  */
#line 278 "sintax.y"
                                                     {printf("GLobal encontrado\n");}
#line 1709 "sintax.c"
    break;

  case 79: /* expressao: IDENT expressao_equivalencia  */
#line 290 "sintax.y"
                                     {printf("Expressao encontrada\n");}
#line 1715 "sintax.c"
    break;

  case 102: /* size: SIZE ABREPARENT IDENT FECHAPARENT  */
#line 325 "sintax.y"
                                          {printf("Metodo SIZE encontrado\n");}
#line 1721 "sintax.c"
    break;

  case 103: /* resize: RESIZE ABREPARENT IDENT VIRGULA INTEIRO FECHAPARENT  */
#line 328 "sintax.y"
                                                            {printf("Metodo RESIZE encontrado\n");}
#line 1727 "sintax.c"
    break;

  case 104: /* expoente: EXPOENTE ABREPARENT exponte_raiz_variavel VIRGULA exponte_raiz_variavel FECHAPARENT  */
#line 331 "sintax.y"
                                                                                            {printf("Metodo EXPOENTE encontrado\n");}
#line 1733 "sintax.c"
    break;

  case 112: /* raiz: RAIZ ABREPARENT exponte_raiz_variavel FECHAPARENT  */
#line 345 "sintax.y"
                                                          {printf("Metodo RAIZ encontrado\n");}
#line 1739 "sintax.c"
    break;

  case 113: /* write: ESCREVE ABREPARENT IDENT FECHAPARENT  */
#line 348 "sintax.y"
                                             {printf("Metodo write encontrado\n");}
#line 1745 "sintax.c"
    break;

  case 114: /* write_all: ESCREVETUDO ABREPARENT IDENT FECHAPARENT  */
#line 351 "sintax.y"
                                                 {printf("Metodo write_all encontrado\n");}
#line 1751 "sintax.c"
    break;

  case 115: /* write_string: ESCREVESTRING ABREPARENT IDENT FECHAPARENT  */
#line 354 "sintax.y"
                                                   {printf("Metodo write_string encontrado\n");}
#line 1757 "sintax.c"
    break;

  case 116: /* read: LE ABREPARENT FECHAPARENT  */
#line 357 "sintax.y"
                                  {printf("Metodo read encontrado\n");}
#line 1763 "sintax.c"
    break;

  case 117: /* read_all: LETUDO ABREPARENT FECHAPARENT  */
#line 360 "sintax.y"
                                      {printf("Metodo read_all encontrado\n");}
#line 1769 "sintax.c"
    break;

  case 118: /* read_string: LESTRING ABREPARENT FECHAPARENT  */
#line 363 "sintax.y"
                                        {printf("Metodo read_string encontrado\n");}
#line 1775 "sintax.c"
    break;

  case 119: /* main_inicio: PARAGRAFO main  */
#line 368 "sintax.y"
                       {printf("Paragrafo de Global encontrado\n");}
#line 1781 "sintax.c"
    break;

  case 120: /* main_inicio: comentario main  */
#line 369 "sintax.y"
                        {printf("Comentario de Global encontrado\n");}
#line 1787 "sintax.c"
    break;

  case 122: /* main: MAIN ABREPARENT FECHAPARENT BOOL ABRECHAVETA instrucoes FECHACHAVETA declara_funcao  */
#line 373 "sintax.y"
                                                                                            {printf("Main encontrado\n");}
#line 1793 "sintax.c"
    break;

  case 123: /* expressao: IDENT expressao_equivalencia  */
#line 376 "sintax.y"
                                     {printf("Expressao encontrada\n");}
#line 1799 "sintax.c"
    break;

  case 148: /* size: SIZE ABREPARENT IDENT FECHAPARENT  */
#line 413 "sintax.y"
                                          {printf("Metodo SIZE encontrado\n");}
#line 1805 "sintax.c"
    break;

  case 149: /* resize: RESIZE ABREPARENT IDENT VIRGULA INTEIRO FECHAPARENT  */
#line 416 "sintax.y"
                                                            {printf("Metodo RESIZE encontrado\n");}
#line 1811 "sintax.c"
    break;

  case 150: /* expoente: EXPOENTE ABREPARENT exponte_raiz_variavel VIRGULA exponte_raiz_variavel FECHAPARENT  */
#line 419 "sintax.y"
                                                                                            {printf("Metodo EXPOENTE encontrado\n");}
#line 1817 "sintax.c"
    break;

  case 158: /* raiz: RAIZ ABREPARENT exponte_raiz_variavel FECHAPARENT  */
#line 433 "sintax.y"
                                                          {printf("Metodo RAIZ encontrado\n");}
#line 1823 "sintax.c"
    break;

  case 159: /* write: ESCREVE ABREPARENT IDENT FECHAPARENT  */
#line 436 "sintax.y"
                                             {printf("Metodo write encontrado\n");}
#line 1829 "sintax.c"
    break;

  case 160: /* write_all: ESCREVETUDO ABREPARENT IDENT FECHAPARENT  */
#line 439 "sintax.y"
                                                 {printf("Metodo write_all encontrado\n");}
#line 1835 "sintax.c"
    break;

  case 161: /* write_string: ESCREVESTRING ABREPARENT IDENT FECHAPARENT  */
#line 442 "sintax.y"
                                                   {printf("Metodo write_string encontrado\n");}
#line 1841 "sintax.c"
    break;

  case 162: /* read: LE ABREPARENT FECHAPARENT  */
#line 445 "sintax.y"
                                  {printf("Metodo read encontrado\n");}
#line 1847 "sintax.c"
    break;

  case 163: /* read_all: LETUDO ABREPARENT FECHAPARENT  */
#line 448 "sintax.y"
                                      {printf("Metodo read_all encontrado\n");}
#line 1853 "sintax.c"
    break;

  case 164: /* read_string: LESTRING ABREPARENT FECHAPARENT  */
#line 451 "sintax.y"
                                        {printf("Metodo read_string encontrado\n");}
#line 1859 "sintax.c"
    break;

  case 173: /* instrucoes: local instrucoes  */
#line 465 "sintax.y"
                         {printf("Local encontrado\n");}
#line 1865 "sintax.c"
    break;

  case 175: /* ciclos: ENQUANTO ABREPARENT condicoes_inicio FECHAPARENT ABRECHAVETA instrucoes FECHACHAVETA  */
#line 476 "sintax.y"
                                                                                             {printf("Ciclo While encontrados\n");}
#line 1871 "sintax.c"
    break;

  case 176: /* ciclos: PARA ABREPARENT condicao_for FECHAPARENT ABRECHAVETA instrucoes FECHACHAVETA  */
#line 477 "sintax.y"
                                                                                       {printf("Ciclo For encontrados\n");}
#line 1877 "sintax.c"
    break;

  case 178: /* condicional: SE ABREPARENT condicoes_inicio FECHAPARENT ABRECHAVETA instrucoes FECHACHAVETA senao  */
#line 483 "sintax.y"
                                                                                             {printf("Condicional SE encontrado\n");}
#line 1883 "sintax.c"
    break;

  case 190: /* senao: SENAO condicional  */
#line 503 "sintax.y"
                          {printf("Condicional SENAO encontrado\n");}
#line 1889 "sintax.c"
    break;

  case 191: /* senao: SENAO ABRECHAVETA instrucoes FECHACHAVETA  */
#line 504 "sintax.y"
                                                  {printf("Condicional SENAO encontrado\n");}
#line 1895 "sintax.c"
    break;

  case 197: /* declara_funcao: IDENT ABREPARENT parametros_com_tipo FECHAPARENT tipo ABRECHAVETA instrucoes FECHACHAVETA fim_linha declara_funcao  */
#line 514 "sintax.y"
                                                                                                                           {printf("Declara funcao encontrada\n");}
#line 1901 "sintax.c"
    break;


#line 1905 "sintax.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 525 "sintax.y"


/* INICIO DE FUNÇÕES PARA COMPILADOR */
/* Funcao main para leitura do ficheiro a compilar*/
int main(int argc, char** argv) {
	if (argc<2) {
		bashInfo(argv[0]);
	} else {
		yyin = fopen(argv[1], "r");
		if (NULL != yyin) {
			yyparse();
			fclose(yyin);
			if (count_error == 0) {
				printf("\nPrograma sem erros.\n \n");
			}
			else if(count_error == 1){
				printf("\nExiste %d erro no ficheiro. \n \n", count_error);
			} else {
				printf("\nExistem %d erros no ficheiro. \n \n", count_error);
			}
		}
		else {
			printf("\n Impossivel abrir o ficheiro: %s", argv[1]);
			bashInfo(argv[0]);
		}
	}
	return 0;
}

/* Contangem de erros encontrados, com ativação yylineno seria possivel colocar em que se encontrou o erro */
void yyerror(char *s) {
	count_error++;
	fprintf(stderr,"%s\n",s); /* output para debug */
}

/* Funcao para leitura de variaveis, permite verificar se variavel já foi declarada */
int le_var(const char *nome) {
	int i;

	i = encontra_var(nome, 0);
	if (i < 0)
	{
		fprintf(stderr, "Referencia a variavel inexistente: %s\n", nome); /* output para debug */
		count_error++;
	}
    return 0;
}


/* funcao para procurar variavel e/ou adicionar variavel */
int encontra_var(const char *nome, int adicionar) {
	int i;
	for (i = 0; i < vars_preenchidas; i++)
	{
		if (strcmp(vars[i].nome, nome) == 0)
			return i;
	}
	if (adicionar && i < 100)
	{
		strcpy(vars[i].nome, nome);
		vars_preenchidas++;
        fprintf(stderr,"Variavel %s declarada\n", nome); /* output para debug */
		return i;
	}
    return -1;
}


/* funcao para apresentar info de funcionamento do EfolioA */
void bashInfo(char* argumento) {
    printf("\n");
    printf("funcionamento: %s <ficheiro>\n", argumento);
    printf("\n");
    printf(" <ficheiro>\tFicheiro em linguagem YAIL\n");
}
