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

#ifndef YY_YY_SINTATICO_H_INCLUDED
# define YY_YY_SINTATICO_H_INCLUDED
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
    ESTRUCT = 266,
    CONST = 267,
    GLOBAL = 268,
    ESCREVE = 269,
    ESCREVETUDO = 270,
    ESCREVESTRING = 271,
    LE = 272,
    LETUDO = 273,
    LESTRING = 274,
    EXPOENTE = 275,
    RAIZ = 276,
    MAIN = 277,
    VIRGULA = 278,
    ABRECHAVETA = 279,
    FECHACHAVETA = 280,
    ABREPARENT = 281,
    FECHAPARENT = 282,
    IGUAL = 283,
    PV = 284,
    OCONDICIONAL = 285,
    MAIS = 286,
    MENOS = 287,
    OPERADOR = 288,
    COMENTARIO = 289,
    PARAGRAFO = 290,
    INTEIRO = 291,
    REAL = 292,
    BOOLEANO = 293,
    SINAL = 294
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
#define VIRGULA 278
#define ABRECHAVETA 279
#define FECHACHAVETA 280
#define ABREPARENT 281
#define FECHAPARENT 282
#define IGUAL 283
#define PV 284
#define OCONDICIONAL 285
#define MAIS 286
#define MENOS 287
#define OPERADOR 288
#define COMENTARIO 289
#define PARAGRAFO 290
#define INTEIRO 291
#define REAL 292
#define BOOLEANO 293
#define SINAL 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 43 "sintax.y"

        char nome_var[33];
        int tipoint;
     

#line 141 "sintatico.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_H_INCLUDED  */
