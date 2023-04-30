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

    /* Ponto 6 - Verificar se a variavel foi declarada anteriormente
       Vamos guardar o nome da variavel numa estrutura com 100 posicoes
       em que cada identificador podera ter 32 caracteres + 1 para \0
    */

    struct {
        char nome [33];
        char tipo [6];
        char local [8];
    }
    vars[100];

    int debug=0;
    void debuf(char*);

    /* código nosso e de nózes */
    void bashInfo(char*);
    void adiciona_var(const char*, const char*, const char*);
    int existe_var(const char*, const char*, const char*);
    void apresenta_debug(const char*);

    /* TODO :  APAGAR ESTE COMENTARIO ? ?!?!?!!- - --- - - -- - - - -  - - - - - */
    /*int debug=0;
    int variaveis_criadas=0;*/

    //printf("Todo o output serve como identificador");
    /* apartir daqui já é do Deus dará */

    int vars_preenchidas=0;
    int le_var(const char *nome);
    int encontra_var(const char *nome, int adicionar);

#line 129 "sintax.c"

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
    IDENTFUNC = 259,
    INT = 260,
    FLOAT = 261,
    BOOL = 262,
    SE = 263,
    SENAO = 264,
    ENQUANTO = 265,
    PARA = 266,
    OU = 267,
    E = 268,
    ESTRUCT = 269,
    CONST = 270,
    GLOBAL = 271,
    ESCREVE = 272,
    ESCREVETUDO = 273,
    ESCREVESTRING = 274,
    LE = 275,
    LETUDO = 276,
    LESTRING = 277,
    RAIZ = 278,
    EXPOENTE = 279,
    MAIN = 280,
    LOCAL = 281,
    GEN = 282,
    SIZE = 283,
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
    ASPAS = 294,
    COMPARATIVOS = 295,
    EXCLAMACAO = 296,
    MAIS = 297,
    MENOS = 298,
    OPERADOR = 299,
    TEXTOWRITE = 300,
    COMENTARIO = 301,
    PARAGRAFO = 302,
    INTEIRO = 303,
    REAL = 304,
    BOOLEANO = 305,
    SINAL = 306
  };
#endif
/* Tokens.  */
#define IDENT 258
#define IDENTFUNC 259
#define INT 260
#define FLOAT 261
#define BOOL 262
#define SE 263
#define SENAO 264
#define ENQUANTO 265
#define PARA 266
#define OU 267
#define E 268
#define ESTRUCT 269
#define CONST 270
#define GLOBAL 271
#define ESCREVE 272
#define ESCREVETUDO 273
#define ESCREVESTRING 274
#define LE 275
#define LETUDO 276
#define LESTRING 277
#define RAIZ 278
#define EXPOENTE 279
#define MAIN 280
#define LOCAL 281
#define GEN 282
#define SIZE 283
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
#define ASPAS 294
#define COMPARATIVOS 295
#define EXCLAMACAO 296
#define MAIS 297
#define MENOS 298
#define OPERADOR 299
#define TEXTOWRITE 300
#define COMENTARIO 301
#define PARAGRAFO 302
#define INTEIRO 303
#define REAL 304
#define BOOLEANO 305
#define SINAL 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 61 "sintax.y"

        char nome_var[33];
        int tipoint;
     

#line 289 "sintax.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   362

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  300

