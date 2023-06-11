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

#line 122 "sintax.c"

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
#ifndef YY_YY_SINTAX_H_INCLUDED
# define YY_YY_SINTAX_H_INCLUDED
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
    COMENTARIO = 298,
    PARAGRAFO = 299,
    INTEIRO = 300,
    REAL = 301,
    BOOLEANO = 302,
    MAIS = 303,
    MENOS = 304,
    MULTIPLICA = 305,
    DIVIDE = 306,
    MODULO = 307,
    empty = 308
  };
#endif
/* Tokens.  */
#define IDENT 258
#define INT 259
#define FLOAT 260
#define BOOL 261
#define SE 262
#define SENAO 263
#define ENQUANTO 264
#define PARA 265
#define OU 266
#define E 267
#define NOT 268
#define ESTRUTURA 269
#define CONST 270
#define MAIN 271
#define LOCAL 272
#define GLOBAL 273
#define ESCREVE 274
#define ESCREVETUDO 275
#define ESCREVESTRING 276
#define LE 277
#define LETUDO 278
#define LESTRING 279
#define EXPOENTE 280
#define RAIZ 281
#define SIZE 282
#define GEN 283
#define RESIZE 284
#define VIRGULA 285
#define ABRECHAVETA 286
#define FECHACHAVETA 287
#define ABREPARENT 288
#define FECHAPARENT 289
#define ABREVETOR 290
#define FECHAVETOR 291
#define IGUAL 292
#define PV 293
#define PF 294
#define ASPAS 295
#define EXCLAMACAO 296
#define COMPARATIVOS 297
#define COMENTARIO 298
#define PARAGRAFO 299
#define INTEIRO 300
#define REAL 301
#define BOOLEANO 302
#define MAIS 303
#define MENOS 304
#define MULTIPLICA 305
#define DIVIDE 306
#define MODULO 307
#define empty 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 54 "sintax.y"

        char nome_var[33];
        int tipoint;
     

#line 286 "sintax.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTAX_H_INCLUDED  */



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
#define YYLAST   560

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  199
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  382

