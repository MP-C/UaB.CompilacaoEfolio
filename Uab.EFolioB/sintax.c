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
	extern int yylineno;

	void yyerror(char *s);
	int count_error=0;

	//codigo para efolioB START
    /*struct valorTipo{
		int valorInt;
		float valorFloat;
		bool valorBool;
		char *sval;
		char *type;
    };*/
	//coidigo para efolioB FIM

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

#line 133 "sintax.c"

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
    FLOAT = 258,
    BOOL = 259,
    INT = 260,
    IDENT = 261,
    INTEIRO = 262,
    SE = 263,
    SENAO = 264,
    ENQUANTO = 265,
    PARA = 266,
    OU = 267,
    E = 268,
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
    OPERADORLOGICO = 298,
    COMENTARIO = 299,
    PARAGRAFO = 300,
    REAL = 301,
    BOOLEANO = 302,
    MAIS = 303,
    MENOS = 304,
    MULTIPLICA = 305,
    DIVIDE = 306,
    MODULO = 307,
    INCREMENTO = 308,
    DECREMENTO = 309,
    empty = 310
  };
#endif
/* Tokens.  */
#define FLOAT 258
#define BOOL 259
#define INT 260
#define IDENT 261
#define INTEIRO 262
#define SE 263
#define SENAO 264
#define ENQUANTO 265
#define PARA 266
#define OU 267
#define E 268
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
#define OPERADORLOGICO 298
#define COMENTARIO 299
#define PARAGRAFO 300
#define REAL 301
#define BOOLEANO 302
#define MAIS 303
#define MENOS 304
#define MULTIPLICA 305
#define DIVIDE 306
#define MODULO 307
#define INCREMENTO 308
#define DECREMENTO 309
#define empty 310

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 65 "sintax.y"

        char nome_var[33];
        int tipoint;
        struct valorTipo vTipo;
     

#line 302 "sintax.c"

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
#define YYLAST   532

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  367

#define YYUNDEFTOK  2
#define YYMAXUTOK   310


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
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   147,   147,   148,   152,   156,   157,   158,   162,   188,
     189,   190,   191,   192,   193,   194,   198,   203,   207,   208,
     209,   210,   211,   214,   215,   216,   220,   224,   228,   229,
     230,   231,   235,   236,   241,   242,   243,   247,   248,   249,
     253,   254,   258,   262,   263,   264,   265,   269,   270,   274,
     275,   279,   285,   289,   290,   291,   292,   293,   294,   298,
     299,   303,   304,   305,   310,   314,   315,   316,   317,   318,
     319,   324,   328,   332,   333,   334,   335,   339,   340,   341,
     345,   346,   347,   351,   352,   353,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   370,   374,   378,   382,
     383,   384,   385,   386,   390,   391,   395,   399,   403,   407,
     411,   415,   419,   424,   425,   426,   427,   428,   429,   431,
     432,   433,   434,   447,   451,   452,   453,   457,   458,   459,
     460,   461,   465,   466,   470,   471,   472,   473,   477,   478,
     482,   486,   487,   488,   489,   493,   494,   498,   499,   503,
     504
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FLOAT", "BOOL", "INT", "IDENT",
  "INTEIRO", "SE", "SENAO", "ENQUANTO", "PARA", "OU", "E", "ESTRUTURA",
  "CONST", "MAIN", "LOCAL", "GLOBAL", "ESCREVE", "ESCREVETUDO",
  "ESCREVESTRING", "LE", "LETUDO", "LESTRING", "EXPOENTE", "RAIZ", "SIZE",
  "GEN", "RESIZE", "VIRGULA", "ABRECHAVETA", "FECHACHAVETA", "ABREPARENT",
  "FECHAPARENT", "ABREVETOR", "FECHAVETOR", "IGUAL", "PV", "PF", "ASPAS",
  "EXCLAMACAO", "COMPARATIVOS", "OPERADORLOGICO", "COMENTARIO",
  "PARAGRAFO", "REAL", "BOOLEANO", "MAIS", "MENOS", "MULTIPLICA", "DIVIDE",
  "MODULO", "INCREMENTO", "DECREMENTO", "empty", "$accept", "input",
  "vazio", "programa", "teste_b", "primeira_camada", "comentario",
  "estructs", "estruct_corpo", "tipo", "declara_variavel",
  "primeira_variavel", "segunda_variavel", "fim_linha", "vetor",
  "vetor_corpo", "ident_ou_inteiro", "calculos", "operador",
  "vetor_corpo_extra", "vetor_listas", "gerador", "constante",
  "declaracao_atribuicao", "atributo", "valor", "global", "global_corpo",
  "main", "expressao", "expressao_equivalencia", "expressao_continuacao",
  "valores", "valores_dentro", "metodos", "size", "resize", "expoente",
  "exponte_raiz_variavel", "exponte_raiz_extra", "raiz", "write",
  "write_all", "write_string", "read", "read_all", "read_string",
  "instrucoes", "condicional", "condicoes_inicio", "condicoes_resto",
  "e_ou", "senao", "ciclos", "condicao_for", "declara_funcao",
  "parametros", "parametro", "local", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310
};
# endif