#define YYUNDEFTOK  2
#define YYMAXUTOK   306


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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   129,   129,   130,   135,   136,   137,   142,   143,   144,
     145,   146,   147,   149,   150,   151,   155,   156,   157,   158,
     159,   160,   161,   165,   169,   173,   174,   175,   176,   177,
     178,   184,   188,   189,   190,   194,   198,   199,   200,   204,
     208,   209,   210,   211,   212,   213,   217,   218,   222,   223,
     224,   228,   232,   237,   238,   239,   240,   241,   242,   246,
     250,   251,   252,   256,   257,   261,   262,   266,   270,   271,
     275,   276,   288,   289,   293,   294,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   310,   311,   315,   316,   320,
     321,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   339,   343,   347,   351,   352,   356,   360,   361,
     362,   366,   370,   371,   375,   379,   383,   387,   391,   395,
     399,   400,   401,   405,   406,   407,   411,   412,   416,   417,
     421,   425,   426,   430,   430,   432,   433,   437,   438,   439,
     440,   441,   445,   449,   450,   457
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "IDENTFUNC", "INT", "FLOAT",
  "BOOL", "SE", "SENAO", "ENQUANTO", "PARA", "OU", "E", "ESTRUCT", "CONST",
  "GLOBAL", "ESCREVE", "ESCREVETUDO", "ESCREVESTRING", "LE", "LETUDO",
  "LESTRING", "RAIZ", "EXPOENTE", "MAIN", "LOCAL", "GEN", "SIZE", "RESIZE",
  "VIRGULA", "ABRECHAVETA", "FECHACHAVETA", "ABREPARENT", "FECHAPARENT",
  "ABREVETOR", "FECHAVETOR", "IGUAL", "PV", "ASPAS", "COMPARATIVOS",
  "EXCLAMACAO", "MAIS", "MENOS", "OPERADOR", "TEXTOWRITE", "COMENTARIO",
  "PARAGRAFO", "INTEIRO", "REAL", "BOOLEANO", "SINAL", "$accept", "input",
  "linha", "primeira_camada", "segunda_camada", "comentario", "structs",
  "structs_corpo", "declara_variavel", "tipo", "primeira_variavel",
  "segundo_termo", "constante", "declaracao_atribuicao", "atributo",
  "valor", "global", "main", "funcoes_corpo", "expressao",
  "expressao_equivalencia", "expressao_continuacao", "valores",
  "condicional", "condicoes", "ou_e", "chama_funcao", "declara_funcao",
  "instrucoes", "parametros", "parametro", "ident_ou_inteiro", "metodos",
  "size", "resize", "expoente", "exponte_variavel", "calculos",
  "operacoes", "raiz", "raiz_variavel", "write", "write_all",
  "write_string", "read", "read_all", "read_string", "vetor",
  "vetor_corpo", "vetor_corpo_extra", "vetor_listas", "gerador",
  "sinal_gen", "ciclos", "$@1", "ciclo_condicional_while",
  "ciclo_condicional_for", "int_ou_float", "atribuicao", YY_NULLPTR
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
     305,   306
};
# endif

