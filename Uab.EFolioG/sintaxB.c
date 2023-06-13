/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintaxB.y"

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

    int variaveis_criadas=0;

    int vars_preenchidas=0;
    int le_var(const char *nome);
    int encontra_var(const char *nome, int adicionar);

#line 120 "sintaxB.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SINTAXB_H_INCLUDED
# define YY_YY_SINTAXB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    INT = 259,
    FLOAT = 260,
    BOOL = 261,
    SE = 262,
    SENAO = 263,
    ENQUANTO = 264,
    PARA = 265,
    OU = 266,
    E = 267,
    NOT = 268,
    ESTRUTURA = 269,
    CONST = 270,
    MAIN = 271,
    LOCAL = 272,
    GLOBAL = 273,
    ESCREVE = 274,
    ESCREVETUDO = 275,
    ESCREVESTRING = 276,
    LE = 277,
    LETUDO = 278,
    LESTRING = 279,
    EXPOENTE = 280,
    RAIZ = 281,
    SIZE = 282,
    GEN = 283,
    RESIZE = 284,
    VIRGULA = 285,
    ABRECHAVETA = 286,
    FECHACHAVETA = 287,
    ABREPARENT = 288,
    FECHAPARENT = 289,
    ABREVETOR = 290,
    FECHAVETOR = 291,
    IGUAL = 292,
    PV = 293,
    PF = 294,
    ASPAS = 295,
    EXCLAMACAO = 296,
    COMPARATIVOS = 297,
    OPERADOR = 298,
    OPERADORLOGICO = 299,
    COMENTARIO = 300,
    PARAGRAFO = 301,
    INTEIRO = 302,
    REAL = 303,
    BOOLEANO = 304,
    MAIS = 305,
    MENOS = 306,
    MULTIPLICA = 307,
    DIVIDE = 308,
    MODULO = 309,
    INCREMENTO = 310,
    DECREMENTO = 311,
    empty = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "sintaxB.y"

        char nome_var[33];
        int tipoint;
     

#line 236 "sintaxB.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTAXB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYLAST   558

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  380