#define YYPACT_NINF (-240)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -240,   163,  -240,  -240,   -39,    16,    11,    25,    -4,    29,
    -240,   273,  -240,  -240,  -240,  -240,   273,  -240,  -240,  -240,
    -240,  -240,    30,   322,   215,    38,   241,  -240,  -240,    75,
      57,   128,   322,  -240,   322,    66,   322,  -240,  -240,  -240,
      78,   215,  -240,   215,   111,   109,   139,   232,   241,  -240,
     241,   142,   241,   113,   241,   116,   162,  -240,  -240,  -240,
     146,   333,   333,  -240,  -240,   273,  -240,   440,  -240,  -240,
     150,   154,   160,   396,  -240,  -240,  -240,  -240,   286,  -240,
    -240,  -240,   316,  -240,  -240,  -240,  -240,   159,   189,   174,
     138,   128,  -240,   128,  -240,  -240,   182,   195,   220,   224,
     228,   230,   245,   271,   277,   282,   215,   213,   278,   301,
     305,   311,   314,   321,   326,   330,   331,   466,  -240,  -240,
    -240,   369,   147,   340,   226,  -240,  -240,   333,   347,  -240,
    -240,   281,  -240,  -240,   425,   349,   189,   440,   154,  -240,
    -240,  -240,   320,   359,    58,  -240,  -240,   333,   318,   354,
     393,   367,   372,   375,   315,   315,   398,   404,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,
     215,    28,   215,   232,   378,   379,   391,   395,   369,  -240,
     369,   369,   389,   369,   369,   402,   369,   369,   369,   422,
     397,   401,   154,   154,   425,  -240,   154,  -240,   241,   162,
     322,   406,   423,   403,  -240,   419,   421,   434,  -240,  -240,
    -240,   333,   333,   333,   333,   426,   333,   436,   441,   427,
    -240,   468,  -240,  -240,   155,   155,   470,   154,  -240,  -240,
    -240,   369,  -240,  -240,    87,  -240,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,  -240,  -240,   471,   447,   448,
    -240,  -240,  -240,  -240,  -240,   315,  -240,   315,  -240,  -240,
    -240,   315,  -240,  -240,  -240,   472,   444,   229,   167,   450,
    -240,   460,   467,   462,   215,  -240,   465,    87,  -240,    87,
    -240,   469,   423,   463,   333,  -240,   473,   474,   218,   401,
     475,   229,   229,   479,   480,   218,   483,   494,   154,   154,
     162,  -240,  -240,   495,  -240,  -240,  -240,  -240,  -240,   100,
     210,   210,   369,   369,   476,   369,   370,   484,   485,  -240,
     497,   481,   488,   486,  -240,  -240,   155,   155,   229,   229,
     487,   489,   128,   490,   491,   492,  -240,   162,   162,  -240,
    -240,  -240,  -240,  -240,     1,  -240,   493,  -240,  -240,  -240,
     496,  -240,    47,  -240,  -240,  -240,   218,   369,   369,  -240,
    -240,   499,   500,   154,  -240,    87,  -240
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     3,     1,     0,     0,     0,     0,     0,     0,
      16,     4,    15,     2,     6,     5,     4,    11,    12,    13,
      14,     7,     0,     4,     4,     0,     4,     9,    10,     0,
       0,     4,     4,    22,     4,     0,     4,    24,    25,    23,
       0,     4,    58,     4,     0,     0,     0,     0,     4,    70,
       4,     0,     4,     0,     4,     0,     0,    40,    41,    39,
       0,    37,     4,    18,    19,     4,    21,     0,    53,    54,
       0,     4,     0,     0,    43,    44,    45,    46,     0,    72,
      65,    66,     0,    26,    67,    64,    69,     0,     0,     0,
       0,     0,    48,     0,    38,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      52,     4,    40,    41,     0,    62,    63,     0,     0,    83,
      73,     0,    82,    79,     0,     0,     0,     0,     4,    27,
      29,     8,     0,     0,     0,    34,    42,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    61,
       4,     0,     4,     0,     0,     0,     0,     0,     4,   122,
       4,     4,     0,     4,     4,     0,     4,     4,     4,     0,
      84,     0,     4,     4,     0,    74,     4,    28,     4,    30,
       4,     0,     0,     0,    47,     0,     0,     0,   110,   111,
     112,     4,     4,     4,     4,     0,     4,     0,     0,     0,
      55,     0,    59,    56,     0,     0,     0,     4,   113,   114,
     115,     4,   118,   117,     4,   119,   120,   121,    85,    80,
      75,    78,    77,    76,    68,    31,    20,     0,    49,     0,
      36,   107,   108,   109,   105,     0,    99,     0,   102,   103,
     100,     0,   101,   106,    96,     0,     0,     0,   131,     0,
     124,     0,     0,     0,     4,   116,     0,     4,   144,     4,
      71,     0,     0,     0,     4,   104,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     4,
       4,   141,   142,     0,    50,    35,    98,    97,    60,     0,
     128,   130,     4,     4,     0,     4,     0,     0,     0,   148,
       0,     0,   145,     0,   133,   132,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,     0,     4,    51,
     126,   125,   127,   129,     4,   138,     0,   139,   149,   150,
       0,   146,     0,    33,   134,   123,     0,     4,     4,   135,
     140,     0,     0,     4,   136,     4,   143
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -240,  -240,     0,  -240,  -240,    -2,    68,  -240,   -29,    33,
      51,   368,  -240,   -43,   -74,  -240,   -18,    -3,   -17,   358,
     242,  -240,  -240,   -26,   237,  -115,  -240,   -15,  -240,    -1,
    -240,  -130,    35,  -112,    23,  -240,  -240,  -136,  -134,    81,
     -31,  -240,  -240,  -240,  -240,  -240,  -240,   125,   176,  -198,
    -170,   -40,  -240,  -240,  -240,  -239,   188,  -240,  -240
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   179,    13,    14,    15,   180,    17,    35,    88,
     181,    83,   139,   120,    36,    60,   127,   182,   257,    94,
     249,   203,    18,    45,   170,   129,    19,    53,    20,   183,
      79,   130,   268,   132,   184,   107,   108,   109,   285,   256,
     110,   111,   112,   113,   114,   115,   116,   185,   186,   269,
     270,   327,   355,   187,   273,   280,   321,   322,   188
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       2,    12,   171,    63,   195,    64,    21,    66,   140,    27,
     352,    12,   191,    61,    28,    68,    12,    69,   214,   214,
     215,   217,    22,    33,    42,    54,    49,   271,    62,    25,
      78,    59,    33,    80,    33,    81,    33,    84,   301,    86,
     302,    42,    23,    42,    91,    93,   118,    54,    49,    54,
      49,    54,    49,    54,    49,   174,    24,    44,   221,    51,
      26,   135,    92,    95,   242,    12,   222,    29,   140,    16,
     128,   119,    46,   146,    44,   147,    44,    52,   358,    16,
     158,    51,    55,    51,    16,    51,   201,    51,    56,   202,
     106,    34,    43,   276,    50,   199,   133,   290,    65,    52,
      34,    52,    34,    52,    34,    52,    42,    89,   131,    43,
      91,    43,   324,   325,   194,    67,    50,    70,    50,   214,
      50,   214,    50,   216,   216,   214,   366,   286,   340,   341,
      93,    10,   277,    16,    57,    58,   211,   211,   119,    44,
     172,    71,   326,    72,   220,    85,   223,    92,    82,   240,
     241,   212,   212,   243,    87,   289,    78,   133,   342,   343,
     198,   190,   169,     3,     4,    37,    38,    39,     5,   131,
      42,   246,    42,   171,    43,   144,   145,     6,     7,     8,
     314,     9,    90,   244,   274,   -84,   189,   117,   267,   213,
     213,   121,   119,   119,   255,   142,   119,    54,    49,   118,
      33,   125,   126,    44,   141,    44,   143,    10,    11,   291,
     292,   254,   254,   254,   254,   148,   254,   133,    37,    38,
      39,    40,   324,   325,   216,   169,   216,   119,   149,   131,
     216,    51,   190,   169,   278,   190,   169,   284,    43,   211,
      43,   360,   140,   211,    37,    38,    39,    47,   299,    52,
     245,   159,   212,   150,   212,   317,   318,   151,   212,    10,
      41,   152,   124,   153,   125,   126,    50,   255,    34,    73,
     328,   329,   125,   126,    42,   125,   126,   278,   154,   278,
      74,    75,    76,    77,   254,    10,    48,     6,     7,     8,
     213,     9,   213,   258,   259,   260,   213,   262,   119,   119,
     319,   354,   279,   228,   155,   229,   230,   297,   232,   233,
     156,   235,   236,   237,   346,   157,   160,    10,    11,   193,
     365,   122,   123,   134,   205,   298,   310,   311,    30,    74,
      75,    76,    77,   320,    74,    75,    76,    77,   319,   161,
     102,   103,    43,   162,   353,   279,   136,   279,   124,   163,
     136,    31,   164,   137,   138,    31,   275,    31,   138,   165,
     206,   125,   126,   119,   166,   278,    10,    32,   167,   168,
     350,   320,    37,    38,    39,   173,    58,   174,   -61,   175,
     176,    74,    75,    76,    77,   192,   177,   196,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   200,   105,   207,
     136,   208,   122,   123,   218,    31,   209,   117,   138,   210,
     219,   224,   225,    10,   178,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   226,   105,   227,   231,   238,   124,
     248,   190,   169,   279,   234,   239,   189,   330,   331,   247,
     333,   250,   125,   126,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   251,   105,   252,   261,   265,   124,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   253,   105,
     263,   125,   126,   169,   266,   264,   272,   282,   281,   287,
     283,   288,   361,   362,   293,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   294,   105,   296,   295,   300,   303,
     316,   305,   323,   336,   197,   204,   332,   306,   307,   309,
     312,   313,   125,   126,   315,   337,   334,   335,   338,   344,
     339,   345,   347,   356,   304,   308,   351,   357,   359,   348,
     349,   363,   364
};

