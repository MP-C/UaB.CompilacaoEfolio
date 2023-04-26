/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SINTAX_H_INCLUDED
# define YY_YY_SINTAX_H_INCLUDED
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
    IDENT = 258,                   /* IDENT  */
    INT = 259,                     /* INT  */
    FLOAT = 260,                   /* FLOAT  */
    BOOL = 261,                    /* BOOL  */
    SE = 262,                      /* SE  */
    SENAO = 263,                   /* SENAO  */
    ENQUANTO = 264,                /* ENQUANTO  */
    PARA = 265,                    /* PARA  */
    ESTRUCT = 266,                 /* ESTRUCT  */
    CONST = 267,                   /* CONST  */
    GLOBAL = 268,                  /* GLOBAL  */
    ESCREVE = 269,                 /* ESCREVE  */
    ESCREVETUDO = 270,             /* ESCREVETUDO  */
    ESCREVESTRING = 271,           /* ESCREVESTRING  */
    LE = 272,                      /* LE  */
    LETUDO = 273,                  /* LETUDO  */
    LESTRING = 274,                /* LESTRING  */
    EXPOENTE = 275,                /* EXPOENTE  */
    RAIZ = 276,                    /* RAIZ  */
    MAIN = 277,                    /* MAIN  */
    LOCAL = 278,                   /* LOCAL  */
    VIRGULA = 279,                 /* VIRGULA  */
    ABRECHAVETA = 280,             /* ABRECHAVETA  */
    FECHACHAVETA = 281,            /* FECHACHAVETA  */
    ABREPARENT = 282,              /* ABREPARENT  */
    FECHAPARENT = 283,             /* FECHAPARENT  */
    ABREVETOR = 284,               /* ABREVETOR  */
    FECHAVETOR = 285,              /* FECHAVETOR  */
    IGUAL = 286,                   /* IGUAL  */
    PV = 287,                      /* PV  */
    ESPACO = 288,                  /* ESPACO  */
    OCONDICIONAL = 289,            /* OCONDICIONAL  */
    MAIS = 290,                    /* MAIS  */
    MENOS = 291,                   /* MENOS  */
    OPERADOR = 292,                /* OPERADOR  */
    COMENTARIO = 293,              /* COMENTARIO  */
    PARAGRAFO = 294,               /* PARAGRAFO  */
    INTEIRO = 295,                 /* INTEIRO  */
    REAL = 296,                    /* REAL  */
    BOOLEANO = 297,                /* BOOLEANO  */
    SINAL = 298                    /* SINAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENT 258
#define INT 259
#define FLOAT 260
#define BOOL 261
#define SE 262
#define SENAO 263
#define ENQUANTO 264
#define PARA 265
#define ESTRUCT 266
#define CONST 267
#define GLOBAL 268
#define ESCREVE 269
#define ESCREVETUDO 270
#define ESCREVESTRING 271
#define LE 272
#define LETUDO 273
#define LESTRING 274
#define EXPOENTE 275
#define RAIZ 276
#define MAIN 277
#define LOCAL 278
#define VIRGULA 279
#define ABRECHAVETA 280
#define FECHACHAVETA 281
#define ABREPARENT 282
#define FECHAPARENT 283
#define ABREVETOR 284
#define FECHAVETOR 285
#define IGUAL 286
#define PV 287
#define ESPACO 288
#define OCONDICIONAL 289
#define MAIS 290
#define MENOS 291
#define OPERADOR 292
#define COMENTARIO 293
#define PARAGRAFO 294
#define INTEIRO 295
#define REAL 296
#define BOOLEANO 297
#define SINAL 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 43 "sintax.y"

        char nome_var[33];
        int tipoint;
     

#line 159 "sintax.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTAX_H_INCLUDED  */
