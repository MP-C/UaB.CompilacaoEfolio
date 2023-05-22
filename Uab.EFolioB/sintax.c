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
    ESTRUTURA = 268,
    CONST = 269,
    MAIN = 270,
    LOCAL = 271,
    GLOBAL = 272,
    ESCREVE = 273,
    ESCREVETUDO = 274,
    ESCREVESTRING = 275,
    LE = 276,
    LETUDO = 277,
    LESTRING = 278,
    EXPOENTE = 279,
    RAIZ = 280,
    SIZE = 281,
    GEN = 282,
    RESIZE = 283,
    VIRGULA = 284,
    ABRECHAVETA = 285,
    FECHACHAVETA = 286,
    ABREPARENT = 287,
    FECHAPARENT = 288,
    ABREVETOR = 289,
    FECHAVETOR = 290,
    IGUAL = 291,
    PV = 292,
    PF = 293,
    ASPAS = 294,
    EXCLAMACAO = 295,
    COMPARATIVOS = 296,
    OPERADORLOGICO = 297,
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
    INCREMENTO = 308,
    DECREMENTO = 309,
    empty = 310
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
#define ESTRUTURA 268
#define CONST 269
#define MAIN 270
#define LOCAL 271
#define GLOBAL 272
#define ESCREVE 273
#define ESCREVETUDO 274
#define ESCREVESTRING 275
#define LE 276
#define LETUDO 277
#define LESTRING 278
#define EXPOENTE 279
#define RAIZ 280
#define SIZE 281
#define GEN 282
#define RESIZE 283
#define VIRGULA 284
#define ABRECHAVETA 285
#define FECHACHAVETA 286
#define ABREPARENT 287
#define FECHAPARENT 288
#define ABREVETOR 289
#define FECHAVETOR 290
#define IGUAL 291
#define PV 292
#define PF 293
#define ASPAS 294
#define EXCLAMACAO 295
#define COMPARATIVOS 296
#define OPERADORLOGICO 297
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
#define INCREMENTO 308
#define DECREMENTO 309
#define empty 310

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 54 "sintax.y"

        char nome_var[33];
        int tipoint;
     

#line 290 "sintax.c"

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
#define YYLAST   528

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  362

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
       0,   133,   133,   134,   138,   142,   143,   147,   148,   149,
     150,   151,   152,   153,   157,   162,   166,   167,   169,   170,
     171,   191,   192,   193,   197,   201,   205,   206,   207,   208,
     212,   213,   218,   219,   220,   224,   225,   226,   230,   231,
     235,   239,   240,   241,   242,   246,   247,   251,   252,   256,
     262,   266,   267,   268,   269,   270,   271,   275,   276,   280,
     281,   282,   287,   291,   292,   293,   294,   295,   296,   301,
     305,   309,   310,   311,   312,   316,   317,   318,   322,   323,
     324,   328,   329,   330,   331,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   348,   352,   356,   360,   361,
     362,   363,   364,   368,   369,   373,   377,   381,   385,   389,
     393,   397,   402,   403,   404,   405,   406,   407,   409,   410,
     411,   412,   425,   429,   430,   431,   435,   436,   437,   438,
     439,   443,   444,   448,   449,   450,   451,   455,   456,   460,
     464,   465,   466,   467,   471,   472,   476,   477,   481,   482
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "INT", "FLOAT", "BOOL", "SE",
  "SENAO", "ENQUANTO", "PARA", "OU", "E", "ESTRUTURA", "CONST", "MAIN",
  "LOCAL", "GLOBAL", "ESCREVE", "ESCREVETUDO", "ESCREVESTRING", "LE",
  "LETUDO", "LESTRING", "EXPOENTE", "RAIZ", "SIZE", "GEN", "RESIZE",
  "VIRGULA", "ABRECHAVETA", "FECHACHAVETA", "ABREPARENT", "FECHAPARENT",
  "ABREVETOR", "FECHAVETOR", "IGUAL", "PV", "PF", "ASPAS", "EXCLAMACAO",
  "COMPARATIVOS", "OPERADORLOGICO", "COMENTARIO", "PARAGRAFO", "INTEIRO",
  "REAL", "BOOLEANO", "MAIS", "MENOS", "MULTIPLICA", "DIVIDE", "MODULO",
  "INCREMENTO", "DECREMENTO", "empty", "$accept", "input", "vazio",
  "programa", "primeira_camada", "comentario", "estructs", "estruct_corpo",
  "tipo", "declara_variavel", "primeira_variavel", "segunda_variavel",
  "fim_linha", "vetor", "vetor_corpo", "ident_ou_inteiro", "calculos",
  "operador", "vetor_corpo_extra", "vetor_listas", "gerador", "constante",
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