#define YYUNDEFTOK  2
#define YYMAXUTOK   312


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   130,   130,   131,   134,   137,   141,   142,   159,   160,
     161,   162,   164,   165,   168,   169,   171,   172,   173,   193,
     194,   195,   198,   201,   204,   205,   206,   207,   210,   211,
     216,   217,   218,   221,   222,   223,   226,   227,   230,   233,
     234,   235,   236,   239,   240,   243,   244,   247,   252,   253,
     254,   255,   258,   261,   262,   263,   264,   265,   266,   269,
     270,   273,   274,   275,   280,   281,   282,   283,   286,   289,
     290,   291,   292,   293,   294,   298,   301,   302,   303,   304,
     307,   308,   309,   312,   313,   316,   317,   318,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   333,   336,
     339,   342,   343,   344,   345,   346,   349,   350,   353,   356,
     359,   362,   365,   368,   371,   376,   377,   378,   381,   384,
     387,   388,   389,   390,   393,   394,   395,   398,   399,   400,
     403,   404,   405,   411,   412,   413,   414,   415,   416,   418,
     419,   420,   421,   431,   432,   435,   438,   441,   442,   443,
     446,   447,   448,   449,   450,   453,   454,   455,   458,   459,
     460,   463,   464,   467,   468,   469,   470,   473,   474,   477,
     478
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "INT", "FLOAT", "BOOL", "SE",
  "SENAO", "ENQUANTO", "PARA", "OU", "E", "NOT", "ESTRUTURA", "CONST",
  "MAIN", "LOCAL", "GLOBAL", "ESCREVE", "ESCREVETUDO", "ESCREVESTRING",
  "LE", "LETUDO", "LESTRING", "EXPOENTE", "RAIZ", "SIZE", "GEN", "RESIZE",
  "VIRGULA", "ABRECHAVETA", "FECHACHAVETA", "ABREPARENT", "FECHAPARENT",
  "ABREVETOR", "FECHAVETOR", "IGUAL", "PV", "PF", "ASPAS", "EXCLAMACAO",
  "COMPARATIVOS", "OPERADOR", "OPERADORLOGICO", "COMENTARIO", "PARAGRAFO",
  "INTEIRO", "REAL", "BOOLEANO", "MAIS", "MENOS", "MULTIPLICA", "DIVIDE",
  "MODULO", "INCREMENTO", "DECREMENTO", "empty", "$accept", "input",
  "vazio", "comentario", "programa", "estructs_inicio", "estructs",
  "estruct_corpo", "tipo", "declara_variavel", "primeira_variavel",
  "segunda_variavel", "fim_linha", "vetor", "vetor_corpo",
  "ident_ou_inteiro", "calculos", "operador", "vetor_corpo_extra",
  "vetor_listas", "gerador", "constante_inicio", "constante",
  "declaracao_atribuicao", "atributo", "valor", "global_inicio", "global",
  "global_corpo", "expressao", "expressao_equivalencia",
  "expressao_continuacao", "valores", "valores_dentro", "metodos", "size",
  "resize", "expoente", "exponte_raiz_variavel", "exponte_raiz_extra",
  "raiz", "write", "write_all", "write_string", "read", "read_all",
  "read_string", "main_inicio", "main", "instrucoes", "ciclos",
  "condicao_for", "condicional", "condicoes_inicio", "condicoes_resto",
  "operadores_logicos", "senao", "local", "declara_funcao",
  "parametros_com_tipo", "parametro", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF (-260)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-87)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -260,    90,  -260,  -260,   -37,  -260,   331,  -260,   331,  -260,
    -260,  -260,  -260,  -260,  -260,    -5,    25,    30,    49,   143,
     177,   254,  -260,   143,   177,   254,  -260,   204,   351,    77,
     424,   147,  -260,   147,  -260,    57,  -260,    57,  -260,    97,
    -260,    97,  -260,  -260,  -260,  -260,    93,    29,   204,  -260,
     204,    99,   204,   101,  -260,  -260,  -260,   351,  -260,   351,
     137,   113,   145,   352,   424,  -260,   424,   154,   424,   141,
     424,   255,  -260,  -260,  -260,   146,   348,   348,  -260,  -260,
     190,  -260,   483,  -260,  -260,   171,   164,   160,   361,  -260,
    -260,  -260,  -260,   383,  -260,  -260,  -260,   233,  -260,  -260,
    -260,  -260,   217,   182,   287,    29,  -260,    29,  -260,  -260,
     203,   208,   210,   218,   241,   243,   258,   260,   269,   276,
     351,   240,   275,   289,   293,   300,   312,   313,   315,   321,
     323,   452,  -260,  -260,  -260,   439,   302,    34,   324,  -260,
    -260,   348,   328,  -260,  -260,   442,  -260,  -260,   392,   329,
     217,   483,   164,  -260,  -260,   123,   332,   149,  -260,  -260,
     348,   366,   376,   403,   373,   397,   398,   263,   263,   423,
     434,  -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260,
    -260,  -260,  -260,   351,    31,   351,   352,   405,   414,   417,
     426,   439,  -260,   439,   439,   429,   439,   439,   450,   439,
     439,   439,   480,   416,   453,   164,   164,   392,  -260,   164,
    -260,   424,   255,   204,   455,   443,   451,  -260,   457,   462,
     463,  -260,  -260,  -260,   348,   348,   348,   348,   468,   348,
     477,   479,   484,  -260,   512,  -260,  -260,   274,   274,   513,
     164,  -260,  -260,  -260,   439,  -260,  -260,   104,  -260,  -260,
    -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260,
     470,   488,   487,  -260,  -260,  -260,  -260,  -260,   263,  -260,
     263,  -260,  -260,  -260,   263,  -260,  -260,  -260,   473,   485,
     295,   292,   489,  -260,   490,   491,   492,   351,  -260,   494,
     104,  -260,   104,  -260,   495,   443,   493,   348,  -260,   496,
     498,   344,   453,   499,  -260,  -260,  -260,   295,   295,   497,
     503,   344,   504,   526,   164,   164,   255,  -260,  -260,   500,
    -260,  -260,  -260,  -260,  -260,   306,   411,   411,   439,   439,
     506,   439,   245,   505,   507,  -260,   535,   508,   510,   509,
     274,   274,   295,   295,   514,   516,    29,   517,   515,   518,
    -260,   255,   255,  -260,  -260,  -260,  -260,  -260,    63,  -260,
     511,  -260,  -260,  -260,   519,  -260,    47,  -260,  -260,   344,
     439,   439,  -260,  -260,   520,   522,   164,  -260,   104,  -260
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     3,     1,     0,     5,    12,    11,    12,     2,
       6,    10,    50,    66,     7,     0,     0,     0,     0,     4,
       4,     4,   115,     4,     4,     4,   116,     4,     4,     0,
       4,     0,    51,     0,     8,     0,    67,     0,    48,     0,
     117,     0,    64,     9,    49,    65,     0,     4,     4,    18,
       4,     0,     4,     0,    19,    20,    21,     4,    58,     4,
       0,     0,     0,     0,     4,    74,     4,     0,     4,     0,
       4,     0,    36,    37,    35,     0,    33,     4,    14,    15,
      12,    17,     0,    53,    54,     0,     4,     0,     0,    39,
      40,    41,    42,     0,    75,    69,    70,     0,    22,    71,
      68,    73,     0,     0,     0,     0,    44,     0,    34,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,    52,     4,    36,     0,    37,    62,
      63,     0,     0,    85,    76,     0,    84,    82,     0,     0,
       0,     0,     4,    23,    25,     0,     0,     0,    30,    38,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    61,     4,     0,     4,     0,     0,     0,     0,
       0,     4,   142,     4,     4,     0,     4,     4,     0,     4,
       4,     4,     0,    86,     0,     4,     4,     0,    77,     4,
      24,     4,    26,     4,     0,     0,     0,    43,     0,     0,
       0,   112,   113,   114,     4,     4,     4,     4,     0,     4,
       0,     0,     0,    55,     0,    59,    56,     0,     0,     0,
       4,   133,   134,   135,     4,   137,   138,     4,   139,   140,
     141,    87,    83,    78,    81,    80,    79,    72,    27,    16,
       0,    45,     0,    32,   109,   110,   111,   107,     0,   101,
       0,   104,   105,   102,     0,   103,   108,    98,     0,     0,
       0,   154,     0,   147,     0,     0,     0,     4,   136,     0,
       4,   166,     4,   118,     0,     0,     0,     4,   106,     0,
       0,     0,    84,     0,   155,   156,   157,     0,     0,     0,
       0,     0,     0,     0,     4,     4,     4,   163,   164,     0,
      46,    31,   100,    99,    60,     0,   151,   153,     4,     4,
       0,     4,     0,     0,     0,   170,     0,     0,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     169,     0,     4,    47,   149,   148,   150,   152,     4,   143,
       0,   144,   161,   162,     0,   168,     0,   160,   146,     0,
       4,     4,   158,   145,     0,     0,     4,   159,     4,   165
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -260,  -260,     0,    73,  -260,  -260,     9,   -42,   -15,   -25,
     394,  -260,   -50,   -95,  -260,   -40,    11,    71,   385,   256,
    -260,   103,    54,   -41,   257,  -127,   152,    96,   -30,    42,
    -260,  -119,   -53,  -134,    87,  -260,  -260,    -1,  -156,   148,
      65,  -260,  -260,  -260,  -260,  -260,  -260,   178,   211,     1,
    -260,  -260,   189,  -224,  -258,   127,  -260,  -260,  -259,   205,
    -260
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   192,   193,     9,    10,    19,    51,   102,   194,
      98,   153,   134,    52,    75,   141,   195,   270,   108,   262,
     216,    11,    20,    61,   183,   143,    12,    21,    69,   196,
      94,   144,   281,   146,   197,   121,   122,   123,   298,   269,
     124,   125,   126,   127,   128,   129,   130,    13,    22,   198,
     199,   286,   200,   282,   283,   308,   368,   201,   293,   337,
     338
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       2,     7,   154,   204,   184,    68,    78,    76,    79,    14,
      81,   228,   230,    60,   284,    67,    83,    23,    84,    32,
      36,    40,   303,    32,    36,    40,    27,    49,    58,   208,
      65,   317,    72,   318,    95,   145,    96,   203,    99,    68,
     101,    68,    60,    68,    60,    68,   103,    74,    49,    67,
      49,    67,    49,    67,   187,    67,    28,    58,    77,    58,
     154,   234,    24,    29,    65,   159,    65,   160,    65,   235,
      65,   366,    70,    17,     8,    18,    73,   106,   371,   171,
      30,   182,   139,   140,   356,   357,   133,    24,   255,   109,
       3,     4,    33,    37,    41,   145,    33,    37,    41,   142,
      50,    59,   212,    66,    25,    60,    70,   289,    70,   132,
      70,    62,    70,    17,   226,   226,   354,   355,   299,   379,
      58,    50,    34,    50,    71,    50,    43,   224,   224,    25,
      59,    80,    59,    25,    93,     5,     6,    66,    82,    66,
      85,    66,   233,    66,   236,    86,   302,   105,   107,     5,
     290,    87,   133,   150,   145,   253,   254,    97,    47,   256,
     106,   152,    16,    17,   149,    18,   227,   227,    60,   120,
      60,   259,    38,   100,   184,   147,    44,   214,   225,   225,
     215,   257,   104,    58,   330,    58,    68,   258,     5,    31,
     287,   135,   241,    59,   242,   243,    67,   245,   246,    42,
     248,   249,   250,    45,    15,   133,   133,    46,   131,   133,
     132,    65,   105,    49,   156,   226,   207,   226,   185,    26,
     155,   226,     5,    35,   267,   267,   267,   267,   297,   267,
     224,   107,   229,   229,   224,   147,   161,   154,   211,    47,
     133,   162,   373,   163,    26,   288,   315,   291,    26,     5,
      48,   164,    26,    70,   326,   327,    59,    93,    59,    54,
      55,    56,   314,   150,   333,   334,   136,   227,    47,   227,
     151,   152,   313,   227,   165,   150,   166,   203,   172,   225,
      47,   225,   131,   152,    66,   225,    50,    58,   116,   117,
     291,   167,   291,   168,   147,   268,   137,   267,   203,     5,
      39,   336,   169,   304,   305,   306,   360,   280,   367,   170,
     138,   139,   140,   173,   133,   133,   335,   304,   305,   306,
     292,   182,   139,   140,   157,   158,   378,   174,   137,   344,
     345,   175,   347,   229,   307,   229,   364,   336,   176,   229,
     -86,   202,   182,   139,   140,    15,    16,    17,   340,    18,
     177,   178,   335,   179,    53,    54,    55,    56,   133,   180,
      59,   181,   -61,   292,   136,   292,   205,   209,   268,   218,
     213,   374,   375,   271,   272,   273,   133,   275,   291,   219,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    88,
     119,   182,   139,   140,   137,   203,     5,    57,    89,    90,
      91,    92,    89,    90,    91,    92,   220,   221,   138,   139,
     140,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     148,   119,   304,   305,   306,   137,   231,    63,    54,    55,
      56,   222,   223,    89,    90,    91,    92,   232,   237,   182,
     139,   140,   186,    54,    55,    56,   187,   238,   188,   189,
     239,   292,   341,   342,   343,   202,   190,   240,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   244,   119,     5,
      64,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     206,   119,   247,   251,     5,   191,    73,   252,   260,   263,
     261,   264,    89,    90,    91,    92,   265,   266,   274,   182,
     139,   140,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   276,   119,   277,   278,   279,   285,   294,   295,   296,
     300,   311,   301,   309,   310,   319,   312,   316,   328,   332,
     322,   321,   323,   325,   329,   331,   346,   348,   350,   349,
     352,   369,   351,   353,   210,   217,   358,   339,   359,   361,
     370,   320,   376,   362,   377,   372,   363,   365,   324
};

