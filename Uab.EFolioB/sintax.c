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
    NOT = 269,
    ESTRUTURA = 270,
    CONST = 271,
    MAIN = 272,
    LOCAL = 273,
    GLOBAL = 274,
    ESCREVE = 275,
    ESCREVETUDO = 276,
    ESCREVESTRING = 277,
    LE = 278,
    LETUDO = 279,
    LESTRING = 280,
    EXPOENTE = 281,
    RAIZ = 282,
    SIZE = 283,
    GEN = 284,
    RESIZE = 285,
    VIRGULA = 286,
    ABRECHAVETA = 287,
    FECHACHAVETA = 288,
    ABREPARENT = 289,
    FECHAPARENT = 290,
    ABREVETOR = 291,
    FECHAVETOR = 292,
    IGUAL = 293,
    PV = 294,
    PF = 295,
    ASPAS = 296,
    EXCLAMACAO = 297,
    COMPARATIVOS = 298,
    COMENTARIO = 299,
    PARAGRAFO = 300,
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
#define NOT 269
#define ESTRUTURA 270
#define CONST 271
#define MAIN 272
#define LOCAL 273
#define GLOBAL 274
#define ESCREVE 275
#define ESCREVETUDO 276
#define ESCREVESTRING 277
#define LE 278
#define LETUDO 279
#define LESTRING 280
#define EXPOENTE 281
#define RAIZ 282
#define SIZE 283
#define GEN 284
#define RESIZE 285
#define VIRGULA 286
#define ABRECHAVETA 287
#define FECHACHAVETA 288
#define ABREPARENT 289
#define FECHAPARENT 290
#define ABREVETOR 291
#define FECHAVETOR 292
#define IGUAL 293
#define PV 294
#define PF 295
#define ASPAS 296
#define EXCLAMACAO 297
#define COMPARATIVOS 298
#define COMENTARIO 299
#define PARAGRAFO 300
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
#line 65 "sintax.y"

        char nome_var[33];
        int tipoint;
        struct valorTipo vTipo;
     

#line 298 "sintax.c"

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
#define YYLAST   565

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  158
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  387

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
       0,   148,   148,   149,   152,   155,   159,   160,   161,   164,
     169,   170,   171,   172,   174,   175,   178,   179,   180,   181,
     182,   185,   186,   187,   190,   193,   196,   197,   198,   199,
     202,   203,   208,   209,   210,   213,   214,   215,   218,   219,
     222,   225,   226,   227,   228,   231,   232,   235,   236,   239,
     244,   245,   246,   247,   250,   253,   254,   255,   256,   257,
     258,   261,   262,   265,   266,   267,   272,   273,   274,   275,
     278,   281,   282,   283,   284,   285,   286,   290,   293,   294,
     295,   296,   299,   300,   301,   304,   305,   308,   309,   310,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     325,   328,   331,   334,   335,   336,   337,   338,   341,   342,
     345,   348,   351,   354,   357,   360,   363,   368,   369,   370,
     373,   377,   378,   379,   380,   381,   382,   384,   385,   386,
     387,   397,   398,   401,   404,   407,   408,   409,   412,   413,
     414,   415,   416,   419,   420,   421,   424,   425,   426,   429,
     430,   433,   434,   435,   436,   439,   440,   443,   444
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FLOAT", "BOOL", "INT", "IDENT",
  "INTEIRO", "SE", "SENAO", "ENQUANTO", "PARA", "OU", "E", "NOT",
  "ESTRUTURA", "CONST", "MAIN", "LOCAL", "GLOBAL", "ESCREVE",
  "ESCREVETUDO", "ESCREVESTRING", "LE", "LETUDO", "LESTRING", "EXPOENTE",
  "RAIZ", "SIZE", "GEN", "RESIZE", "VIRGULA", "ABRECHAVETA",
  "FECHACHAVETA", "ABREPARENT", "FECHAPARENT", "ABREVETOR", "FECHAVETOR",
  "IGUAL", "PV", "PF", "ASPAS", "EXCLAMACAO", "COMPARATIVOS", "COMENTARIO",
  "PARAGRAFO", "REAL", "BOOLEANO", "MAIS", "MENOS", "MULTIPLICA", "DIVIDE",
  "MODULO", "empty", "$accept", "input", "vazio", "comentario", "programa",
  "teste_b", "estructs_inicio", "estructs", "estruct_corpo", "tipo",
  "declara_variavel", "primeira_variavel", "segunda_variavel", "fim_linha",
  "vetor", "vetor_corpo", "ident_ou_inteiro", "calculos", "operador",
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