static const yytype_int16 yycheck[] =
{
       0,     1,   117,    32,   134,    34,    45,    36,    82,    11,
       9,    11,   124,    31,    16,    41,    16,    43,   154,   155,
     154,   155,     6,    23,    24,    26,    26,   225,    31,    33,
      47,    31,    32,    48,    34,    50,    36,    52,   277,    54,
     279,    41,    31,    43,    61,    62,    45,    48,    48,    50,
      50,    52,    52,    54,    54,     8,    31,    24,    30,    26,
      31,    78,    62,    65,   194,    65,    38,    37,   142,     1,
      73,    71,    34,    91,    41,    93,    43,    26,    31,    11,
     106,    48,     7,    50,    16,    52,    28,    54,    31,    31,
      67,    23,    24,     6,    26,   138,    73,   267,    32,    48,
      32,    50,    34,    52,    36,    54,   106,    56,    73,    41,
     127,    43,    12,    13,   131,    37,    48,     6,    50,   255,
      52,   257,    54,   154,   155,   261,   365,   261,   326,   327,
     147,    44,    45,    65,     6,     7,   154,   155,   138,   106,
     117,    32,    42,     4,   170,    32,   172,   147,     6,   192,
     193,   154,   155,   196,    38,   267,   173,   134,   328,   329,
     137,     6,     7,     0,     1,     3,     4,     5,     5,   134,
     170,   200,   172,   288,   106,    37,    38,    14,    15,    16,
     295,    18,    36,   198,   227,    38,    39,    37,    33,   154,
     155,    31,   192,   193,   211,     6,   196,   198,   198,    45,
     200,    46,    47,   170,    45,   172,    32,    44,    45,    42,
      43,   211,   212,   213,   214,    33,   216,   194,     3,     4,
       5,     6,    12,    13,   255,     7,   257,   227,    33,   194,
     261,   198,     6,     7,   234,     6,     7,   255,   170,   257,
     172,   356,   316,   261,     3,     4,     5,     6,   274,   198,
     199,    38,   255,    33,   257,   298,   299,    33,   261,    44,
      45,    33,    33,    33,    46,    47,   198,   284,   200,    37,
     310,   311,    46,    47,   274,    46,    47,   277,    33,   279,
      48,    49,    50,    51,   284,    44,    45,    14,    15,    16,
     255,    18,   257,   212,   213,   214,   261,   216,   298,   299,
     300,   344,   234,   178,    33,   180,   181,   274,   183,   184,
      33,   186,   187,   188,   332,    33,    38,    44,    45,    38,
     363,     6,     7,    37,     6,   274,   291,   292,     6,    48,
      49,    50,    51,   300,    48,    49,    50,    51,   338,    38,
      25,    26,   274,    38,   344,   277,    30,   279,    33,    38,
      30,    35,    38,    37,    38,    35,   231,    35,    38,    38,
       6,    46,    47,   363,    38,   365,    44,    45,    38,    38,
     337,   338,     3,     4,     5,     6,     7,     8,    38,    10,
      11,    48,    49,    50,    51,    38,    17,    38,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    38,    29,     6,
      30,    34,     6,     7,     6,    35,    34,    37,    38,    34,
       6,    33,    33,    44,    45,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    33,    29,    31,    38,     6,    33,
       7,     6,     7,   365,    32,    34,    39,   312,   313,    33,
     315,    38,    46,    47,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    34,    29,    34,    30,    30,    33,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    34,    29,
      34,    46,    47,     7,     6,    34,     6,    30,     7,     7,
      32,    37,   357,   358,    34,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    34,    29,    34,    30,    33,    30,
       6,    38,     7,     6,   136,   147,    30,    34,    34,    34,
      31,    31,    46,    47,    31,    34,    32,    32,    30,    32,
      34,    32,    32,    30,   282,   288,   338,    31,   352,    38,
      38,    32,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    57,    58,     0,     1,     5,    14,    15,    16,    18,
      44,    45,    58,    59,    60,    61,    62,    63,    78,    82,
      84,    45,     6,    31,    31,    33,    31,    61,    61,    37,
       6,    35,    45,    58,    62,    64,    70,     3,     4,     5,
       6,    45,    58,    62,    65,    79,    34,     6,    45,    58,
      62,    65,    66,    83,    85,     7,    31,     6,     7,    58,
      71,    72,    73,    64,    64,    32,    64,    37,    79,    79,
       6,    32,     4,    37,    48,    49,    50,    51,    74,    86,
      83,    83,     6,    67,    83,    32,    83,    38,    65,    66,
      36,    74,    58,    74,    75,    61,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    29,    90,    91,    92,    93,
      96,    97,    98,    99,   100,   101,   102,    37,    45,    58,
      69,    31,     6,     7,    33,    46,    47,    72,    73,    81,
      87,    88,    89,    90,    37,    74,    30,    37,    38,    68,
      70,    45,     6,    32,    37,    38,    72,    72,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    79,    38,
      38,    38,    38,    38,    38,    38,    38,    38,    38,     7,
      80,    81,    90,     6,     8,    10,    11,    17,    45,    58,
      62,    66,    73,    85,    90,   103,   104,   109,   114,    39,
       6,    89,    38,    38,    74,    87,    38,    67,    90,    69,
      38,    28,    31,    77,    75,     6,     6,     6,    34,    34,
      34,    72,    73,    88,    93,    94,    96,    94,     6,     6,
      79,    30,    38,    79,    33,    33,    33,    31,   103,   103,
     103,    38,   103,   103,    32,   103,   103,   103,     6,    34,
      69,    69,    87,    69,    83,    66,    64,    33,     7,    76,
      38,    34,    34,    34,    58,    74,    95,    74,    95,    95,
      95,    30,    95,    34,    34,    30,     6,    33,    88,   105,
     106,   105,     6,   110,    69,   103,     6,    45,    58,    62,
     111,     7,    30,    32,    72,    94,    94,     7,    37,    89,
     106,    42,    43,    34,    34,    30,    34,    65,    66,    79,
      33,   111,   111,    30,    76,    38,    34,    34,    80,    34,
      88,    88,    31,    31,    81,    31,     6,    69,    69,    58,
      65,   112,   113,     7,    12,    13,    42,   107,   107,   107,
     103,   103,    30,   103,    32,    32,     6,    34,    30,    34,
     105,   105,   106,   106,    32,    32,    72,    32,    38,    38,
      65,   112,     9,    58,    69,   108,    30,    31,    31,   104,
      81,   103,   103,    32,    32,    69,   111
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    58,    59,    59,    59,    60,    61,
      61,    61,    61,    61,    61,    61,    62,    63,    64,    64,
      64,    64,    64,    65,    65,    65,    66,    67,    68,    68,
      68,    68,    69,    69,    70,    70,    70,    71,    71,    71,
      72,    72,    73,    74,    74,    74,    74,    75,    75,    76,
      76,    77,    78,    79,    79,    79,    79,    79,    79,    80,
      80,    81,    81,    81,    82,    83,    83,    83,    83,    83,
      83,    84,    85,    86,    86,    86,    86,    87,    87,    87,
      88,    88,    88,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    92,    93,    94,
      94,    94,    94,    94,    95,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   104,   105,   105,   105,   106,   106,   106,
     106,   106,   107,   107,   108,   108,   108,   108,   109,   109,
     110,   111,   111,   111,   111,   112,   112,   113,   113,   114,
     114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     1,     1,     2,     6,     2,
       2,     1,     1,     1,     1,     1,     1,     5,     2,     2,
       6,     2,     1,     1,     1,     1,     2,     2,     2,     1,
       2,     3,     1,     1,     4,     8,     6,     1,     2,     1,
       1,     1,     3,     1,     1,     1,     1,     3,     1,     1,
       3,     6,     5,     2,     2,     5,     5,     4,     1,     2,
       5,     1,     1,     1,     4,     2,     2,     2,     5,     2,
       1,     8,     2,     2,     3,     4,     4,     3,     3,     1,
       3,     3,     1,     1,     1,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     6,     6,     2,
       2,     2,     2,     2,     2,     1,     4,     4,     4,     4,
       3,     3,     3,     2,     2,     2,     3,     2,     2,     2,
       2,     2,     1,     8,     1,     5,     5,     5,     3,     5,
       3,     1,     1,     1,     1,     2,     4,     1,     7,     7,
       7,     2,     2,    10,     1,     1,     3,     2,     1,     7,
       7
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
  case 7:
#line 158 "sintax.y"
                       { yyerrok; }
#line 1764 "sintax.c"
    break;

  case 8:
#line 162 "sintax.y"
                                                     {printf("int %s = %s\n", (yyvsp[-4].vTipo).valorString, (yyvsp[-2].vTipo).valorInt); }
#line 1770 "sintax.c"
    break;

  case 9:
#line 188 "sintax.y"
                                  {printf("Paragrafo primeira camada encontrado\n");}
#line 1776 "sintax.c"
    break;

  case 10:
#line 189 "sintax.y"
                                   {printf("Comentario de primeira camada encontrado\n");}
#line 1782 "sintax.c"
    break;

  case 11:
#line 190 "sintax.y"
                 {printf("Estruturas encontrado\n");}
#line 1788 "sintax.c"
    break;

  case 12:
#line 191 "sintax.y"
                  {printf("Constante encontrado\n");}
#line 1794 "sintax.c"
    break;

  case 13:
#line 192 "sintax.y"
               {printf("Global encontrado\n");}
#line 1800 "sintax.c"
    break;

  case 14:
#line 193 "sintax.y"
             {printf("Main encontrado\n");}
#line 1806 "sintax.c"
    break;

  case 16:
#line 198 "sintax.y"
                   {printf("Comentario encontrado\n");}
#line 1812 "sintax.c"
    break;

  case 21:
#line 210 "sintax.y"
                             {printf("Vetor dentro de estruturas encontrado\n");}
#line 1818 "sintax.c"
    break;

  case 23:
#line 214 "sintax.y"
            {printf("Valor INTEIRO encontrado\n");}
#line 1824 "sintax.c"
    break;

  case 24:
#line 215 "sintax.y"
              {printf("Valor FLOAT encontrado\n");}
#line 1830 "sintax.c"
    break;

  case 25:
#line 216 "sintax.y"
             {printf("Valor BOLEANO encontrado\n");}
#line 1836 "sintax.c"
    break;

  case 34:
#line 241 "sintax.y"
                                                                {printf("Vetor encontrado\n");}
#line 1842 "sintax.c"
    break;

  case 35:
#line 242 "sintax.y"
                                                                                        {printf("Vetor encontrado\n");}
#line 1848 "sintax.c"
    break;

  case 36:
#line 243 "sintax.y"
                                                                {printf("Vetor encontrado\n");}
#line 1854 "sintax.c"
    break;

  case 37:
#line 247 "sintax.y"
                                {printf("Vetor com variavel encontrado\n");}
#line 1860 "sintax.c"
    break;

  case 38:
#line 248 "sintax.y"
                                   {printf("Vetor com calculo encontrado\n");}
#line 1866 "sintax.c"
    break;

  case 39:
#line 249 "sintax.y"
                                {printf("Vetor vazio encontrado\n");}
#line 1872 "sintax.c"
    break;

  case 40:
#line 253 "sintax.y"
                {printf("Identificação de variavel encontrado\n");}
#line 1878 "sintax.c"
    break;

  case 42:
#line 258 "sintax.y"
                                                    {printf("Calculos encontrados\n");}
#line 1884 "sintax.c"
    break;

  case 51:
#line 279 "sintax.y"
                                                           {printf("Gerador encontrado\n");}
#line 1890 "sintax.c"
    break;

  case 72:
#line 328 "sintax.y"
                                     {printf("Expressao encontrada\n");}
#line 1896 "sintax.c"
    break;

  case 96:
#line 370 "sintax.y"
                                          {printf("Metodo SIZE encontrado\n");}
#line 1902 "sintax.c"
    break;

  case 97:
#line 374 "sintax.y"
                                                            {printf("Metodo RESIZE encontrado\n");}
#line 1908 "sintax.c"
    break;

  case 98:
#line 378 "sintax.y"
                                                                                            {printf("Metodo EXPOENTE encontrado\n");}
#line 1914 "sintax.c"
    break;

  case 106:
#line 395 "sintax.y"
                                                          {printf("Metodo RAIZ encontrado\n");}
#line 1920 "sintax.c"
    break;

  case 107:
#line 399 "sintax.y"
                                             {printf("Metodo write encontrado\n");}
#line 1926 "sintax.c"
    break;

  case 108:
#line 403 "sintax.y"
                                                 {printf("Metodo write_all encontrado\n");}
#line 1932 "sintax.c"
    break;

  case 109:
#line 407 "sintax.y"
                                                   {printf("Metodo write_string encontrado\n");}
#line 1938 "sintax.c"
    break;

  case 110:
#line 411 "sintax.y"
                                  {printf("Metodo read encontrado\n");}
#line 1944 "sintax.c"
    break;

  case 111:
#line 415 "sintax.y"
                                      {printf("Metodo read_all encontrado\n");}
#line 1950 "sintax.c"
    break;

  case 112:
#line 419 "sintax.y"
                                        {printf("Metodo read_string encontrado\n");}
#line 1956 "sintax.c"
    break;

  case 121:
#line 433 "sintax.y"
                         {printf("Local encontrado\n");}
#line 1962 "sintax.c"
    break;

  case 123:
#line 447 "sintax.y"
                                                                                             {printf("Condicional SE encontrado\n");}
#line 1968 "sintax.c"
    break;

  case 135:
#line 471 "sintax.y"
                          {printf("Condicional SENAO encontrado\n");}
#line 1974 "sintax.c"
    break;

  case 136:
#line 472 "sintax.y"
                                                  {printf("Condicional SENAO encontrado\n");}
#line 1980 "sintax.c"
    break;

  case 138:
#line 477 "sintax.y"
                                                                                             {printf("Ciclo While encontrados\n");}
#line 1986 "sintax.c"
    break;

  case 139:
#line 478 "sintax.y"
                                                                                       {printf("Ciclo For encontrados\n");}
#line 1992 "sintax.c"
    break;

  case 143:
#line 488 "sintax.y"
                                                                                                                  {printf("Declara funcao encontrada\n");}
#line 1998 "sintax.c"
    break;


#line 2002 "sintax.c"

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
#line 507 "sintax.y"



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