#define YYUNDEFTOK  2
#define YYMAXUTOK   308


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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   134,   134,   135,   138,   141,   145,   146,   161,   166,
     167,   168,   169,   171,   172,   175,   176,   178,   179,   180,
     200,   201,   202,   205,   208,   211,   212,   213,   214,   217,
     218,   223,   224,   225,   228,   229,   230,   233,   234,   237,
     240,   241,   242,   243,   246,   247,   250,   251,   254,   259,
     260,   261,   262,   265,   268,   269,   270,   271,   272,   273,
     276,   277,   280,   281,   282,   287,   288,   289,   290,   293,
     296,   297,   298,   299,   300,   301,   305,   308,   309,   310,
     311,   314,   315,   316,   319,   320,   323,   324,   325,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   340,
     343,   346,   349,   350,   351,   352,   353,   356,   357,   360,
     363,   366,   369,   372,   375,   378,   383,   384,   385,   388,
     391,   394,   395,   396,   397,   400,   401,   402,   405,   406,
     407,   410,   411,   412,   413,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   428,   431,   434,   437,   438,
     439,   440,   441,   444,   445,   448,   451,   454,   457,   460,
     463,   466,   471,   472,   473,   474,   475,   476,   478,   479,
     480,   481,   491,   492,   495,   498,   501,   502,   503,   506,
     507,   508,   509,   510,   513,   514,   515,   518,   519,   520,
     523,   524,   527,   528,   529,   530,   533,   534,   537,   538
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
  "COMPARATIVOS", "COMENTARIO", "PARAGRAFO", "INTEIRO", "REAL", "BOOLEANO",
  "MAIS", "MENOS", "MULTIPLICA", "DIVIDE", "MODULO", "empty", "$accept",
  "input", "vazio", "comentario", "programa", "estructs_inicio",
  "estructs", "estruct_corpo", "tipo", "declara_variavel",
  "primeira_variavel", "segunda_variavel", "fim_linha", "vetor",
  "vetor_corpo", "ident_ou_inteiro", "calculos", "operador",
  "vetor_corpo_extra", "vetor_listas", "gerador", "constante_inicio",
  "constante", "declaracao_atribuicao", "atributo", "valor",
  "global_inicio", "global", "global_corpo", "expressao",
  "expressao_equivalencia", "expressao_continuacao", "valores",
  "valores_dentro", "metodos", "size", "resize", "expoente",
  "exponte_raiz_variavel", "exponte_raiz_extra", "raiz", "write",
  "write_all", "write_string", "read", "read_all", "read_string",
  "main_inicio", "main", "instrucoes", "ciclos", "condicao_for",
  "condicional", "condicoes_inicio", "condicoes_resto",
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
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF (-272)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -272,   164,  -272,  -272,   -37,  -272,   389,  -272,   389,  -272,
    -272,  -272,  -272,  -272,  -272,   -18,    32,    39,    61,   289,
     315,   347,  -272,   289,   315,   347,  -272,   278,   305,    -3,
     338,   482,  -272,   482,  -272,   123,  -272,   123,  -272,    79,
    -272,    79,  -272,  -272,  -272,  -272,    71,    55,   278,  -272,
     278,    77,   278,    85,  -272,  -272,  -272,   305,  -272,   305,
     126,   112,   143,   288,   338,  -272,   338,   148,   338,   122,
     338,   368,  -272,  -272,  -272,   120,   442,   442,  -272,  -272,
     158,  -272,   460,  -272,  -272,   147,   138,   167,   342,  -272,
    -272,  -272,  -272,   385,  -272,  -272,  -272,   165,  -272,  -272,
    -272,  -272,   201,   178,   386,    55,  -272,    55,  -272,  -272,
     195,   198,   203,   216,   218,   229,   242,   245,   253,   255,
     305,   177,   259,   268,   276,   280,   282,   286,   302,   308,
     313,   449,  -272,  -272,  -272,   422,   399,   258,   332,  -272,
    -272,   442,   339,  -272,  -272,   412,  -272,  -272,   373,   341,
     201,   460,   138,  -272,  -272,   293,   363,    -2,  -272,  -272,
     442,   292,   299,   350,   377,   381,   383,   145,   145,   418,
     427,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,   305,    68,   305,   288,   424,   425,   426,
     260,   422,  -272,   422,   422,   439,   422,   422,   432,   422,
     422,   422,   485,   465,   471,   138,   138,   373,  -272,   138,
    -272,   338,   368,   278,   466,   461,   469,  -272,   474,   475,
     476,  -272,  -272,  -272,   442,   442,   442,   442,   481,   442,
     478,   479,   484,  -272,   512,  -272,  -272,   130,   130,   513,
     138,  -272,  -272,  -272,   422,  -272,  -272,   124,  -272,  -272,
    -272,   480,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
     472,   488,   489,  -272,  -272,  -272,  -272,  -272,   145,  -272,
     145,  -272,  -272,  -272,   145,  -272,  -272,  -272,   477,   483,
     220,   257,   490,  -272,   491,   493,   492,   305,  -272,   494,
     124,  -272,   124,  -272,   525,   499,   461,   495,   442,  -272,
     496,   497,   407,   471,   498,  -272,  -272,  -272,   220,   220,
     503,   504,   407,   505,   534,   138,   138,   368,  -272,  -272,
    -272,   500,  -272,  -272,  -272,  -272,  -272,   344,   372,   372,
     422,   422,   508,   422,   182,   507,   509,  -272,   537,   510,
     516,   514,   130,   130,   220,   220,   511,   515,    55,   517,
     518,   519,  -272,   368,   368,  -272,  -272,  -272,  -272,  -272,
      10,  -272,   520,  -272,  -272,  -272,   521,  -272,    82,  -272,
    -272,   407,   422,   422,  -272,  -272,   522,   523,   138,  -272,
     124,  -272
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     3,     1,     0,     5,    13,    12,    13,     2,
       6,    11,    51,    67,     7,     0,     0,     0,     0,     4,
       4,     4,   116,     4,     4,     4,   117,     4,     4,     0,
       4,     0,    52,     0,     9,     0,    68,     0,    49,     0,
     118,     0,    65,    10,    50,    66,     0,     4,     4,    19,
       4,     0,     4,     0,    20,    21,    22,     4,    59,     4,
       0,     0,     0,     0,     4,    75,     4,     0,     4,     0,
       4,     0,    37,    38,    36,     0,    34,     4,    15,    16,
      13,    18,     0,    54,    55,     0,     4,     0,     0,    40,
      41,    42,    43,     0,    76,    70,    71,     0,    23,    72,
      69,    74,     0,     0,     0,     0,    45,     0,    35,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    53,     4,    37,     0,    38,    63,
      64,     0,     0,    86,    77,     0,    85,    83,     0,     0,
       0,     0,     4,    24,    26,     0,     0,     0,    31,    39,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    62,     4,     0,     4,     0,     0,     0,     0,
       0,     4,   171,     4,     4,     0,     4,     4,     0,     4,
       4,     4,     0,    87,     0,     4,     4,     0,    78,     4,
      25,     4,    27,     4,     0,     0,     0,    44,     0,     0,
       0,   113,   114,   115,     4,     4,     4,     4,     0,     4,
       0,     0,     0,    56,     0,    60,    57,     0,     0,     0,
       4,   162,   163,   164,     4,   166,   167,     4,   168,   169,
     170,    88,    84,    79,    82,    81,    80,    73,    28,    17,
       0,    46,     0,    33,   110,   111,   112,   108,     0,   102,
       0,   105,   106,   103,     0,   104,   109,    99,     0,     0,
       0,   183,     0,   176,     0,     0,     0,     4,   165,     0,
       4,   195,     4,   119,     0,     0,     0,     0,     4,   107,
       0,     0,     0,    85,     0,   184,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     4,     4,     4,   192,   193,
     134,     0,    47,    32,   101,   100,    61,     0,   180,   182,
       4,     4,     0,     4,     0,     0,     0,   199,     0,     0,
     196,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   198,     0,     4,    48,   178,   177,   179,   181,
       4,   172,     0,   173,   190,   191,     0,   197,     0,   189,
     175,     0,     4,     4,   187,   174,     0,     0,     4,   188,
       4,   194
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,  -272,     0,    60,  -272,  -272,    14,   -14,   -24,   -15,
     392,  -272,   -59,   -95,  -272,   -36,   -10,    28,   391,   262,
    -272,    88,   110,   -45,   251,  -123,   142,   222,    33,   -25,
    -272,  -145,    26,  -127,    -6,  -272,  -272,   -52,  -151,   183,
     -33,  -272,  -272,  -272,  -272,  -272,  -272,   264,   213,    83,
    -272,  -272,   191,  -206,  -271,   174,  -272,  -272,  -225,   206,
    -272
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   192,   193,     9,    10,    19,    51,   102,   194,
      98,   153,   134,    52,    75,   141,   195,   270,   108,   262,
     216,    11,    20,    61,   183,   143,    12,    21,    69,   196,
      94,   144,   281,   146,   197,   121,   122,   123,   299,   269,
     124,   125,   126,   127,   128,   129,   130,    13,    22,   198,
     199,   286,   200,   282,   283,   309,   370,   201,   293,   339,
     340
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       2,     7,   154,   208,    60,    70,    67,    14,   184,   304,
     204,    76,    83,    27,    84,    68,   228,   230,   368,    32,
      36,    40,    23,    32,    36,    40,   214,    49,    58,   215,
      65,    62,   284,    60,    78,    60,    79,    77,    81,    70,
      67,    70,    67,    70,    67,    70,    67,    74,    49,    68,
      49,    68,    49,    68,   132,    68,   103,    58,    72,    58,
     154,     8,   255,    28,    65,   318,    65,   319,    65,   159,
      65,   160,    29,   358,   359,   171,   120,   106,   142,    33,
      37,    41,   147,    33,    37,    41,   133,    50,    59,   187,
      66,    93,    30,   212,   109,    17,    60,    95,   234,    96,
      73,    99,    71,   101,   105,   107,   235,    34,    50,    80,
      50,    43,    50,   373,   145,   227,   227,    59,    24,    59,
      58,   149,    82,   300,    66,   185,    66,   289,    66,    85,
      66,   224,   224,   203,   229,   229,   356,   357,   233,    17,
     236,    18,   147,    24,    86,   211,   253,   254,   136,    87,
     256,    97,   133,   303,   100,   381,   104,   225,   225,    60,
     106,    60,    38,   280,     3,     4,    44,     5,   290,   105,
     116,   117,    15,   207,   145,   182,   139,   140,   137,   184,
      59,   287,   132,    58,   131,    58,    70,    67,   107,   332,
     138,   139,   140,   226,   226,   150,    68,   258,   135,   259,
      47,   147,   151,   152,   155,   133,   133,     5,     6,   133,
     156,    65,   150,    49,    93,   172,   227,    47,   227,   131,
     152,    26,   227,   203,   267,   267,   267,   267,   161,   267,
      25,   162,   298,   145,   224,   229,   163,   229,   224,   154,
     133,   229,   316,    59,   257,    59,    26,   291,   375,   164,
      26,   165,   268,   137,    26,    25,   335,   336,   225,    25,
     225,   203,   166,   314,   225,   182,   139,   140,   305,   306,
     307,    66,   315,    50,   241,   167,   242,   243,   168,   245,
     246,    46,   248,   249,   250,    42,   169,    58,   170,    45,
     291,   240,   291,   338,   226,   218,   226,   173,   267,   308,
     226,   369,   219,   182,   139,   140,   174,   292,    53,    54,
      55,    56,   362,    47,   175,   133,   133,   337,   176,   380,
     177,     5,    48,   150,   178,    88,   268,   288,    47,   366,
     338,   152,     5,    31,   328,   329,    89,    90,    91,    92,
     179,    63,    54,    55,    56,   136,   180,    59,     5,    57,
     292,   181,   292,   220,   337,   305,   306,   307,     5,    35,
     133,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     -62,   119,    54,    55,    56,   137,   203,   205,   133,   209,
     291,     5,    64,   305,   306,   307,   342,   138,   139,   140,
       5,    39,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   213,   119,    15,    16,    17,   137,    18,   271,   272,
     273,   221,   275,   346,   347,   222,   349,   223,   182,   139,
     140,   231,   148,   157,   158,   186,    54,    55,    56,   187,
     232,   188,   189,    89,    90,    91,    92,   -87,   202,   190,
     292,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     206,   119,   182,   139,   140,   376,   377,   237,   238,   239,
      89,    90,    91,    92,   247,     5,   191,    73,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   244,   119,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   251,   119,
      89,    90,    91,    92,   182,   139,   140,    16,    17,   260,
      18,   343,   344,   345,   202,   252,   261,   263,   264,   265,
     266,   274,   276,   277,   278,   279,   285,   295,   296,   294,
     302,   297,   301,   312,   310,   311,   313,   317,   320,   321,
     324,   325,   327,   323,   330,   331,   333,   334,   348,   350,
     352,   351,   210,   360,   353,   341,   354,   361,   355,   363,
     371,   217,   372,   326,   378,   379,   364,   365,   322,   374,
     367
};