#define YYPACT_NINF (-288)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -288,   160,  -288,  -288,   -16,     3,  -288,   422,  -288,   422,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,    -2,    36,    38,
      45,    49,   162,   212,   216,  -288,   162,   212,   216,  -288,
     103,   119,   268,    84,   342,   347,  -288,   347,  -288,     1,
    -288,     1,  -288,   112,  -288,   112,  -288,  -288,  -288,  -288,
      97,   111,   270,   119,  -288,   119,   114,   119,  -288,  -288,
    -288,   118,   268,  -288,   268,   152,   129,   165,   200,   342,
    -288,   342,   182,   342,   166,   342,   148,   263,  -288,  -288,
    -288,   164,   437,   437,  -288,  -288,   195,  -288,   482,  -288,
    -288,   181,   176,   191,   401,  -288,  -288,  -288,  -288,   394,
    -288,  -288,  -288,    75,  -288,  -288,  -288,  -288,  -288,   221,
     197,   276,   270,  -288,   270,  -288,  -288,   203,   206,   218,
     230,   250,   258,   261,   269,   297,   298,   268,   207,   281,
     299,   300,   312,   314,   316,   318,   319,   329,   471,  -288,
    -288,  -288,   370,   286,   330,   134,  -288,  -288,   437,   332,
    -288,  -288,   433,  -288,  -288,   443,   340,   221,   482,   176,
    -288,  -288,   158,   343,   153,  -288,  -288,   437,   336,   378,
     393,   371,   377,   381,   303,   303,   407,   413,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
     268,    46,   268,   200,   396,   399,   402,   414,   370,  -288,
     370,   370,   415,   370,   370,   423,   370,   370,   370,   451,
     421,   427,   176,   176,   443,  -288,   176,  -288,   342,   263,
     119,   445,   473,   461,  -288,   476,   478,   479,  -288,  -288,
    -288,   437,   437,   437,   437,   484,   437,   481,   485,   488,
    -288,   515,  -288,  -288,   294,   294,   516,   176,  -288,  -288,
    -288,   370,  -288,  -288,   128,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,   517,   492,   493,
    -288,  -288,  -288,  -288,  -288,   303,  -288,   303,  -288,  -288,
    -288,   303,  -288,  -288,  -288,   518,   489,   355,   391,   494,
    -288,   495,   497,   496,   268,  -288,   498,   128,  -288,   128,
    -288,   502,   473,   499,   437,  -288,   500,   501,   124,   427,
     504,  -288,  -288,  -288,   355,   355,   505,   508,   124,   509,
     528,   176,   176,   263,  -288,  -288,   535,  -288,  -288,  -288,
    -288,  -288,   397,   293,   293,   370,   370,   512,   370,   280,
     511,   513,  -288,   539,   514,   519,   520,   294,   294,   355,
     355,   521,   523,   270,   524,   522,   525,  -288,   263,   263,
    -288,  -288,  -288,  -288,  -288,    57,  -288,   527,  -288,  -288,
    -288,   530,  -288,    27,  -288,  -288,   124,   370,   370,  -288,
    -288,   526,   532,   176,  -288,   128,  -288
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     3,     1,     0,     0,     5,    14,    13,    14,
       2,     8,     6,    12,    52,    68,     7,     0,     0,     0,
       0,     0,     4,     4,     4,   117,     4,     4,     4,   118,
       0,     4,     4,     0,     4,     0,    53,     0,    10,     0,
      69,     0,    50,     0,   119,     0,    66,    11,    51,    67,
       0,     0,     4,     4,    20,     4,     0,     4,    22,    23,
      21,     0,     4,    60,     4,     0,     0,     0,     0,     4,
      76,     4,     0,     4,     0,     4,     0,     0,    38,    39,
      37,     0,    35,     4,    16,    17,    14,    19,     0,    55,
      56,     0,     4,     0,     0,    41,    42,    43,    44,     0,
      77,    71,    72,     0,    24,    73,    70,    75,     9,     0,
       0,     0,     0,    46,     0,    36,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      31,    54,     4,    38,    39,     0,    64,    65,     0,     0,
      87,    78,     0,    86,    84,     0,     0,     0,     0,     4,
      25,    27,     0,     0,     0,    32,    40,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    63,
       4,     0,     4,     0,     0,     0,     0,     0,     4,   130,
       4,     4,     0,     4,     4,     0,     4,     4,     4,     0,
      88,     0,     4,     4,     0,    79,     4,    26,     4,    28,
       4,     0,     0,     0,    45,     0,     0,     0,   114,   115,
     116,     4,     4,     4,     4,     0,     4,     0,     0,     0,
      57,     0,    61,    58,     0,     0,     0,     4,   121,   122,
     123,     4,   125,   126,     4,   127,   128,   129,    89,    85,
      80,    83,    82,    81,    74,    29,    18,     0,    47,     0,
      34,   111,   112,   113,   109,     0,   103,     0,   106,   107,
     104,     0,   105,   110,   100,     0,     0,     0,   142,     0,
     135,     0,     0,     0,     4,   124,     0,     4,   154,     4,
     120,     0,     0,     0,     4,   108,     0,     0,     0,    86,
       0,   143,   144,   145,     0,     0,     0,     0,     0,     0,
       0,     4,     4,     4,   151,   152,     0,    48,    33,   102,
     101,    62,     0,   139,   141,     4,     4,     0,     4,     0,
       0,     0,   158,     0,     0,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   157,     0,     4,
      49,   137,   136,   138,   140,     4,   131,     0,   132,   149,
     150,     0,   156,     0,   148,   134,     0,     4,     4,   146,
     133,     0,     0,     4,   147,     4,   153
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -288,  -288,     0,    73,  -288,  -288,  -288,     5,   -42,   -15,
     -32,   390,  -288,   -96,   -95,  -288,   -36,   -22,    50,   384,
     246,  -288,    68,    -4,   -24,   244,  -134,   127,    52,    11,
     -27,  -288,  -149,    21,  -142,   120,  -288,  -288,   -66,  -124,
     219,   -53,  -288,  -288,  -288,  -288,  -288,  -288,   155,   315,
      82,  -288,  -288,   180,  -224,  -262,   142,  -288,  -288,  -287,
     201,  -288
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   199,   200,    10,    11,    12,    22,    56,   109,
     201,   104,   160,   141,    57,    81,   148,   202,   277,   115,
     269,   223,    13,    23,    66,   190,   150,    14,    24,    74,
     203,   100,   151,   288,   153,   204,   128,   129,   130,   305,
     276,   131,   132,   133,   134,   135,   136,   137,    15,    25,
     205,   206,   293,   207,   289,   290,   315,   375,   208,   300,
     344,   345
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       2,     8,    73,   211,   191,    27,   215,    75,   161,    17,
     324,    84,   325,    85,    26,    87,    82,    65,    20,    72,
      21,   291,    36,    40,    44,   310,    36,    40,    44,    16,
      83,    54,    63,    27,    70,   194,    30,    73,    89,    73,
      90,    73,    75,    73,    75,   110,    75,    65,    75,    65,
     235,   237,    80,    54,    72,    54,    72,    54,    72,   378,
      72,    28,    63,   219,    63,   262,   373,   161,    31,    70,
      32,    70,   149,    70,     9,    70,   166,   241,   167,    33,
     101,    34,   102,   113,   105,   242,   107,   363,   364,    28,
      38,   116,   140,    28,    47,    37,    41,    45,   386,    37,
      41,    45,   139,   178,    55,    64,   157,    71,   234,   234,
      50,    52,    65,   158,   159,   152,   260,   261,    99,    67,
     263,   236,   236,   361,   362,    51,    55,    63,    55,    20,
      55,   189,   112,   114,   296,    64,    76,    64,   231,   231,
     210,   189,    71,    77,    71,   309,    71,    86,    71,   156,
      42,   294,   232,   232,    48,    52,    88,   306,    91,   140,
       3,     4,    92,     6,    53,     5,   240,   113,   243,    93,
     146,   147,     6,   297,   191,    65,   152,    65,   266,    46,
     146,   147,   221,    49,   337,   222,    73,   265,   103,   157,
      63,    75,    63,   108,    52,   233,   233,   159,   112,   106,
      64,   111,   214,    72,     6,     7,     6,    35,   127,   234,
      18,   234,   140,   140,   154,   234,   140,   114,    70,   138,
      54,   139,   236,   142,   236,   340,   341,   162,   236,   264,
     163,   274,   274,   274,   274,   152,   274,   168,    94,   304,
     169,   231,   380,    99,   161,   231,   179,   140,    95,    96,
      97,    98,   170,   232,   298,   232,     6,    39,   192,   232,
       6,    43,   321,    64,   171,    64,    58,    59,    60,   374,
     322,    58,    59,    60,    61,   154,    78,    79,   218,   320,
     248,   275,   249,   250,   172,   252,   253,   385,   255,   256,
     257,    71,   173,    55,    63,   174,   233,   298,   233,   298,
     210,   189,   233,   175,   274,   311,   312,   313,   343,   143,
     144,   157,     6,    62,   164,   165,    52,   367,   138,   159,
     180,   140,   140,   342,    29,   -88,   209,   299,   287,   123,
     124,   176,   177,   295,   154,   333,   334,   145,   181,   182,
     146,   147,   225,   371,   343,    58,    59,    60,    68,   146,
     147,   183,    29,   184,   275,   185,    29,   186,   187,   342,
      29,   210,   189,    19,    20,   140,    21,    64,   188,   -63,
     299,   212,   299,    58,    59,    60,   193,    79,   194,   216,
     195,   196,   220,   140,   226,   298,     6,    69,   197,   145,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   227,
     126,   146,   147,   311,   312,   313,   228,   143,   144,   311,
     312,   313,   229,   238,     6,   198,   230,   351,   352,   239,
     354,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     244,   126,   155,   245,   314,   145,   246,    18,    19,    20,
     347,    21,    95,    96,    97,    98,   247,   146,   147,   210,
     189,   278,   279,   280,   251,   282,   254,   258,   299,   381,
     382,   209,   259,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   213,   126,   348,   349,   350,   145,   189,   267,
     268,    95,    96,    97,    98,    95,    96,    97,    98,   146,
     147,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     270,   126,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   271,   126,   272,   273,   281,   283,   146,   147,   285,
     284,   286,   292,   302,   301,   307,   303,   308,   318,   316,
     317,   319,   323,   326,   339,   329,   330,   335,   328,   332,
     336,   338,   346,   353,   355,   357,   356,   217,   327,   358,
     359,   224,   331,   379,   365,   360,   366,   368,   376,   383,
     372,   369,   377,     0,   370,   384
};