#define YYPACT_NINF (-266)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-83)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -266,   389,  -266,  -266,   -29,    10,    12,    41,    57,  -266,
     321,  -266,  -266,  -266,   321,  -266,  -266,  -266,  -266,  -266,
     191,   404,    80,   408,  -266,  -266,    85,    46,   191,  -266,
     191,   103,   191,   100,  -266,  -266,  -266,   404,  -266,   404,
     138,   116,   147,   347,   408,  -266,   408,   152,   408,   129,
     408,   325,  -266,  -266,  -266,   127,   215,   215,  -266,  -266,
     321,  -266,   476,  -266,  -266,   139,   146,   154,   322,  -266,
    -266,  -266,  -266,   369,  -266,  -266,  -266,   145,  -266,  -266,
    -266,  -266,   194,   169,   -11,    46,  -266,    46,  -266,  -266,
     178,   180,   182,   201,   205,   223,   227,   229,   242,   244,
     404,   186,   212,   243,   246,   254,   261,   267,   271,   276,
     277,   446,  -266,  -266,  -266,   418,   140,   241,   279,  -266,
    -266,   215,   289,  -266,  -266,   436,  -266,  -266,   354,   290,
     194,   476,   146,  -266,  -266,   158,   295,    76,  -266,  -266,
     215,   299,   334,   346,   318,   319,   320,   265,   265,   352,
     353,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,   404,    68,   404,   347,   327,   329,   330,
     333,   418,  -266,   418,   418,   344,   418,   418,   335,   418,
     418,   418,   367,   350,   338,   146,   146,   354,  -266,   146,
    -266,   408,   325,   191,   359,   349,   355,  -266,   382,   383,
     393,  -266,  -266,  -266,   215,   215,   215,   215,   402,   215,
     412,   416,   406,  -266,   447,  -266,  -266,   125,   125,   450,
     146,  -266,  -266,  -266,   418,  -266,  -266,   123,  -266,  -266,
    -266,   417,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
     409,   427,   426,  -266,  -266,  -266,  -266,  -266,   265,  -266,
     265,  -266,  -266,  -266,   265,  -266,  -266,  -266,   413,   423,
     156,   177,   442,  -266,   443,   431,   444,   404,  -266,   448,
     123,  -266,   123,  -266,   475,   452,   349,   445,   215,  -266,
     455,   456,   200,   338,   457,   156,   156,   449,   453,   200,
     473,   502,   146,   146,   325,  -266,  -266,  -266,   461,  -266,
    -266,  -266,  -266,  -266,   110,   217,   217,   418,   418,   478,
     418,   248,   477,   479,  -266,   506,   480,   482,   481,  -266,
    -266,   125,   125,   156,   156,   484,   485,    46,   486,   483,
     487,  -266,   325,   325,  -266,  -266,  -266,  -266,  -266,    94,
    -266,   489,  -266,  -266,  -266,   491,  -266,    29,  -266,  -266,
    -266,   200,   418,   418,  -266,  -266,   488,   492,   146,  -266,
     123,  -266
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     3,     1,     0,     0,     0,     0,     0,    14,
       4,    13,     2,     5,     4,     9,    10,    11,    12,     6,
       4,     4,     0,     4,     7,     8,     0,     4,     4,    20,
       4,     0,     4,     0,    21,    22,    23,     4,    56,     4,
       0,     0,     0,     0,     4,    68,     4,     0,     4,     0,
       4,     0,    38,    39,    37,     0,    35,     4,    16,    17,
       4,    19,     0,    51,    52,     0,     4,     0,     0,    41,
      42,    43,    44,     0,    70,    63,    64,     0,    24,    65,
      62,    67,     0,     0,     0,     0,    46,     0,    36,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,    50,     4,    38,     0,    39,    60,
      61,     0,     0,    81,    71,     0,    80,    77,     0,     0,
       0,     0,     4,    25,    27,     0,     0,     0,    32,    40,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    59,     4,     0,     4,     0,     0,     0,     0,
       0,     4,   121,     4,     4,     0,     4,     4,     0,     4,
       4,     4,     0,    82,     0,     4,     4,     0,    72,     4,
      26,     4,    28,     4,     0,     0,     0,    45,     0,     0,
       0,   109,   110,   111,     4,     4,     4,     4,     0,     4,
       0,     0,     0,    53,     0,    57,    54,     0,     0,     0,
       4,   112,   113,   114,     4,   117,   116,     4,   118,   119,
     120,    83,    78,    73,    76,    75,    74,    66,    29,    18,
       0,    47,     0,    34,   106,   107,   108,   104,     0,    98,
       0,   101,   102,    99,     0,   100,   105,    95,     0,     0,
       0,   130,     0,   123,     0,     0,     0,     4,   115,     0,
       4,   143,     4,    69,     0,     0,     0,     0,     4,   103,
       0,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     4,     4,   140,   141,    84,     0,    48,
      33,    97,    96,    58,     0,   127,   129,     4,     4,     0,
       4,     0,     0,     0,   147,     0,     0,   144,     0,   132,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,     0,     4,    49,   125,   124,   126,   128,     4,
     137,     0,   138,   148,   149,     0,   145,     0,    31,   133,
     122,     0,     4,     4,   134,   139,     0,     0,     4,   135,
       4,   142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -266,  -266,     0,  -266,   104,    33,  -266,    50,   -15,    48,
     392,  -266,   -77,   -73,  -266,   -18,    74,    -5,   372,   249,
    -266,  -266,   -26,   245,  -109,  -266,    40,  -266,   108,  -266,
     -83,    21,  -114,    -4,  -266,  -266,  -131,  -129,   114,   -37,
    -266,  -266,  -266,  -266,  -266,  -266,    77,   179,  -177,  -248,
     -10,  -266,  -266,  -266,  -265,   195,  -266,  -266
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   172,    12,    13,   173,    15,    31,    82,   174,
      78,   133,   114,    32,    55,   121,   175,   250,    88,   242,
     196,    16,    41,   163,   123,    17,    49,    18,   176,    74,
     124,   261,   126,   177,   101,   102,   103,   279,   249,   104,
     105,   106,   107,   108,   109,   110,   178,   179,   262,   263,
     322,   350,   180,   266,   273,   316,   317,   181
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       2,    11,   164,   184,   134,   295,    40,   296,    47,    56,
      11,    63,   284,    64,    11,    19,   207,   207,   208,   210,
      29,    38,    40,    45,    40,   137,   138,    54,    29,    47,
      29,    47,    29,    47,    14,    47,   167,    38,    73,    38,
      20,   264,    21,    14,    45,   188,    45,    14,    45,    52,
      45,    85,    87,    30,    39,   192,    46,    86,   100,   353,
      11,    30,   134,    30,   127,    30,   113,   139,   129,   140,
      39,    48,    39,    22,   151,   337,   338,    46,    58,    46,
      59,    46,    61,    46,    75,    40,    76,    23,    79,   125,
      81,    53,    48,    14,    48,   361,    48,   214,    48,    83,
      38,    57,   347,   194,   235,   215,   195,   165,   233,   234,
     209,   209,   236,    42,    24,    51,    85,   207,    25,   207,
     187,   319,   320,   207,   127,   280,   269,   191,   183,   204,
     204,    50,   113,    39,    60,    87,    62,   213,   112,   216,
      86,    65,   122,   267,   335,   336,   283,    66,    40,   125,
      40,   321,    50,    67,    50,    77,    50,   260,    50,   183,
      80,    73,    84,    38,    89,    38,     9,   270,   206,   206,
     162,   119,   120,   164,   130,   111,    47,   -82,   182,    27,
     309,   131,   132,   127,   115,   113,   113,   130,   117,   113,
     112,    45,    27,    29,    26,   132,    39,   135,    39,   248,
     136,   162,   119,   120,   247,   247,   247,   247,   125,   247,
     141,   209,   142,   209,   143,   312,   313,   209,   285,   286,
     113,   205,   205,   152,    46,    27,    30,   271,   319,   320,
     278,   237,   204,   144,     9,    28,   204,   145,   134,    48,
     238,   293,   355,   239,   183,   162,   119,   120,   221,   153,
     222,   223,   291,   225,   226,   146,   228,   229,   230,   147,
     272,   148,   349,    69,    70,    71,    72,    38,   116,   206,
     271,   206,   271,   248,   149,   206,   150,   130,   247,   315,
     154,   360,    27,   155,   111,   132,   162,   119,   120,    96,
      97,   156,   113,   113,   314,   323,   324,   117,   157,    50,
      39,   268,   198,   272,   158,   272,   305,   306,   159,   341,
     118,   119,   120,   160,   161,   292,   -59,   345,   315,   251,
     252,   253,   205,   255,   205,   116,   185,   189,   205,    34,
      35,    36,   193,   314,     5,     6,     7,   199,     8,   348,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   200,
      99,   201,   202,   203,   117,   211,   212,   183,   113,   217,
     271,   218,   219,   220,     9,    10,   227,   118,   119,   120,
     231,   232,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   224,    99,    68,   325,   326,   117,   328,   182,     3,
       4,   240,   243,   272,   241,    69,    70,    71,    72,   162,
     119,   120,     5,     6,     7,   128,     8,    33,    34,    35,
      36,    43,    34,    35,    36,   244,   245,    69,    70,    71,
      72,   166,    34,    35,    36,   167,   246,   168,   169,   356,
     357,   254,     9,    10,   170,   258,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   256,    99,     9,    37,   257,
     259,     9,    44,   265,   275,   274,   276,   277,   281,   282,
     289,     9,   171,    53,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   186,    99,   287,   288,   290,   297,   307,
     294,   298,   300,   308,    69,    70,    71,    72,   301,   302,
     304,   162,   119,   120,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   310,    99,   311,   318,   327,   329,   331,
     330,   333,   197,   332,   334,   339,   340,   342,   351,   358,
     343,   352,   190,   359,   344,   299,   354,   303,   346
};