static const yytype_int16 yycheck[] =
{
       0,     1,    97,   148,    28,    30,    30,    44,   131,   280,
     137,    47,    57,    31,    59,    30,   167,   168,     8,    19,
      20,    21,     8,    23,    24,    25,    28,    27,    28,    31,
      30,    34,   238,    57,    48,    59,    50,    47,    52,    64,
      64,    66,    66,    68,    68,    70,    70,    47,    48,    64,
      50,    66,    52,    68,    44,    70,    71,    57,     3,    59,
     155,     1,   207,    31,    64,   290,    66,   292,    68,   105,
      70,   107,    33,   344,   345,   120,    82,    77,    88,    19,
      20,    21,    88,    23,    24,    25,    86,    27,    28,     7,
      30,    63,    31,   152,    80,    16,   120,    64,    30,    66,
      45,    68,    31,    70,    76,    77,    38,    19,    48,    32,
      50,    23,    52,    31,    88,   167,   168,    57,     8,    59,
     120,    93,    37,   274,    64,   131,    66,     3,    68,     3,
      70,   167,   168,     3,   167,   168,   342,   343,   183,    16,
     185,    18,   148,    33,    32,   151,   205,   206,     3,     6,
     209,     3,   152,   280,    32,   380,    36,   167,   168,   183,
     160,   185,    20,    33,     0,     1,    24,    43,    44,   141,
      25,    26,    14,   145,   148,    45,    46,    47,    33,   302,
     120,   240,    44,   183,    37,   185,   211,   211,   160,   312,
      45,    46,    47,   167,   168,    30,   211,   212,    31,   213,
      35,   207,    37,    38,     3,   205,   206,    43,    44,   209,
      32,   211,    30,   213,   186,    38,   268,    35,   270,    37,
      38,     8,   274,     3,   224,   225,   226,   227,    33,   229,
       8,    33,   268,   207,   270,   268,    33,   270,   274,   334,
     240,   274,   287,   183,   211,   185,    33,   247,   371,    33,
      37,    33,   224,    33,    41,    33,   315,   316,   268,    37,
     270,     3,    33,   287,   274,    45,    46,    47,    11,    12,
      13,   211,   287,   213,   191,    33,   193,   194,    33,   196,
     197,     3,   199,   200,   201,    21,    33,   287,    33,    25,
     290,    31,   292,   317,   268,     3,   270,    38,   298,    42,
     274,   360,     3,    45,    46,    47,    38,   247,     3,     4,
       5,     6,   348,    35,    38,   315,   316,   317,    38,   378,
      38,    43,    44,    30,    38,    37,   298,   244,    35,   353,
     354,    38,    43,    44,   308,   309,    48,    49,    50,    51,
      38,     3,     4,     5,     6,     3,    38,   287,    43,    44,
     290,    38,   292,     3,   354,    11,    12,    13,    43,    44,
     360,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      38,    29,     4,     5,     6,    33,     3,    38,   378,    38,
     380,    43,    44,    11,    12,    13,    42,    45,    46,    47,
      43,    44,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    38,    29,    14,    15,    16,    33,    18,   225,   226,
     227,    34,   229,   330,   331,    34,   333,    34,    45,    46,
      47,     3,    37,    37,    38,     3,     4,     5,     6,     7,
       3,     9,    10,    48,    49,    50,    51,    38,    39,    17,
     380,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      38,    29,    45,    46,    47,   372,   373,    33,    33,    33,
      48,    49,    50,    51,    32,    43,    44,    45,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    38,    29,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     3,    29,
      48,    49,    50,    51,    45,    46,    47,    15,    16,    33,
      18,   327,   328,   329,    39,    34,    45,    38,    34,    34,
      34,    30,    34,    34,    30,     3,     3,    45,    30,    39,
      37,    32,    45,    30,    34,    34,    34,    33,     3,    30,
      34,    34,    34,    38,    31,    31,    31,     3,    30,    32,
       3,    32,   150,    32,    34,    45,    30,    32,    34,    32,
      30,   160,    31,   302,    32,    32,    38,    38,   296,   368,
     354
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    55,    56,     0,     1,    43,    44,    56,    57,    58,
      59,    75,    80,   101,    44,    14,    15,    16,    18,    60,
      76,    81,   102,    60,    76,    81,   102,    31,    31,    33,
      31,    44,    56,    57,    75,    44,    56,    57,    80,    44,
      56,    57,   101,    75,    80,   101,     3,    35,    44,    56,
      57,    61,    67,     3,     4,     5,     6,    44,    56,    57,
      62,    77,    34,     3,    44,    56,    57,    62,    63,    82,
      83,    31,     3,    45,    56,    68,    69,    70,    61,    61,
      32,    61,    37,    77,    77,     3,    32,     6,    37,    48,
      49,    50,    51,    71,    84,    82,    82,     3,    64,    82,
      32,    82,    62,    63,    36,    71,    56,    71,    72,    60,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    29,
      88,    89,    90,    91,    94,    95,    96,    97,    98,    99,
     100,    37,    44,    56,    66,    31,     3,    33,    45,    46,
      47,    69,    70,    79,    85,    86,    87,    88,    37,    71,
      30,    37,    38,    65,    67,     3,    32,    37,    38,    69,
      69,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    77,    38,    38,    38,    38,    38,    38,    38,    38,
      38,    38,    45,    78,    79,    88,     3,     7,     9,    10,
      17,    44,    56,    57,    63,    70,    83,    88,   103,   104,
     106,   111,    39,     3,    87,    38,    38,    71,    85,    38,
      64,    88,    66,    38,    28,    31,    74,    72,     3,     3,
       3,    34,    34,    34,    69,    70,    86,    91,    92,    94,
      92,     3,     3,    77,    30,    38,    77,    33,    33,    33,
      31,   103,   103,   103,    38,   103,   103,    32,   103,   103,
     103,     3,    34,    66,    66,    85,    66,    82,    63,    61,
      33,    45,    73,    38,    34,    34,    34,    56,    71,    93,
      71,    93,    93,    93,    30,    93,    34,    34,    30,     3,
      33,    86,   107,   108,   107,     3,   105,    66,   103,     3,
      44,    56,    57,   112,    39,    45,    30,    32,    69,    92,
      92,    45,    37,    87,   108,    11,    12,    13,    42,   109,
      34,    34,    30,    34,    62,    63,    77,    33,   112,   112,
       3,    30,    73,    38,    34,    34,    78,    34,    86,    86,
      31,    31,    79,    31,     3,    66,    66,    56,    62,   113,
     114,    45,    42,   109,   109,   109,   103,   103,    30,   103,
      32,    32,     3,    34,    30,    34,   107,   107,   108,   108,
      32,    32,    69,    32,    38,    38,    62,   113,     8,    66,
     110,    30,    31,    31,   106,    79,   103,   103,    32,    32,
      66,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    56,    57,    58,    58,    57,    59,
      59,    59,    59,    60,    60,    61,    61,    61,    61,    61,
      62,    62,    62,    63,    64,    65,    65,    65,    65,    66,
      66,    67,    67,    67,    68,    68,    68,    69,    69,    70,
      71,    71,    71,    71,    72,    72,    73,    73,    74,    75,
      75,    75,    75,    76,    77,    77,    77,    77,    77,    77,
      78,    78,    79,    79,    79,    80,    80,    80,    80,    81,
      82,    82,    82,    82,    82,    82,    83,    84,    84,    84,
      84,    85,    85,    85,    86,    86,    87,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      90,    91,    92,    92,    92,    92,    92,    93,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   101,   101,   102,
      83,    84,    84,    84,    84,    85,    85,    85,    86,    86,
      86,    87,    87,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    90,    91,    92,    92,
      92,    92,    92,    93,    93,    94,    95,    96,    97,    98,
      99,   100,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   104,   104,   105,   106,   107,   107,   107,   108,
     108,   108,   108,   108,   109,   109,   109,   110,   110,   110,
     111,   111,   112,   112,   112,   112,   113,   113,   114,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     1,     1,     2,     1,     3,
       3,     1,     1,     0,     5,     2,     2,     6,     2,     1,
       1,     1,     1,     2,     2,     2,     1,     2,     3,     1,
       1,     4,     8,     6,     1,     2,     1,     1,     1,     3,
       1,     1,     1,     1,     3,     1,     1,     3,     6,     3,
       3,     1,     1,     5,     2,     2,     5,     5,     4,     1,
       2,     5,     1,     1,     1,     3,     3,     1,     1,     4,
       2,     2,     2,     5,     2,     1,     2,     2,     3,     4,
       4,     3,     3,     1,     3,     1,     1,     1,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       6,     6,     2,     2,     2,     2,     2,     2,     1,     4,
       4,     4,     4,     3,     3,     3,     2,     2,     1,     8,
       2,     2,     3,     4,     4,     3,     3,     1,     3,     3,
       1,     1,     1,     3,     5,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     4,     6,     6,     2,     2,
       2,     2,     2,     2,     1,     4,     4,     4,     4,     3,
       3,     3,     2,     2,     2,     3,     2,     2,     2,     2,
       2,     1,     7,     7,     7,     8,     1,     5,     5,     5,
       3,     5,     3,     1,     1,     1,     1,     2,     4,     1,
       7,     7,     2,     2,    10,     1,     1,     3,     2,     1
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
#line 141 "sintax.y"
                   {printf("Comentario encontrado\n");}
#line 1774 "sintax.c"
    break;

  case 7:
#line 146 "sintax.y"
                       { yyerrok; }
#line 1780 "sintax.c"
    break;

  case 8:
#line 161 "sintax.y"
                   {printf("Comentario encontrado\n");}
#line 1786 "sintax.c"
    break;

  case 9:
#line 166 "sintax.y"
                                            {printf("Paragrafo Estruturas encontrado\n");}
#line 1792 "sintax.c"
    break;

  case 10:
#line 167 "sintax.y"
                                             {printf("Comentario de Estruturas encontrado\n");}
#line 1798 "sintax.c"
    break;

  case 14:
#line 172 "sintax.y"
                                                                  {printf("Estruturas encontrado\n");}
#line 1804 "sintax.c"
    break;

  case 18:
#line 179 "sintax.y"
                             {printf("Vetor dentro de estruturas encontrado\n");}
#line 1810 "sintax.c"
    break;

  case 20:
#line 200 "sintax.y"
            {printf("Valor INTEIRO encontrado\n");}
#line 1816 "sintax.c"
    break;

  case 21:
#line 201 "sintax.y"
              {printf("Valor FLOAT encontrado\n");}
#line 1822 "sintax.c"
    break;

  case 22:
#line 202 "sintax.y"
             {printf("Valor BOLEANO encontrado\n");}
#line 1828 "sintax.c"
    break;

  case 24:
#line 208 "sintax.y"
                                     {(yyval.tipoint) = encontra_var((yyvsp[-1].nome_var),1);}
#line 1834 "sintax.c"
    break;

  case 31:
#line 223 "sintax.y"
                                                                {printf("Vetor encontrado\n");}
#line 1840 "sintax.c"
    break;

  case 32:
#line 224 "sintax.y"
                                                                                        {printf("Vetor encontrado\n");}
#line 1846 "sintax.c"
    break;

  case 33:
#line 225 "sintax.y"
                                                                {printf("Vetor encontrado\n");}
#line 1852 "sintax.c"
    break;

  case 34:
#line 228 "sintax.y"
                                {printf("Vetor com variavel encontrado\n");}
#line 1858 "sintax.c"
    break;

  case 35:
#line 229 "sintax.y"
                                   {printf("Vetor com calculo encontrado\n");}
#line 1864 "sintax.c"
    break;

  case 36:
#line 230 "sintax.y"
                {printf("Vetor vazio encontrado\n");}
#line 1870 "sintax.c"
    break;

  case 37:
#line 233 "sintax.y"
                {printf("Identificação de variavel encontrado\n");}
#line 1876 "sintax.c"
    break;

  case 39:
#line 237 "sintax.y"
                                                    {printf("Calculos encontrados\n");}
#line 1882 "sintax.c"
    break;

  case 48:
#line 254 "sintax.y"
                                                           {printf("Gerador encontrado\n");}
#line 1888 "sintax.c"
    break;

  case 49:
#line 259 "sintax.y"
                                          {printf("Paragrafo de Constante encontrado\n");}
#line 1894 "sintax.c"
    break;

  case 50:
#line 260 "sintax.y"
                                           {printf("Comentario de Constante encontrado\n");}
#line 1900 "sintax.c"
    break;

  case 53:
#line 265 "sintax.y"
                                                                       {printf("Constante encontrado\n");}
#line 1906 "sintax.c"
    break;

  case 65:
#line 287 "sintax.y"
                                     {printf("Paragrafo de Global encontrado\n");}
#line 1912 "sintax.c"
    break;

  case 66:
#line 288 "sintax.y"
                                      {printf("Comentario de Global encontrado\n");}
#line 1918 "sintax.c"
    break;

  case 69:
#line 293 "sintax.y"
                                                     {printf("GLobal encontrado\n");}
#line 1924 "sintax.c"
    break;

  case 76:
#line 305 "sintax.y"
                                     {printf("Expressao encontrada\n");}
#line 1930 "sintax.c"
    break;

  case 99:
#line 340 "sintax.y"
                                          {printf("Metodo SIZE encontrado\n");}
#line 1936 "sintax.c"
    break;

  case 100:
#line 343 "sintax.y"
                                                            {printf("Metodo RESIZE encontrado\n");}
#line 1942 "sintax.c"
    break;

  case 101:
#line 346 "sintax.y"
                                                                                            {printf("Metodo EXPOENTE encontrado\n");}
#line 1948 "sintax.c"
    break;

  case 109:
#line 360 "sintax.y"
                                                          {printf("Metodo RAIZ encontrado\n");}
#line 1954 "sintax.c"
    break;

  case 110:
#line 363 "sintax.y"
                                             {printf("Metodo write encontrado\n");}
#line 1960 "sintax.c"
    break;

  case 111:
#line 366 "sintax.y"
                                                 {printf("Metodo write_all encontrado\n");}
#line 1966 "sintax.c"
    break;

  case 112:
#line 369 "sintax.y"
                                                   {printf("Metodo write_string encontrado\n");}
#line 1972 "sintax.c"
    break;

  case 113:
#line 372 "sintax.y"
                                  {printf("Metodo read encontrado\n");}
#line 1978 "sintax.c"
    break;

  case 114:
#line 375 "sintax.y"
                                      {printf("Metodo read_all encontrado\n");}
#line 1984 "sintax.c"
    break;

  case 115:
#line 378 "sintax.y"
                                        {printf("Metodo read_string encontrado\n");}
#line 1990 "sintax.c"
    break;

  case 116:
#line 383 "sintax.y"
                       {printf("Paragrafo de Global encontrado\n");}
#line 1996 "sintax.c"
    break;

  case 117:
#line 384 "sintax.y"
                        {printf("Comentario de Global encontrado\n");}
#line 2002 "sintax.c"
    break;

  case 119:
#line 388 "sintax.y"
                                                                                            {printf("Main encontrado\n");}
#line 2008 "sintax.c"
    break;

  case 120:
#line 391 "sintax.y"
                                     {printf("Expressao encontrada\n");}
#line 2014 "sintax.c"
    break;

  case 145:
#line 428 "sintax.y"
                                          {printf("Metodo SIZE encontrado\n");}
#line 2020 "sintax.c"
    break;

  case 146:
#line 431 "sintax.y"
                                                            {printf("Metodo RESIZE encontrado\n");}
#line 2026 "sintax.c"
    break;

  case 147:
#line 434 "sintax.y"
                                                                                            {printf("Metodo EXPOENTE encontrado\n");}
#line 2032 "sintax.c"
    break;

  case 155:
#line 448 "sintax.y"
                                                          {printf("Metodo RAIZ encontrado\n");}
#line 2038 "sintax.c"
    break;

  case 156:
#line 451 "sintax.y"
                                             {printf("Metodo write encontrado\n");}
#line 2044 "sintax.c"
    break;

  case 157:
#line 454 "sintax.y"
                                                 {printf("Metodo write_all encontrado\n");}
#line 2050 "sintax.c"
    break;

  case 158:
#line 457 "sintax.y"
                                                   {printf("Metodo write_string encontrado\n");}
#line 2056 "sintax.c"
    break;

  case 159:
#line 460 "sintax.y"
                                  {printf("Metodo read encontrado\n");}
#line 2062 "sintax.c"
    break;

  case 160:
#line 463 "sintax.y"
                                      {printf("Metodo read_all encontrado\n");}
#line 2068 "sintax.c"
    break;

  case 161:
#line 466 "sintax.y"
                                        {printf("Metodo read_string encontrado\n");}
#line 2074 "sintax.c"
    break;

  case 170:
#line 480 "sintax.y"
                         {printf("Local encontrado\n");}
#line 2080 "sintax.c"
    break;

  case 172:
#line 491 "sintax.y"
                                                                                             {printf("Ciclo While encontrados\n");}
#line 2086 "sintax.c"
    break;

  case 173:
#line 492 "sintax.y"
                                                                                       {printf("Ciclo For encontrados\n");}
#line 2092 "sintax.c"
    break;

  case 175:
#line 498 "sintax.y"
                                                                                             {printf("Condicional SE encontrado\n");}
#line 2098 "sintax.c"
    break;

  case 187:
#line 518 "sintax.y"
                          {printf("Condicional SENAO encontrado\n");}
#line 2104 "sintax.c"
    break;

  case 188:
#line 519 "sintax.y"
                                                  {printf("Condicional SENAO encontrado\n");}
#line 2110 "sintax.c"
    break;

  case 194:
#line 529 "sintax.y"
                                                                                                                           {printf("Declara funcao encontrada\n");}
#line 2116 "sintax.c"
    break;


#line 2120 "sintax.c"

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
#line 540 "sintax.y"


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