static const yytype_int16 yycheck[] =
{
       0,     1,    34,   145,   138,     9,   155,    34,   103,     6,
     297,    53,   299,    55,     9,    57,    52,    32,    17,    34,
      19,   245,    22,    23,    24,   287,    26,    27,    28,    45,
      52,    31,    32,    37,    34,     8,    38,    69,    62,    71,
      64,    73,    69,    75,    71,    77,    73,    62,    75,    64,
     174,   175,    52,    53,    69,    55,    71,    57,    73,    32,
      75,     9,    62,   159,    64,   214,     9,   162,    32,    69,
      32,    71,    94,    73,     1,    75,   112,    31,   114,    34,
      69,    32,    71,    83,    73,    39,    75,   349,   350,    37,
      22,    86,    92,    41,    26,    22,    23,    24,   385,    26,
      27,    28,    45,   127,    31,    32,    31,    34,   174,   175,
       7,    36,   127,    38,    39,    94,   212,   213,    68,    35,
     216,   174,   175,   347,   348,     6,    53,   127,    55,    17,
      57,     7,    82,    83,     6,    62,    39,    64,   174,   175,
       6,     7,    69,    32,    71,   287,    73,    33,    75,    99,
      23,   247,   174,   175,    27,    36,    38,   281,     6,   159,
       0,     1,    33,    44,    45,     5,   190,   167,   192,     4,
      46,    47,    44,    45,   308,   190,   155,   192,   220,    24,
      46,    47,    29,    28,   318,    32,   218,   219,     6,    31,
     190,   218,   192,    45,    36,   174,   175,    39,   148,    33,
     127,    37,   152,   218,    44,    45,    44,    45,    88,   275,
      15,   277,   212,   213,    94,   281,   216,   167,   218,    38,
     220,    45,   275,    32,   277,   321,   322,     6,   281,   218,
      33,   231,   232,   233,   234,   214,   236,    34,    38,   275,
      34,   277,   376,   193,   339,   281,    39,   247,    48,    49,
      50,    51,    34,   275,   254,   277,    44,    45,   138,   281,
      44,    45,   294,   190,    34,   192,     3,     4,     5,   365,
     294,     3,     4,     5,     6,   155,     6,     7,   158,   294,
     198,   231,   200,   201,    34,   203,   204,   383,   206,   207,
     208,   218,    34,   220,   294,    34,   275,   297,   277,   299,
       6,     7,   281,    34,   304,    12,    13,    14,   323,     6,
       7,    31,    44,    45,    38,    39,    36,   353,    38,    39,
      39,   321,   322,   323,     9,    39,    40,   254,    34,    26,
      27,    34,    34,   251,   214,   314,   315,    34,    39,    39,
      46,    47,     6,   358,   359,     3,     4,     5,     6,    46,
      47,    39,    37,    39,   304,    39,    41,    39,    39,   359,
      45,     6,     7,    16,    17,   365,    19,   294,    39,    39,
     297,    39,   299,     3,     4,     5,     6,     7,     8,    39,
      10,    11,    39,   383,     6,   385,    44,    45,    18,    34,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     6,
      30,    46,    47,    12,    13,    14,    35,     6,     7,    12,
      13,    14,    35,     6,    44,    45,    35,   335,   336,     6,
     338,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      34,    30,    38,    34,    43,    34,    34,    15,    16,    17,
      43,    19,    48,    49,    50,    51,    32,    46,    47,     6,
       7,   232,   233,   234,    39,   236,    33,     6,   385,   377,
     378,    40,    35,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    39,    30,   332,   333,   334,    34,     7,    34,
       7,    48,    49,    50,    51,    48,    49,    50,    51,    46,
      47,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      39,    30,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    35,    30,    35,    35,    31,    35,    46,    47,    31,
      35,     6,     6,    31,     7,     7,    33,    38,    31,    35,
      35,    35,    34,    31,     6,    35,    35,    32,    39,    35,
      32,    32,     7,    31,    33,     6,    33,   157,   302,    35,
      31,   167,   308,   373,    33,    35,    33,    33,    31,    33,
     359,    39,    32,    -1,    39,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    55,    56,     0,     1,     5,    44,    45,    56,    57,
      58,    59,    60,    76,    81,   102,    45,     6,    15,    16,
      17,    19,    61,    77,    82,   103,    61,    77,    82,   103,
      38,    32,    32,    34,    32,    45,    56,    57,    76,    45,
      56,    57,    81,    45,    56,    57,   102,    76,    81,   102,
       7,     6,    36,    45,    56,    57,    62,    68,     3,     4,
       5,     6,    45,    56,    57,    63,    78,    35,     6,    45,
      56,    57,    63,    64,    83,    84,    39,    32,     6,     7,
      56,    69,    70,    71,    62,    62,    33,    62,    38,    78,
      78,     6,    33,     4,    38,    48,    49,    50,    51,    72,
      85,    83,    83,     6,    65,    83,    33,    83,    45,    63,
      64,    37,    72,    56,    72,    73,    61,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    30,    89,    90,    91,
      92,    95,    96,    97,    98,    99,   100,   101,    38,    45,
      56,    67,    32,     6,     7,    34,    46,    47,    70,    71,
      80,    86,    87,    88,    89,    38,    72,    31,    38,    39,
      66,    68,     6,    33,    38,    39,    70,    70,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    78,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,     7,
      79,    80,    89,     6,     8,    10,    11,    18,    45,    56,
      57,    64,    71,    84,    89,   104,   105,   107,   112,    40,
       6,    88,    39,    39,    72,    86,    39,    65,    89,    67,
      39,    29,    32,    75,    73,     6,     6,     6,    35,    35,
      35,    70,    71,    87,    92,    93,    95,    93,     6,     6,
      78,    31,    39,    78,    34,    34,    34,    32,   104,   104,
     104,    39,   104,   104,    33,   104,   104,   104,     6,    35,
      67,    67,    86,    67,    83,    64,    62,    34,     7,    74,
      39,    35,    35,    35,    56,    72,    94,    72,    94,    94,
      94,    31,    94,    35,    35,    31,     6,    34,    87,   108,
     109,   108,     6,   106,    67,   104,     6,    45,    56,    57,
     113,     7,    31,    33,    70,    93,    93,     7,    38,    88,
     109,    12,    13,    14,    43,   110,    35,    35,    31,    35,
      63,    64,    78,    34,   113,   113,    31,    74,    39,    35,
      35,    79,    35,    87,    87,    32,    32,    80,    32,     6,
      67,    67,    56,    63,   114,   115,     7,    43,   110,   110,
     110,   104,   104,    31,   104,    33,    33,     6,    35,    31,
      35,   108,   108,   109,   109,    33,    33,    70,    33,    39,
      39,    63,   114,     9,    67,   111,    31,    32,    32,   107,
      80,   104,   104,    33,    33,    67,   113
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    56,    57,    58,    58,    58,    59,
      60,    60,    60,    60,    61,    61,    62,    62,    62,    62,
      62,    63,    63,    63,    64,    65,    66,    66,    66,    66,
      67,    67,    68,    68,    68,    69,    69,    69,    70,    70,
      71,    72,    72,    72,    72,    73,    73,    74,    74,    75,
      76,    76,    76,    76,    77,    78,    78,    78,    78,    78,
      78,    79,    79,    80,    80,    80,    81,    81,    81,    81,
      82,    83,    83,    83,    83,    83,    83,    84,    85,    85,
      85,    85,    86,    86,    86,    87,    87,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    91,    92,    93,    93,    93,    93,    93,    94,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   102,   102,
     103,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   105,   105,   106,   107,   108,   108,   108,   109,   109,
     109,   109,   109,   110,   110,   110,   111,   111,   111,   112,
     112,   113,   113,   113,   113,   114,   114,   115,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     1,     1,     2,     1,     6,
       3,     3,     1,     1,     0,     5,     2,     2,     6,     2,
       1,     1,     1,     1,     2,     2,     2,     1,     2,     3,
       1,     1,     4,     8,     6,     1,     2,     1,     1,     1,
       3,     1,     1,     1,     1,     3,     1,     1,     3,     6,
       3,     3,     1,     1,     5,     2,     2,     5,     5,     4,
       1,     2,     5,     1,     1,     1,     3,     3,     1,     1,
       4,     2,     2,     2,     5,     2,     1,     2,     2,     3,
       4,     4,     3,     3,     1,     3,     1,     1,     1,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     6,     6,     2,     2,     2,     2,     2,     2,     1,
       4,     4,     4,     4,     3,     3,     3,     2,     2,     1,
       8,     2,     2,     2,     3,     2,     2,     2,     2,     2,
       1,     7,     7,     7,     8,     1,     5,     5,     5,     3,
       5,     3,     1,     1,     1,     1,     2,     4,     1,     7,
       7,     2,     2,    10,     1,     1,     3,     2,     1
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
#line 155 "sintax.y"
                   {printf("Comentario encontrado\n");}
#line 1774 "sintax.c"
    break;

  case 7:
#line 160 "sintax.y"
                       { yyerrok; }
#line 1780 "sintax.c"
    break;

  case 9:
#line 164 "sintax.y"
                                             {printf("int %s = %s\n", (yyvsp[-4].vTipo).valorString, (yyvsp[-2].vTipo).valorInt); }
#line 1786 "sintax.c"
    break;

  case 10:
#line 169 "sintax.y"
                                            {printf("Paragrafo Estruturas encontrado\n");}
#line 1792 "sintax.c"
    break;

  case 11:
#line 170 "sintax.y"
                                             {printf("Comentario de Estruturas encontrado\n");}
#line 1798 "sintax.c"
    break;

  case 15:
#line 175 "sintax.y"
                                                                  {printf("Estruturas encontrado\n");}
#line 1804 "sintax.c"
    break;

  case 18:
#line 180 "sintax.y"
                                                                         {printf("Estruturas Corpo encontrado\n");}
#line 1810 "sintax.c"
    break;

  case 19:
#line 181 "sintax.y"
                             {printf("Vetor dentro de estruturas encontrado\n");}
#line 1816 "sintax.c"
    break;

  case 21:
#line 185 "sintax.y"
            {printf("Valor INTEIRO encontrado\n");}
#line 1822 "sintax.c"
    break;

  case 22:
#line 186 "sintax.y"
              {printf("Valor FLOAT encontrado\n");}
#line 1828 "sintax.c"
    break;

  case 23:
#line 187 "sintax.y"
             {printf("Valor BOLEANO encontrado\n");}
#line 1834 "sintax.c"
    break;

  case 32:
#line 208 "sintax.y"
                                                                {printf("Vetor encontrado\n");}
#line 1840 "sintax.c"
    break;

  case 33:
#line 209 "sintax.y"
                                                                                        {printf("Vetor encontrado\n");}
#line 1846 "sintax.c"
    break;

  case 34:
#line 210 "sintax.y"
                                                                {printf("Vetor encontrado\n");}
#line 1852 "sintax.c"
    break;

  case 35:
#line 213 "sintax.y"
                                {printf("Vetor com variavel encontrado\n");}
#line 1858 "sintax.c"
    break;

  case 36:
#line 214 "sintax.y"
                                   {printf("Vetor com calculo encontrado\n");}
#line 1864 "sintax.c"
    break;

  case 37:
#line 215 "sintax.y"
                {printf("Vetor vazio encontrado\n");}
#line 1870 "sintax.c"
    break;

  case 38:
#line 218 "sintax.y"
                {printf("Identificação de variavel encontrado\n");}
#line 1876 "sintax.c"
    break;

  case 40:
#line 222 "sintax.y"
                                                    {printf("Calculos encontrados\n");}
#line 1882 "sintax.c"
    break;

  case 49:
#line 239 "sintax.y"
                                                           {printf("Gerador encontrado\n");}
#line 1888 "sintax.c"
    break;

  case 50:
#line 244 "sintax.y"
                                          {printf("Paragrafo de Constante encontrado\n");}
#line 1894 "sintax.c"
    break;

  case 51:
#line 245 "sintax.y"
                                           {printf("Comentario de Constante encontrado\n");}
#line 1900 "sintax.c"
    break;

  case 54:
#line 250 "sintax.y"
                                                                       {printf("Constante encontrado\n");}
#line 1906 "sintax.c"
    break;

  case 66:
#line 272 "sintax.y"
                                     {printf("Paragrafo de Global encontrado\n");}
#line 1912 "sintax.c"
    break;

  case 67:
#line 273 "sintax.y"
                                      {printf("Comentario de Global encontrado\n");}
#line 1918 "sintax.c"
    break;

  case 70:
#line 278 "sintax.y"
                                                     {printf("GLobal encontrado\n");}
#line 1924 "sintax.c"
    break;

  case 77:
#line 290 "sintax.y"
                                     {printf("Expressao encontrada\n");}
#line 1930 "sintax.c"
    break;

  case 100:
#line 325 "sintax.y"
                                          {printf("Metodo SIZE encontrado\n");}
#line 1936 "sintax.c"
    break;

  case 101:
#line 328 "sintax.y"
                                                            {printf("Metodo RESIZE encontrado\n");}
#line 1942 "sintax.c"
    break;

  case 102:
#line 331 "sintax.y"
                                                                                            {printf("Metodo EXPOENTE encontrado\n");}
#line 1948 "sintax.c"
    break;

  case 110:
#line 345 "sintax.y"
                                                          {printf("Metodo RAIZ encontrado\n");}
#line 1954 "sintax.c"
    break;

  case 111:
#line 348 "sintax.y"
                                             {printf("Metodo write encontrado\n");}
#line 1960 "sintax.c"
    break;

  case 112:
#line 351 "sintax.y"
                                                 {printf("Metodo write_all encontrado\n");}
#line 1966 "sintax.c"
    break;

  case 113:
#line 354 "sintax.y"
                                                   {printf("Metodo write_string encontrado\n");}
#line 1972 "sintax.c"
    break;

  case 114:
#line 357 "sintax.y"
                                  {printf("Metodo read encontrado\n");}
#line 1978 "sintax.c"
    break;

  case 115:
#line 360 "sintax.y"
                                      {printf("Metodo read_all encontrado\n");}
#line 1984 "sintax.c"
    break;

  case 116:
#line 363 "sintax.y"
                                        {printf("Metodo read_string encontrado\n");}
#line 1990 "sintax.c"
    break;

  case 117:
#line 368 "sintax.y"
                       {printf("Paragrafo de Global encontrado\n");}
#line 1996 "sintax.c"
    break;

  case 118:
#line 369 "sintax.y"
                        {printf("Comentario de Global encontrado\n");}
#line 2002 "sintax.c"
    break;

  case 120:
#line 373 "sintax.y"
                                                                                            {printf("Main encontrado\n");}
#line 2008 "sintax.c"
    break;

  case 129:
#line 386 "sintax.y"
                         {printf("Local encontrado\n");}
#line 2014 "sintax.c"
    break;

  case 131:
#line 397 "sintax.y"
                                                                                             {printf("Ciclo While encontrados\n");}
#line 2020 "sintax.c"
    break;

  case 132:
#line 398 "sintax.y"
                                                                                       {printf("Ciclo For encontrados\n");}
#line 2026 "sintax.c"
    break;

  case 134:
#line 404 "sintax.y"
                                                                                             {printf("Condicional SE encontrado\n");}
#line 2032 "sintax.c"
    break;

  case 146:
#line 424 "sintax.y"
                          {printf("Condicional SENAO encontrado\n");}
#line 2038 "sintax.c"
    break;

  case 147:
#line 425 "sintax.y"
                                                  {printf("Condicional SENAO encontrado\n");}
#line 2044 "sintax.c"
    break;

  case 153:
#line 435 "sintax.y"
                                                                                                                           {printf("Declara funcao encontrada\n");}
#line 2050 "sintax.c"
    break;


#line 2054 "sintax.c"

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
#line 446 "sintax.y"


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