#define YYPACT_NINF (-211)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-134)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -211,   220,  -211,   -34,    15,  -211,  -211,  -211,  -211,    34,
      25,    46,    76,    85,    96,   107,   111,   112,   114,   115,
     127,   131,   132,   134,  -211,   283,  -211,  -211,  -211,   283,
    -211,   283,   183,  -211,  -211,  -211,   283,   283,   283,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
      14,   154,    47,    18,    69,   187,   188,   189,   159,   160,
     161,    12,    14,   162,   195,   196,   283,  -211,   283,  -211,
    -211,   108,  -211,  -211,  -211,  -211,  -211,  -211,    57,  -211,
    -211,  -211,   169,    14,    47,    47,  -211,   170,  -211,   164,
      18,    18,   200,   172,   173,   174,   175,   176,   177,   179,
     180,  -211,  -211,   178,    88,   181,  -211,   206,   185,   192,
     183,  -211,  -211,  -211,    14,    40,    69,    88,    88,   171,
    -211,  -211,  -211,   156,  -211,  -211,   191,  -211,  -211,   186,
     194,   208,  -211,  -211,  -211,   209,  -211,  -211,  -211,    14,
      14,   198,   212,   203,  -211,  -211,   205,   222,   224,    14,
    -211,    48,   216,   133,  -211,  -211,  -211,  -211,  -211,   227,
      95,  -211,   231,  -211,   252,   239,    88,    77,  -211,    18,
    -211,  -211,  -211,    18,   -11,   240,   241,    -9,   249,  -211,
    -211,   251,  -211,  -211,  -211,   246,    82,   254,   252,  -211,
     252,  -211,  -211,   259,  -211,  -211,   282,  -211,    47,  -211,
     260,   247,   256,  -211,  -211,   293,  -211,    18,  -211,     9,
     253,  -211,   305,   283,  -211,    14,   306,   307,  -211,  -211,
     266,   281,  -211,   267,   286,   285,  -211,   284,  -211,  -211,
      23,  -211,  -211,    11,  -211,   278,   288,  -211,    87,   287,
     289,   290,  -211,   317,   296,   247,   294,   121,  -211,  -211,
      23,    23,   292,   295,  -211,    90,   297,    65,   300,   298,
    -211,  -211,  -211,  -211,   110,    95,  -211,  -211,   301,   252,
     299,    31,   302,   304,  -211,   279,   305,   305,  -211,   308,
     334,   310,   121,  -211,  -211,   121,   252,   309,  -211,  -211,
    -211,   314,  -211,  -211,  -211,   313,  -211,    90,  -211,  -211
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,     0,    32,    33,    34,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,     4,     2,     5,    13,     8,
       9,    22,     0,    10,    11,    12,    22,    22,    22,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,     6,
      88,     0,    30,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    16,    22,    17,
      18,     0,    31,    19,    20,    21,    89,    90,     0,    85,
      87,    15,     0,   125,    30,    30,    29,     0,    28,     0,
      45,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   112,     0,   105,     0,   106,     0,     0,     0,
       0,    38,    35,    37,    88,     0,     0,   123,   127,     0,
      25,    26,    24,   101,    40,    41,     0,    39,    51,     0,
       0,     0,   117,   118,   119,     0,   108,   109,   110,     0,
       0,     0,     0,     0,    36,    86,     0,     0,     0,     0,
     124,     0,     0,   101,   114,   115,   116,   111,   107,     0,
      58,   102,     0,    72,    73,     0,   127,     0,   120,    45,
      48,    49,    50,    45,     0,     0,     0,     0,     0,    53,
      54,     0,    55,    56,    57,     0,     0,     0,    73,    77,
      73,    82,    79,     0,    80,    83,     0,    81,    30,   126,
       0,     0,     0,    44,    42,     0,    46,    45,   104,     0,
       0,    59,     0,    22,   103,    88,     0,     0,    76,    78,
       0,     0,    27,     0,   128,     0,   122,     0,    43,    66,
       0,    65,    60,     0,    62,     0,     0,    52,     0,     0,
       0,     0,    74,   141,     0,     0,     0,     0,    61,    64,
       0,     0,     0,     0,   145,     0,     0,     0,     0,   132,
     129,   121,    47,    63,    69,    58,   143,   144,     0,    73,
       0,     0,     0,     0,   131,     0,     0,     0,    68,     0,
       0,     0,     0,   137,   138,     0,    73,     0,    70,    71,
      67,     0,   135,   139,   140,     0,   130,     0,   134,   142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -211,  -211,  -211,  -211,     1,    -1,   337,   -70,   -53,   -49,
     236,  -211,  -211,   -81,   100,  -146,  -211,  -211,    83,   135,
    -211,  -210,    98,  -152,  -143,  -211,  -159,  -211,  -172,   137,
     242,   -40,  -120,  -211,  -211,  -211,   210,   270,  -112,  -211,
    -211,  -149,  -211,  -211,  -211,  -211,  -211,   291,  -211,   193,
     109,  -211,  -211,  -211,  -211,  -211,  -211,    58,  -211
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    26,    27,    67,    68,    86,    87,    31,    32,
      72,   112,    33,    93,   173,   231,    34,    35,   181,   182,
     211,   232,   233,   191,   236,   278,    36,    37,   193,    78,
      79,    80,    38,    39,    40,    41,   105,   106,   139,    42,
     103,    43,    44,    45,    46,    47,    48,    88,   119,   150,
     225,   202,   275,   195,   196,   258,   241,   268,   197
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    94,    28,   152,    92,   192,   149,   174,   183,   124,
     125,   184,   229,    49,   120,   121,   218,    76,   219,   205,
     248,    89,   104,     5,     6,     7,   229,   206,   209,   192,
      69,   192,    70,   175,   283,   210,   101,    73,    74,    75,
     263,    92,    92,   117,   194,     5,     6,     7,    50,   249,
      82,    85,    91,   230,   149,   250,    52,   170,   171,   172,
     102,    10,    77,   148,    24,    90,   147,    51,   194,    69,
     194,   170,   171,   172,     5,     6,     7,    53,   146,   170,
     171,   172,    83,    85,    85,   167,   168,   114,   203,    91,
      91,   115,   204,    24,    84,   266,   267,   281,   177,   158,
     104,   174,   270,   178,   200,   271,   272,    54,   201,   166,
     192,   190,    13,   183,   295,   215,   184,   114,    55,   216,
      92,   253,   276,   277,    92,   284,   228,   192,   222,    56,
     136,   137,   138,   288,   289,   190,   293,   190,   110,   294,
      57,    24,   179,    83,    58,    59,   111,    60,    61,   194,
      13,    14,    15,    16,    17,    18,    19,    20,    92,   180,
      62,    22,    23,   189,    63,    64,   194,    65,    91,   170,
     171,   172,    91,    13,    14,    15,    16,    17,    18,    19,
      20,   170,   171,   172,    22,    23,    71,   189,    81,   189,
      95,    96,    97,    98,    99,   100,   107,    85,   108,   109,
     116,   123,   122,   126,   127,   128,    91,   151,   129,   130,
     131,   140,   135,   141,   237,   132,   190,   133,   134,   142,
       2,     3,   143,     4,   154,     5,     6,     7,   153,   160,
       8,     9,   155,   190,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   156,   157,    22,    23,
     161,   162,   163,   164,   169,   186,   165,     5,     6,     7,
     178,   176,  -133,   187,   180,   185,    24,    25,   189,    13,
      14,    15,    16,    17,    18,    19,    20,   198,   207,   208,
      22,    23,   212,   213,   214,   189,     4,   217,     5,     6,
       7,   220,   221,   223,   226,   224,   227,   234,    24,   188,
      13,    14,    15,    16,    17,    18,    19,    20,   235,   177,
     240,    22,    23,   242,   243,   244,   245,   246,   251,   255,
     257,   247,   252,   265,   256,   254,   259,   287,   269,    24,
      66,   280,   261,   146,   273,   286,   282,   291,    30,   285,
     290,   274,   292,   296,   297,   298,   144,   262,   279,   264,
     159,   239,   238,   118,   260,   299,   145,     0,     0,   199,
       0,     0,   113
};

