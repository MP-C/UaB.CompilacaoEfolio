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
    ESPACO = 294,
    OCONDICIONAL = 295,
    MAIS = 296,
    MENOS = 297,
    OPERADOR = 298,
    TEXTOWRITE = 299,
    COMENTARIO = 300,
    PARAGRAFO = 301,
    INTEIRO = 302,
    REAL = 303,
    BOOLEANO = 304,
    SINAL = 305
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
#define ESPACO 294
#define OCONDICIONAL 295
#define MAIS 296
#define MENOS 297
#define OPERADOR 298
#define TEXTOWRITE 299
#define COMENTARIO 300
#define PARAGRAFO 301
#define INTEIRO 302
#define REAL 303
#define BOOLEANO 304
#define SINAL 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 46 "sintax.y"

        char nome_var[33];
        int tipoint;
     

#line 163 "sintax.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTAX_H_INCLUDED  */
