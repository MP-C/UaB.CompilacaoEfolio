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
     

#line 173 "sintax.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTAX_H_INCLUDED  */