static const yytype_int16 yycheck[] =
{
       1,    54,     1,   123,    53,   164,   118,   153,   160,    90,
      91,   160,     3,    47,    84,    85,   188,     3,   190,    30,
     230,     3,    62,     5,     6,     7,     3,    38,    37,   188,
      29,   190,    31,   153,     3,    44,    24,    36,    37,    38,
     250,    90,    91,    83,   164,     5,     6,     7,    33,    38,
       3,    52,    53,    44,   166,    44,    31,    48,    49,    50,
      48,    14,    48,   116,    46,    47,   115,    33,   188,    68,
     190,    48,    49,    50,     5,     6,     7,    31,    38,    48,
      49,    50,    35,    84,    85,    37,    38,    30,   169,    90,
      91,    34,   173,    46,    47,     5,     6,   269,     3,   139,
     140,   247,    37,     8,    27,    40,    41,    31,    31,   149,
     269,   164,    17,   265,   286,    33,   265,    30,    33,    37,
     169,    34,    12,    13,   173,   271,   207,   286,   198,    33,
      42,    43,    44,   276,   277,   188,   282,   190,    30,   285,
      33,    46,    47,    35,    33,    33,    38,    33,    33,   269,
      17,    18,    19,    20,    21,    22,    23,    24,   207,   160,
      33,    28,    29,   164,    33,    33,   286,    33,   169,    48,
      49,    50,   173,    17,    18,    19,    20,    21,    22,    23,
      24,    48,    49,    50,    28,    29,     3,   188,    34,   190,
       3,     3,     3,    34,    34,    34,    34,   198,     3,     3,
      31,    37,    32,     3,    32,    32,   207,    36,    34,    34,
      34,    30,    34,     7,   213,    38,   269,    38,    38,    34,
       0,     1,    30,     3,    38,     5,     6,     7,    37,    31,
      10,    11,    38,   286,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    38,    38,    28,    29,
      38,    48,    47,    31,    38,     3,    32,     5,     6,     7,
       8,    34,    10,    11,   265,    34,    46,    47,   269,    17,
      18,    19,    20,    21,    22,    23,    24,    38,    38,    38,
      28,    29,    33,    32,    38,   286,     3,    33,     5,     6,
       7,    32,    10,    33,    38,    48,     3,    44,    46,    47,
      17,    18,    19,    20,    21,    22,    23,    24,     3,     3,
       3,    28,    29,    47,    33,    48,    30,    32,    40,    30,
       3,    37,    34,    31,    34,    38,    30,    48,    31,    46,
      47,    30,    38,    38,    34,    31,    37,     3,     1,    37,
      32,    43,    32,    34,    30,    32,   110,   247,   265,   251,
     140,   216,   215,    83,   245,   297,   114,    -1,    -1,   166,
      -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    53,     0,     1,     3,     5,     6,     7,    10,    11,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    28,    29,    46,    47,    54,    55,    56,    57,
      58,    60,    61,    64,    68,    69,    78,    79,    84,    85,
      86,    87,    91,    93,    94,    95,    96,    97,    98,    47,
      33,    33,    31,    31,    31,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    47,    56,    57,    56,
      56,     3,    62,    56,    56,    56,     3,    48,    81,    82,
      83,    34,     3,    35,    47,    57,    58,    59,    99,     3,
      47,    57,    61,    65,    60,     3,     3,     3,    34,    34,
      34,    24,    48,    92,    83,    88,    89,    34,     3,     3,
      30,    38,    63,    99,    30,    34,    31,    83,    89,   100,
      59,    59,    32,    37,    65,    65,     3,    32,    32,    34,
      34,    34,    38,    38,    38,    34,    42,    43,    44,    90,
      30,     7,    34,    30,    62,    82,    38,    61,    60,    90,
     101,    36,    84,    37,    38,    38,    38,    38,    83,    88,
      31,    38,    48,    47,    31,    32,    83,    37,    38,    38,
      48,    49,    50,    66,    67,    84,    34,     3,     8,    47,
      57,    70,    71,    75,    93,    34,     3,    11,    47,    57,
      60,    75,    78,    80,    84,   105,   106,   110,    38,   101,
      27,    31,   103,    65,    65,    30,    38,    38,    38,    37,
      44,    72,    33,    32,    38,    33,    37,    33,    80,    80,
      32,    10,    59,    33,    48,   102,    38,     3,    65,     3,
      44,    67,    73,    74,    44,     3,    76,    56,    81,    71,
       3,   108,    47,    33,    48,    30,    32,    37,    73,    38,
      44,    40,    34,    34,    38,    30,    34,     3,   107,    30,
     102,    38,    66,    73,    74,    31,     5,     6,   109,    31,
      37,    40,    41,    34,    43,   104,    12,    13,    77,    70,
      30,    80,    37,     3,    67,    37,    31,    48,    76,    76,
      32,     3,    32,    67,    67,    80,    34,    30,    32,   109
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    54,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    56,    56,
      56,    56,    56,    57,    58,    59,    59,    59,    59,    59,
      59,    60,    61,    61,    61,    62,    63,    63,    63,    64,
      65,    65,    65,    65,    65,    65,    66,    66,    67,    67,
      67,    68,    69,    70,    70,    70,    70,    70,    70,    71,
      72,    72,    72,    73,    73,    74,    74,    75,    76,    76,
      77,    77,    78,    78,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    85,    86,    87,    88,    88,    89,    90,    90,
      90,    91,    92,    92,    93,    94,    95,    96,    97,    98,
      99,    99,    99,   100,   100,   100,   101,   101,   102,   102,
     103,   104,   104,   106,   105,   105,   105,   107,   107,   107,
     107,   107,   108,   109,   109,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     2,     2,
       2,     2,     0,     1,     4,     2,     2,     6,     1,     1,
       0,     2,     1,     1,     1,     2,     2,     1,     1,     4,
       2,     2,     5,     6,     5,     0,     2,     5,     1,     1,
       1,     4,     8,     1,     1,     1,     1,     1,     0,     2,
       2,     3,     2,     3,     2,     1,     1,     7,     4,     3,
       2,     2,     6,     0,     9,     0,     2,     1,     2,     1,
       1,     1,     1,     1,     0,     1,     3,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     7,     7,     1,     1,     3,     1,     1,
       1,     5,     1,     1,     5,     5,     5,     4,     4,     4,
       4,     8,     6,     1,     2,     0,     3,     0,     1,     3,
       7,     1,     0,     0,     8,     7,     0,     3,     3,     4,
       4,     0,     7,     1,     1,     4
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
#line 137 "sintax.y"
                       { yyerrok; }
#line 1691 "sintax.c"
    break;

  case 9:
#line 144 "sintax.y"
                {printf("Structs encontrado\n");}
#line 1697 "sintax.c"
    break;

  case 10:
#line 145 "sintax.y"
                  {printf("Constante encontrado\n");}
#line 1703 "sintax.c"
    break;

  case 11:
#line 146 "sintax.y"
               {printf("Global encontrado\n");}
#line 1709 "sintax.c"
    break;

  case 12:
#line 147 "sintax.y"
              {printf("Main encontrado\n");}
#line 1715 "sintax.c"
    break;

  case 14:
#line 150 "sintax.y"
                 {printf("bla na PRIMEIRA CAMADAA WHILE bla bla \n");}
#line 1721 "sintax.c"
    break;

  case 15:
#line 151 "sintax.y"
                                    {printf("Ciclo For encontrados\n");}
#line 1727 "sintax.c"
    break;

  case 23:
#line 165 "sintax.y"
                   {printf("Comentario encontrado\n");}
#line 1733 "sintax.c"
    break;

  case 29:
#line 177 "sintax.y"
                 {printf("Estruturas dentro de estruturas encontrado\n");}
#line 1739 "sintax.c"
    break;

  case 35:
#line 194 "sintax.y"
                                  {(yyval.tipoint) = encontra_var((yyvsp[-1].nome_var),1);}
#line 1745 "sintax.c"
    break;

  case 67:
#line 266 "sintax.y"
                                                                                   {printf("condicional Se encontrado\n");}
#line 1751 "sintax.c"
    break;

  case 72:
#line 288 "sintax.y"
                                                             {printf("Chama funcao encontrada\n");}
#line 1757 "sintax.c"
    break;

  case 74:
#line 293 "sintax.y"
                                                                                                   {printf("Declara funcao encontrada\n");}
#line 1763 "sintax.c"
    break;

  case 102:
#line 339 "sintax.y"
                                             {printf("Metodo SIZE encontrado\n");}
#line 1769 "sintax.c"
    break;

  case 103:
#line 343 "sintax.y"
                                                               {printf("Metodo RESIZE encontrado\n");}
#line 1775 "sintax.c"
    break;

  case 104:
#line 347 "sintax.y"
                                                                                     {printf("Metodo EXPOENTE encontrado\n");}
#line 1781 "sintax.c"
    break;

  case 107:
#line 356 "sintax.y"
                                                     {printf("Calculos encontrados\n");}
#line 1787 "sintax.c"
    break;

  case 111:
#line 366 "sintax.y"
                                                     {printf("Metodo RAIZ encontrado\n");}
#line 1793 "sintax.c"
    break;

  case 114:
#line 375 "sintax.y"
                                                {printf("Metodo write encontrado\n");}
#line 1799 "sintax.c"
    break;

  case 115:
#line 379 "sintax.y"
                                                    {printf("Metodo write_all encontrado\n");}
#line 1805 "sintax.c"
    break;

  case 116:
#line 383 "sintax.y"
                                                      {printf("Metodo write_string encontrado\n");}
#line 1811 "sintax.c"
    break;

  case 117:
#line 387 "sintax.y"
                                     {printf("Metodo read encontrado\n");}
#line 1817 "sintax.c"
    break;

  case 118:
#line 391 "sintax.y"
                                         {printf("Metodo read_all encontrado\n");}
#line 1823 "sintax.c"
    break;

  case 119:
#line 395 "sintax.y"
                                           {printf("Metodo read_string encontrado\n");}
#line 1829 "sintax.c"
    break;

  case 120:
#line 399 "sintax.y"
                                                                {printf("Vetor encontrado\n");}
#line 1835 "sintax.c"
    break;

  case 121:
#line 400 "sintax.y"
                                                                                        {printf("Vetor encontrado\n");}
#line 1841 "sintax.c"
    break;

  case 122:
#line 401 "sintax.y"
                                                                {printf("Vetor encontrado\n");}
#line 1847 "sintax.c"
    break;

  case 123:
#line 405 "sintax.y"
                                {printf("Vetor com variavel encontrado\n");}
#line 1853 "sintax.c"
    break;

  case 124:
#line 406 "sintax.y"
                                   {printf("Vetor com calculo encontrado\n");}
#line 1859 "sintax.c"
    break;

  case 125:
#line 407 "sintax.y"
                                {printf("Vetor vazio encontrado\n");}
#line 1865 "sintax.c"
    break;

  case 130:
#line 421 "sintax.y"
                                                                     {printf("Gerador encontrado\n");}
#line 1871 "sintax.c"
    break;

  case 133:
#line 430 "sintax.y"
         {printf("Ciclo While encontrados\n");}
#line 1877 "sintax.c"
    break;

  case 134:
#line 431 "sintax.y"
                                                                                                    {printf("Ciclo While encontrados\n");}
#line 1883 "sintax.c"
    break;

  case 135:
#line 432 "sintax.y"
                                                                                                {printf("Ciclo For encontrados\n");}
#line 1889 "sintax.c"
    break;

  case 137:
#line 437 "sintax.y"
                                 {printf("Comparacao entre variavaies encontrado");}
#line 1895 "sintax.c"
    break;

  case 138:
#line 438 "sintax.y"
                                                                 {printf("Comparacao entre variavel e valor encontrado");}
#line 1901 "sintax.c"
    break;

  case 139:
#line 439 "sintax.y"
                                                                             {printf("Comparacao igualdade exata encontrado");}
#line 1907 "sintax.c"
    break;

  case 140:
#line 440 "sintax.y"
                                                                     {printf("Comparacao entre diferenca de valor encontrado");}
#line 1913 "sintax.c"
    break;

  case 145:
#line 457 "sintax.y"
                                 {(yyval.tipoint) = le_var((yyvsp[-3].nome_var));}
#line 1919 "sintax.c"
    break;


#line 1923 "sintax.c"

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
#line 484 "sintax.y"



/* Funcao main para leitura do ficheiro a compilar*/
int main(int argc, char** argv) {
	if (argc<2) {
		bashInfo(argv[0]);
    } else if (argc < 2 && argv[1]=="-d") {
		debug=1;
		yyin= fopen(argv[2],"r");
    } else {
		yyin = fopen(argv[1], "r");
    }

	if (NULL != yyin) {

		yyparse();
		fclose(yyin);
		if (count_error == 0) {
			printf("\nPrograma sem erros.\n\n");
		}
		else if(count_error == 1){
			printf("\nExiste %d erro no ficheiro. \n\n", count_error);
		} else {
			printf("\nExistem %d erros no ficheiro. \n\n", count_error);
		}
	}
	else {
		printf("\n Impossivel abrir o ficheiro: %s", argv[1]);
        bashInfo(argv[0]);
	}
}

/* Contangem de erros encontrados, com ativação yylineno seria possivel colocar em que se encontrou o erro */
void yyerror(char *s) {
	count_error++;
	fprintf(stderr,"%s\n",s); /* output para debug */
}

/* funcao para leitura de variaveis, permite verificar se variavel já foi declarada */
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
    printf("funcionamento: %s [ -d <ficheiro> | <ficheiro> ]\n", argumento);
    printf("\t-d\t\tLigar debug. Ouput de instruções válidas lidas.\n");
    printf("\t<ficheiro>\tFicheiro em linguagem YAIL\n");
}

/* funcao para apresentar debug */
/*void apresenta_debug(char* str){
	if(debug==1) {
		printf("%s",str);
	}
}*/