static const yytype_int16 yycheck[] =
{
       0,     1,    97,   137,   131,    30,    48,    47,    50,    46,
      52,   167,   168,    28,   238,    30,    57,     8,    59,    19,
      20,    21,   280,    23,    24,    25,    31,    27,    28,   148,
      30,   290,     3,   292,    64,    88,    66,     3,    68,    64,
      70,    66,    57,    68,    59,    70,    71,    47,    48,    64,
      50,    66,    52,    68,     7,    70,    31,    57,    47,    59,
     155,    30,     8,    33,    64,   105,    66,   107,    68,    38,
      70,     8,    30,    16,     1,    18,    47,    77,    31,   120,
      31,    47,    48,    49,   342,   343,    86,    33,   207,    80,
       0,     1,    19,    20,    21,   148,    23,    24,    25,    88,
      27,    28,   152,    30,     8,   120,    64,     3,    66,    46,
      68,    34,    70,    16,   167,   168,   340,   341,   274,   378,
     120,    48,    19,    50,    31,    52,    23,   167,   168,    33,
      57,    32,    59,    37,    63,    45,    46,    64,    37,    66,
       3,    68,   183,    70,   185,    32,   280,    76,    77,    45,
      46,     6,   152,    30,   207,   205,   206,     3,    35,   209,
     160,    38,    15,    16,    93,    18,   167,   168,   183,    82,
     185,   213,    20,    32,   301,    88,    24,    28,   167,   168,
      31,   211,    36,   183,   311,   185,   211,   212,    45,    46,
     240,    31,   191,   120,   193,   194,   211,   196,   197,    21,
     199,   200,   201,    25,    14,   205,   206,     3,    37,   209,
      46,   211,   141,   213,    32,   268,   145,   270,   131,     8,
       3,   274,    45,    46,   224,   225,   226,   227,   268,   229,
     270,   160,   167,   168,   274,   148,    33,   332,   151,    35,
     240,    33,   369,    33,    33,   244,   287,   247,    37,    45,
      46,    33,    41,   211,   307,   308,   183,   186,   185,     4,
       5,     6,   287,    30,   314,   315,     3,   268,    35,   270,
      37,    38,   287,   274,    33,    30,    33,     3,    38,   268,
      35,   270,    37,    38,   211,   274,   213,   287,    25,    26,
     290,    33,   292,    33,   207,   224,    33,   297,     3,    45,
      46,   316,    33,    11,    12,    13,   346,    33,   358,    33,
      47,    48,    49,    38,   314,   315,   316,    11,    12,    13,
     247,    47,    48,    49,    37,    38,   376,    38,    33,   328,
     329,    38,   331,   268,    42,   270,   351,   352,    38,   274,
      38,    39,    47,    48,    49,    14,    15,    16,    42,    18,
      38,    38,   352,    38,     3,     4,     5,     6,   358,    38,
     287,    38,    38,   290,     3,   292,    38,    38,   297,     3,
      38,   370,   371,   225,   226,   227,   376,   229,   378,     3,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    37,
      29,    47,    48,    49,    33,     3,    45,    46,    50,    51,
      52,    53,    50,    51,    52,    53,     3,    34,    47,    48,
      49,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      37,    29,    11,    12,    13,    33,     3,     3,     4,     5,
       6,    34,    34,    50,    51,    52,    53,     3,    33,    47,
      48,    49,     3,     4,     5,     6,     7,    33,     9,    10,
      33,   378,   325,   326,   327,    39,    17,    31,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    38,    29,    45,
      46,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      38,    29,    32,     3,    45,    46,    47,    34,    33,    38,
      47,    34,    50,    51,    52,    53,    34,    34,    30,    47,
      48,    49,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    34,    29,    34,    30,     3,     3,    47,    30,    32,
      47,    30,    37,    34,    34,    30,    34,    33,    31,     3,
      34,    38,    34,    34,    31,    31,    30,    32,     3,    32,
      30,    30,    34,    34,   150,   160,    32,    47,    32,    32,
      31,   295,    32,    38,    32,   366,    38,   352,   301
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    59,    60,     0,     1,    45,    46,    60,    61,    62,
      63,    79,    84,   105,    46,    14,    15,    16,    18,    64,
      80,    85,   106,    64,    80,    85,   106,    31,    31,    33,
      31,    46,    60,    61,    79,    46,    60,    61,    84,    46,
      60,    61,   105,    79,    84,   105,     3,    35,    46,    60,
      61,    65,    71,     3,     4,     5,     6,    46,    60,    61,
      66,    81,    34,     3,    46,    60,    61,    66,    67,    86,
      87,    31,     3,    47,    60,    72,    73,    74,    65,    65,
      32,    65,    37,    81,    81,     3,    32,     6,    37,    50,
      51,    52,    53,    75,    88,    86,    86,     3,    68,    86,
      32,    86,    66,    67,    36,    75,    60,    75,    76,    64,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    29,
      92,    93,    94,    95,    98,    99,   100,   101,   102,   103,
     104,    37,    46,    60,    70,    31,     3,    33,    47,    48,
      49,    73,    74,    83,    89,    90,    91,    92,    37,    75,
      30,    37,    38,    69,    71,     3,    32,    37,    38,    73,
      73,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    81,    38,    38,    38,    38,    38,    38,    38,    38,
      38,    38,    47,    82,    83,    92,     3,     7,     9,    10,
      17,    46,    60,    61,    67,    74,    87,    92,   107,   108,
     110,   115,    39,     3,    91,    38,    38,    75,    89,    38,
      68,    92,    70,    38,    28,    31,    78,    76,     3,     3,
       3,    34,    34,    34,    73,    74,    90,    95,    96,    98,
      96,     3,     3,    81,    30,    38,    81,    33,    33,    33,
      31,   107,   107,   107,    38,   107,   107,    32,   107,   107,
     107,     3,    34,    70,    70,    89,    70,    86,    67,    65,
      33,    47,    77,    38,    34,    34,    34,    60,    75,    97,
      75,    97,    97,    97,    30,    97,    34,    34,    30,     3,
      33,    90,   111,   112,   111,     3,   109,    70,   107,     3,
      46,    60,    61,   116,    47,    30,    32,    73,    96,    96,
      47,    37,    91,   112,    11,    12,    13,    42,   113,    34,
      34,    30,    34,    66,    67,    81,    33,   116,   116,    30,
      77,    38,    34,    34,    82,    34,    90,    90,    31,    31,
      83,    31,     3,    70,    70,    60,    66,   117,   118,    47,
      42,   113,   113,   113,   107,   107,    30,   107,    32,    32,
       3,    34,    30,    34,   111,   111,   112,   112,    32,    32,
      73,    32,    38,    38,    66,   117,     8,    70,   114,    30,
      31,    31,   110,    83,   107,   107,    32,    32,    70,   116
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    59,    60,    61,    62,    62,    63,    63,
      63,    63,    64,    64,    65,    65,    65,    65,    65,    66,
      66,    66,    67,    68,    69,    69,    69,    69,    70,    70,
      71,    71,    71,    72,    72,    72,    73,    73,    74,    75,
      75,    75,    75,    76,    76,    77,    77,    78,    79,    79,
      79,    79,    80,    81,    81,    81,    81,    81,    81,    82,
      82,    83,    83,    83,    84,    84,    84,    84,    85,    86,
      86,    86,    86,    86,    86,    87,    88,    88,    88,    88,
      89,    89,    89,    90,    90,    91,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    94,
      95,    96,    96,    96,    96,    96,    97,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   105,   105,   106,    87,
      88,    88,    88,    88,    89,    89,    89,    90,    90,    90,
      91,    91,    91,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   108,   108,   109,   110,   111,   111,   111,
     112,   112,   112,   112,   112,   113,   113,   113,   114,   114,
     114,   115,   115,   116,   116,   116,   116,   117,   117,   118,
     118
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     1,     1,     2,     3,     3,
       1,     1,     0,     5,     2,     2,     6,     2,     1,     1,
       1,     1,     2,     2,     2,     1,     2,     3,     1,     1,
       4,     8,     6,     1,     2,     1,     1,     1,     3,     1,
       1,     1,     1,     3,     1,     1,     3,     6,     3,     3,
       1,     1,     5,     2,     2,     5,     5,     4,     1,     2,
       5,     1,     1,     1,     3,     3,     1,     1,     4,     2,
       2,     2,     5,     2,     1,     2,     2,     3,     4,     4,
       3,     3,     1,     3,     1,     1,     1,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     6,
       6,     2,     2,     2,     2,     2,     2,     1,     4,     4,
       4,     4,     3,     3,     3,     2,     2,     1,     8,     2,
       2,     3,     4,     4,     3,     3,     1,     3,     3,     1,
       1,     1,     3,     2,     2,     2,     3,     2,     2,     2,
       2,     2,     1,     7,     7,     7,     8,     1,     5,     5,
       5,     3,     5,     3,     1,     1,     1,     1,     2,     4,
       1,     7,     7,     2,     2,    10,     1,     1,     3,     2,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 5:
#line 137 "sintaxB.y"
                   {printf("Comentario encontrado\n");}
#line 1714 "sintaxB.c"
    break;

  case 6:
#line 141 "sintaxB.y"
                         {}
#line 1720 "sintaxB.c"
    break;

  case 7:
#line 142 "sintaxB.y"
                       { yyerrok; }
#line 1726 "sintaxB.c"
    break;

  case 8:
#line 159 "sintaxB.y"
                                            {printf("Paragrafo Estruturas encontrado\n");}
#line 1732 "sintaxB.c"
    break;

  case 9:
#line 160 "sintaxB.y"
                                             {printf("Comentario de Estruturas encontrado\n");}
#line 1738 "sintaxB.c"
    break;

  case 13:
#line 165 "sintaxB.y"
                                                                  {printf("Estruturas encontrado\n");}
#line 1744 "sintaxB.c"
    break;

  case 17:
#line 172 "sintaxB.y"
                             {printf("Vetor dentro de estruturas encontrado\n");}
#line 1750 "sintaxB.c"
    break;

  case 19:
#line 193 "sintaxB.y"
            {printf("Valor INTEIRO encontrado\n");}
#line 1756 "sintaxB.c"
    break;

  case 20:
#line 194 "sintaxB.y"
              {printf("Valor FLOAT encontrado\n");}
#line 1762 "sintaxB.c"
    break;

  case 21:
#line 195 "sintaxB.y"
             {printf("Valor BOLEANO encontrado\n");}
#line 1768 "sintaxB.c"
    break;

  case 23:
#line 201 "sintaxB.y"
                                     {(yyval.tipoint) = encontra_var((yyvsp[-1].nome_var),1);}
#line 1774 "sintaxB.c"
    break;

  case 30:
#line 216 "sintaxB.y"
                                                                {printf("Vetor encontrado\n");}
#line 1780 "sintaxB.c"
    break;

  case 31:
#line 217 "sintaxB.y"
                                                                                        {printf("Vetor encontrado\n");}
#line 1786 "sintaxB.c"
    break;

  case 32:
#line 218 "sintaxB.y"
                                                                {printf("Vetor encontrado\n");}
#line 1792 "sintaxB.c"
    break;

  case 33:
#line 221 "sintaxB.y"
                                {printf("Vetor com variavel encontrado\n");}
#line 1798 "sintaxB.c"
    break;

  case 34:
#line 222 "sintaxB.y"
                                   {printf("Vetor com calculo encontrado\n");}
#line 1804 "sintaxB.c"
    break;

  case 35:
#line 223 "sintaxB.y"
                                {printf("Vetor vazio encontrado\n");}
#line 1810 "sintaxB.c"
    break;

  case 36:
#line 226 "sintaxB.y"
                {printf("Identificação de variavel encontrado\n");}
#line 1816 "sintaxB.c"
    break;

  case 38:
#line 230 "sintaxB.y"
                                                    {printf("Calculos encontrados\n");}
#line 1822 "sintaxB.c"
    break;

  case 47:
#line 247 "sintaxB.y"
                                                           {printf("Gerador encontrado\n");}
#line 1828 "sintaxB.c"
    break;

  case 48:
#line 252 "sintaxB.y"
                                          {printf("Paragrafo de Constante encontrado\n");}
#line 1834 "sintaxB.c"
    break;

  case 49:
#line 253 "sintaxB.y"
                                           {printf("Comentario de Constante encontrado\n");}
#line 1840 "sintaxB.c"
    break;

  case 52:
#line 258 "sintaxB.y"
                                                                       {printf("Constante encontrado\n");}
#line 1846 "sintaxB.c"
    break;

  case 64:
#line 280 "sintaxB.y"
                                     {printf("Paragrafo de Global encontrado\n");}
#line 1852 "sintaxB.c"
    break;

  case 65:
#line 281 "sintaxB.y"
                                      {printf("Comentario de Global encontrado\n");}
#line 1858 "sintaxB.c"
    break;

  case 68:
#line 286 "sintaxB.y"
                                                     {printf("GLobal encontrado\n");}
#line 1864 "sintaxB.c"
    break;

  case 75:
#line 298 "sintaxB.y"
                                     {printf("Expressao encontrada\n");}
#line 1870 "sintaxB.c"
    break;

  case 98:
#line 333 "sintaxB.y"
                                          {printf("Metodo SIZE encontrado\n");}
#line 1876 "sintaxB.c"
    break;

  case 99:
#line 336 "sintaxB.y"
                                                            {printf("Metodo RESIZE encontrado\n");}
#line 1882 "sintaxB.c"
    break;

  case 100:
#line 339 "sintaxB.y"
                                                                                            {printf("Metodo EXPOENTE encontrado\n");}
#line 1888 "sintaxB.c"
    break;

  case 108:
#line 353 "sintaxB.y"
                                                          {printf("Metodo RAIZ encontrado\n");}
#line 1894 "sintaxB.c"
    break;

  case 109:
#line 356 "sintaxB.y"
                                             {printf("Metodo write encontrado\n");}
#line 1900 "sintaxB.c"
    break;

  case 110:
#line 359 "sintaxB.y"
                                                 {printf("Metodo write_all encontrado\n");}
#line 1906 "sintaxB.c"
    break;

  case 111:
#line 362 "sintaxB.y"
                                                   {printf("Metodo write_string encontrado\n");}
#line 1912 "sintaxB.c"
    break;

  case 112:
#line 365 "sintaxB.y"
                                  {printf("Metodo read encontrado\n");}
#line 1918 "sintaxB.c"
    break;

  case 113:
#line 368 "sintaxB.y"
                                      {printf("Metodo read_all encontrado\n");}
#line 1924 "sintaxB.c"
    break;

  case 114:
#line 371 "sintaxB.y"
                                        {printf("Metodo read_string encontrado\n");}
#line 1930 "sintaxB.c"
    break;

  case 115:
#line 376 "sintaxB.y"
                       {printf("Paragrafo de Global encontrado\n");}
#line 1936 "sintaxB.c"
    break;

  case 116:
#line 377 "sintaxB.y"
                        {printf("Comentario de Global encontrado\n");}
#line 1942 "sintaxB.c"
    break;

  case 118:
#line 381 "sintaxB.y"
                                                                                            {printf("Main encontrado\n");}
#line 1948 "sintaxB.c"
    break;

  case 119:
#line 384 "sintaxB.y"
                                     {printf("Expressao encontrada\n");}
#line 1954 "sintaxB.c"
    break;

  case 141:
#line 420 "sintaxB.y"
                         {printf("Local encontrado\n");}
#line 1960 "sintaxB.c"
    break;

  case 143:
#line 431 "sintaxB.y"
                                                                                             {printf("Ciclo While encontrados\n");}
#line 1966 "sintaxB.c"
    break;

  case 144:
#line 432 "sintaxB.y"
                                                                                       {printf("Ciclo For encontrados\n");}
#line 1972 "sintaxB.c"
    break;

  case 146:
#line 438 "sintaxB.y"
                                                                                             {printf("Condicional SE encontrado\n");}
#line 1978 "sintaxB.c"
    break;

  case 158:
#line 458 "sintaxB.y"
                          {printf("Condicional SENAO encontrado\n");}
#line 1984 "sintaxB.c"
    break;

  case 159:
#line 459 "sintaxB.y"
                                                  {printf("Condicional SENAO encontrado\n");}
#line 1990 "sintaxB.c"
    break;

  case 165:
#line 469 "sintaxB.y"
                                                                                                                           {printf("Declara funcao encontrada\n");}
#line 1996 "sintaxB.c"
    break;


#line 2000 "sintaxB.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 480 "sintaxB.y"


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

/* funcao para apresentar info de funcionamento do EfolioB */
void bashInfo(char* argumento) {
    printf("\n");
    printf("funcionamento: %s <ficheiro>\n", argumento);
    printf("\n");
    printf(" <ficheiro>\tFicheiro em linguagem YAIL\n");
}
