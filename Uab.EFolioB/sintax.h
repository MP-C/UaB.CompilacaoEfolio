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
