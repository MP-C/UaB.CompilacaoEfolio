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
    IDENTFUNC = 259,
    INT = 260,
    FLOAT = 261,
    BOOL = 262,
    SE = 263,
    SENAO = 264,
    ENQUANTO = 265,
    PARA = 266,
    ESTRUCT = 267,
    CONST = 268,
    GLOBAL = 269,
    ESCREVE = 270,
    ESCREVETUDO = 271,
    ESCREVESTRING = 272,
    LE = 273,
    LETUDO = 274,
    LESTRING = 275,
    RAIZ = 276,
    EXPOENTE = 277,
    MAIN = 278,
    LOCAL = 279,
    GEN = 280,
    SIZE = 281,
    RESIZE = 282,
    VIRGULA = 283,
    ABRECHAVETA = 284,
    FECHACHAVETA = 285,
    ABREPARENT = 286,
    FECHAPARENT = 287,
    ABREVETOR = 288,
    FECHAVETOR = 289,
    IGUAL = 290,
    PV = 291,
    ESPACO = 292,
    OCONDICIONAL = 293,
    MAIS = 294,
    MENOS = 295,
    OPERADOR = 296,
    TEXTOWRITE = 297,
    COMENTARIO = 298,
    PARAGRAFO = 299,
    INTEIRO = 300,
    REAL = 301,
    BOOLEANO = 302,
    SINAL = 303
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
#define ESTRUCT 267
#define CONST 268
#define GLOBAL 269
#define ESCREVE 270
#define ESCREVETUDO 271
#define ESCREVESTRING 272
#define LE 273
#define LETUDO 274
#define LESTRING 275
#define RAIZ 276
#define EXPOENTE 277
#define MAIN 278
#define LOCAL 279
#define GEN 280
#define SIZE 281
#define RESIZE 282
#define VIRGULA 283
#define ABRECHAVETA 284
#define FECHACHAVETA 285
#define ABREPARENT 286
#define FECHAPARENT 287
#define ABREVETOR 288
#define FECHAVETOR 289
#define IGUAL 290
#define PV 291
#define ESPACO 292
#define OCONDICIONAL 293
#define MAIS 294
#define MENOS 295
#define OPERADOR 296
#define TEXTOWRITE 297
#define COMENTARIO 298
#define PARAGRAFO 299
#define INTEIRO 300
#define REAL 301
#define BOOLEANO 302
#define SINAL 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 56 "sintax.y"

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