static const yytype_int16 yycheck[] =
{
       0,     1,   111,   117,    77,   270,    21,   272,    23,    27,
      10,    37,   260,    39,    14,    44,   147,   148,   147,   148,
      20,    21,    37,    23,    39,    36,    37,    27,    28,    44,
      30,    46,    32,    48,     1,    50,     7,    37,    43,    39,
      30,   218,    30,    10,    44,   128,    46,    14,    48,     3,
      50,    56,    57,    20,    21,   132,    23,    57,    62,    30,
      60,    28,   135,    30,    68,    32,    66,    85,    73,    87,
      37,    23,    39,    32,   100,   323,   324,    44,    28,    46,
      30,    48,    32,    50,    44,   100,    46,    30,    48,    68,
      50,    45,    44,    60,    46,   360,    48,    29,    50,    51,
     100,    27,     8,    27,   187,    37,    30,   111,   185,   186,
     147,   148,   189,    33,    10,    30,   121,   248,    14,   250,
     125,    11,    12,   254,   128,   254,     3,   131,     3,   147,
     148,    23,   132,   100,    31,   140,    36,   163,    44,   165,
     140,     3,    68,   220,   321,   322,   260,    31,   163,   128,
     165,    41,    44,     6,    46,     3,    48,    32,    50,     3,
      31,   166,    35,   163,    60,   165,    43,    44,   147,   148,
      45,    46,    47,   282,    29,    36,   191,    37,    38,    34,
     289,    36,    37,   187,    30,   185,   186,    29,    32,   189,
      44,   191,    34,   193,     3,    37,   163,     3,   165,   204,
      31,    45,    46,    47,   204,   205,   206,   207,   187,   209,
      32,   248,    32,   250,    32,   292,   293,   254,    41,    42,
     220,   147,   148,    37,   191,    34,   193,   227,    11,    12,
     248,   191,   250,    32,    43,    44,   254,    32,   311,   191,
     192,   267,   351,   193,     3,    45,    46,    47,   171,    37,
     173,   174,   267,   176,   177,    32,   179,   180,   181,    32,
     227,    32,   339,    48,    49,    50,    51,   267,     3,   248,
     270,   250,   272,   278,    32,   254,    32,    29,   278,   294,
      37,   358,    34,    37,    36,    37,    45,    46,    47,    24,
      25,    37,   292,   293,   294,   305,   306,    32,    37,   191,
     267,   224,     3,   270,    37,   272,   285,   286,    37,   327,
      45,    46,    47,    37,    37,   267,    37,   332,   333,   205,
     206,   207,   248,   209,   250,     3,    37,    37,   254,     4,
       5,     6,    37,   333,    13,    14,    15,     3,    17,   339,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     3,
      28,    33,    33,    33,    32,     3,     3,     3,   358,    32,
     360,    32,    32,    30,    43,    44,    31,    45,    46,    47,
       3,    33,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    37,    28,    36,   307,   308,    32,   310,    38,     0,
       1,    32,    37,   360,    45,    48,    49,    50,    51,    45,
      46,    47,    13,    14,    15,    36,    17,     3,     4,     5,
       6,     3,     4,     5,     6,    33,    33,    48,    49,    50,
      51,     3,     4,     5,     6,     7,    33,     9,    10,   352,
     353,    29,    43,    44,    16,    29,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    33,    28,    43,    44,    33,
       3,    43,    44,     3,    45,    38,    29,    31,    45,    36,
      29,    43,    44,    45,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    37,    28,    33,    33,    33,     3,    30,
      32,    29,    37,    30,    48,    49,    50,    51,    33,    33,
      33,    45,    46,    47,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    30,    28,     3,    45,    29,    31,     3,
      31,    29,   140,    33,    33,    31,    31,    31,    29,    31,
      37,    30,   130,    31,    37,   276,   347,   282,   333
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    57,    58,     0,     1,    13,    14,    15,    17,    43,
      44,    58,    59,    60,    61,    62,    77,    81,    83,    44,
      30,    30,    32,    30,    60,    60,     3,    34,    44,    58,
      61,    63,    69,     3,     4,     5,     6,    44,    58,    61,
      64,    78,    33,     3,    44,    58,    61,    64,    65,    82,
      84,    30,     3,    45,    58,    70,    71,    72,    63,    63,
      31,    63,    36,    78,    78,     3,    31,     6,    36,    48,
      49,    50,    51,    73,    85,    82,    82,     3,    66,    82,
      31,    82,    64,    65,    35,    73,    58,    73,    74,    60,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    28,
      89,    90,    91,    92,    95,    96,    97,    98,    99,   100,
     101,    36,    44,    58,    68,    30,     3,    32,    45,    46,
      47,    71,    72,    80,    86,    87,    88,    89,    36,    73,
      29,    36,    37,    67,    69,     3,    31,    36,    37,    71,
      71,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    78,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    45,    79,    80,    89,     3,     7,     9,    10,
      16,    44,    58,    61,    65,    72,    84,    89,   102,   103,
     108,   113,    38,     3,    88,    37,    37,    73,    86,    37,
      66,    89,    68,    37,    27,    30,    76,    74,     3,     3,
       3,    33,    33,    33,    71,    72,    87,    92,    93,    95,
      93,     3,     3,    78,    29,    37,    78,    32,    32,    32,
      30,   102,   102,   102,    37,   102,   102,    31,   102,   102,
     102,     3,    33,    68,    68,    86,    68,    82,    65,    63,
      32,    45,    75,    37,    33,    33,    33,    58,    73,    94,
      73,    94,    94,    94,    29,    94,    33,    33,    29,     3,
      32,    87,   104,   105,   104,     3,   109,    68,   102,     3,
      44,    58,    61,   110,    38,    45,    29,    31,    71,    93,
      93,    45,    36,    88,   105,    41,    42,    33,    33,    29,
      33,    64,    65,    78,    32,   110,   110,     3,    29,    75,
      37,    33,    33,    79,    33,    87,    87,    30,    30,    80,
      30,     3,    68,    68,    58,    64,   111,   112,    45,    11,
      12,    41,   106,   106,   106,   102,   102,    29,   102,    31,
      31,     3,    33,    29,    33,   104,   104,   105,   105,    31,
      31,    71,    31,    37,    37,    64,   111,     8,    58,    68,
     107,    29,    30,    30,   103,    80,   102,   102,    31,    31,
      68,   110
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    58,    59,    59,    60,    60,    60,
      60,    60,    60,    60,    61,    62,    63,    63,    63,    63,
      63,    64,    64,    64,    65,    66,    67,    67,    67,    67,
      68,    68,    69,    69,    69,    70,    70,    70,    71,    71,
      72,    73,    73,    73,    73,    74,    74,    75,    75,    76,
      77,    78,    78,    78,    78,    78,    78,    79,    79,    80,
      80,    80,    81,    82,    82,    82,    82,    82,    82,    83,
      84,    85,    85,    85,    85,    86,    86,    86,    87,    87,
      87,    88,    88,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    91,    92,    93,    93,
      93,    93,    93,    94,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   103,   104,   104,   104,   105,   105,   105,   105,
     105,   106,   106,   107,   107,   107,   107,   108,   108,   109,
     110,   110,   110,   110,   111,   111,   112,   112,   113,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     5,     2,     2,     6,     2,
       1,     1,     1,     1,     2,     2,     2,     1,     2,     3,
       1,     1,     4,     8,     6,     1,     2,     1,     1,     1,
       3,     1,     1,     1,     1,     3,     1,     1,     3,     6,
       5,     2,     2,     5,     5,     4,     1,     2,     5,     1,
       1,     1,     4,     2,     2,     2,     5,     2,     1,     8,
       2,     2,     3,     4,     4,     3,     3,     1,     3,     3,
       1,     1,     1,     3,     5,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     4,     6,     6,     2,     2,
       2,     2,     2,     2,     1,     4,     4,     4,     4,     3,
       3,     3,     2,     2,     2,     3,     2,     2,     2,     2,
       2,     1,     8,     1,     5,     5,     5,     3,     5,     3,
       1,     1,     1,     1,     2,     4,     1,     7,     7,     7,
       2,     2,    10,     1,     1,     3,     2,     1,     7,     7
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
  case 6:
#line 143 "sintax.y"
                       { yyerrok; }
#line 1746 "sintax.c"
    break;

  case 7:
#line 147 "sintax.y"
                                  {printf("Paragrafo primeira camada encontrado\n");}
#line 1752 "sintax.c"
    break;

  case 8:
#line 148 "sintax.y"
                                   {printf("Comentario de primeira camada encontrado\n");}
#line 1758 "sintax.c"
    break;

  case 9:
#line 149 "sintax.y"
                 {printf("Estruturas encontrado\n");}
#line 1764 "sintax.c"
    break;

  case 10:
#line 150 "sintax.y"
                  {printf("Constante encontrado\n");}
#line 1770 "sintax.c"
    break;

  case 11:
#line 151 "sintax.y"
               {printf("Global encontrado\n");}
#line 1776 "sintax.c"
    break;

  case 12:
#line 152 "sintax.y"
             {printf("Main encontrado\n");}
#line 1782 "sintax.c"
    break;

  case 14:
#line 157 "sintax.y"
                   {printf("Comentario encontrado\n");}
#line 1788 "sintax.c"
    break;

  case 19:
#line 170 "sintax.y"
                             {printf("Vetor dentro de estruturas encontrado\n");}
#line 1794 "sintax.c"
    break;

  case 21:
#line 191 "sintax.y"
            {printf("Valor INTEIRO encontrado\n");}
#line 1800 "sintax.c"
    break;

  case 22:
#line 192 "sintax.y"
              {printf("Valor FLOAT encontrado\n");}
#line 1806 "sintax.c"
    break;

  case 23:
#line 193 "sintax.y"
             {printf("Valor BOLEANO encontrado\n");}
#line 1812 "sintax.c"
    break;

  case 25:
#line 201 "sintax.y"
                                     {(yyval.tipoint) = encontra_var((yyvsp[-1].nome_var),1);}
#line 1818 "sintax.c"
    break;

  case 32:
#line 218 "sintax.y"
                                                                {printf("Vetor encontrado\n");}
#line 1824 "sintax.c"
    break;

  case 33:
#line 219 "sintax.y"
                                                                                        {printf("Vetor encontrado\n");}
#line 1830 "sintax.c"
    break;

  case 34:
#line 220 "sintax.y"
                                                                {printf("Vetor encontrado\n");}
#line 1836 "sintax.c"
    break;

  case 35:
#line 224 "sintax.y"
                                {printf("Vetor com variavel encontrado\n");}
#line 1842 "sintax.c"
    break;

  case 36:
#line 225 "sintax.y"
                                   {printf("Vetor com calculo encontrado\n");}
#line 1848 "sintax.c"
    break;

  case 37:
#line 226 "sintax.y"
                                {printf("Vetor vazio encontrado\n");}
#line 1854 "sintax.c"
    break;

  case 38:
#line 230 "sintax.y"
                {printf("Identificação de variavel encontrado\n");}
#line 1860 "sintax.c"
    break;

  case 40:
#line 235 "sintax.y"
                                                    {printf("Calculos encontrados\n");}
#line 1866 "sintax.c"
    break;

  case 49:
#line 256 "sintax.y"
                                                           {printf("Gerador encontrado\n");}
#line 1872 "sintax.c"
    break;

  case 70:
#line 305 "sintax.y"
                                     {printf("Expressao encontrada\n");}
#line 1878 "sintax.c"
    break;

  case 95:
#line 348 "sintax.y"
                                          {printf("Metodo SIZE encontrado\n");}
#line 1884 "sintax.c"
    break;

  case 96:
#line 352 "sintax.y"
                                                            {printf("Metodo RESIZE encontrado\n");}
#line 1890 "sintax.c"
    break;

  case 97:
#line 356 "sintax.y"
                                                                                            {printf("Metodo EXPOENTE encontrado\n");}
#line 1896 "sintax.c"
    break;

  case 105:
#line 373 "sintax.y"
                                                          {printf("Metodo RAIZ encontrado\n");}
#line 1902 "sintax.c"
    break;

  case 106:
#line 377 "sintax.y"
                                             {printf("Metodo write encontrado\n");}
#line 1908 "sintax.c"
    break;

  case 107:
#line 381 "sintax.y"
                                                 {printf("Metodo write_all encontrado\n");}
#line 1914 "sintax.c"
    break;

  case 108:
#line 385 "sintax.y"
                                                   {printf("Metodo write_string encontrado\n");}
#line 1920 "sintax.c"
    break;

  case 109:
#line 389 "sintax.y"
                                  {printf("Metodo read encontrado\n");}
#line 1926 "sintax.c"
    break;

  case 110:
#line 393 "sintax.y"
                                      {printf("Metodo read_all encontrado\n");}
#line 1932 "sintax.c"
    break;

  case 111:
#line 397 "sintax.y"
                                        {printf("Metodo read_string encontrado\n");}
#line 1938 "sintax.c"
    break;

  case 120:
#line 411 "sintax.y"
                         {printf("Local encontrado\n");}
#line 1944 "sintax.c"
    break;

  case 122:
#line 425 "sintax.y"
                                                                                             {printf("Condicional SE encontrado\n");}
#line 1950 "sintax.c"
    break;

  case 134:
#line 449 "sintax.y"
                          {printf("Condicional SENAO encontrado\n");}
#line 1956 "sintax.c"
    break;

  case 135:
#line 450 "sintax.y"
                                                  {printf("Condicional SENAO encontrado\n");}
#line 1962 "sintax.c"
    break;

  case 137:
#line 455 "sintax.y"
                                                                                             {printf("Ciclo While encontrados\n");}
#line 1968 "sintax.c"
    break;

  case 138:
#line 456 "sintax.y"
                                                                                       {printf("Ciclo For encontrados\n");}
#line 1974 "sintax.c"
    break;

  case 142:
#line 466 "sintax.y"
                                                                                                                  {printf("Declara funcao encontrada\n");}
#line 1980 "sintax.c"
    break;


#line 1984 "sintax.c"

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
#line 485 "sintax.y"



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
