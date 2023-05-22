/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
     

#line 174 "sintax.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTAX_H_INCLUDED  */
