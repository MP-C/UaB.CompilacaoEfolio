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

#ifndef YY_YY_SINTAXG_H_INCLUDED
# define YY_YY_SINTAXG_H_INCLUDED
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
    INTEIRO = 259,
    DECIMAL = 260,
    BOOLEANO = 261,
    INT = 262,
    FLOAT = 263,
    BOOL = 264,
    PARAGRAFO = 265,
    ABRECHAVETA = 266,
    FECHACHAVETA = 267,
    PV = 268,
    IGUAL = 269,
    CONST = 270,
    VIRGULA = 271,
    PF = 272,
    ESCREVE = 273,
    ESCREVETUDO = 274,
    ESCREVESTRING = 275,
    LE = 276,
    LETUDO = 277,
    LESTRING = 278,
    MAIS = 279,
    MENOS = 280,
    MULTIPLICA = 281,
    DIVIDE = 282,
    MODULO = 283,
    COMENTARIO = 284
  };
#endif
/* Tokens.  */
#define IDENT 258
#define INTEIRO 259
#define DECIMAL 260
#define BOOLEANO 261
#define INT 262
#define FLOAT 263
#define BOOL 264
#define PARAGRAFO 265
#define ABRECHAVETA 266
#define FECHACHAVETA 267
#define PV 268
#define IGUAL 269
#define CONST 270
#define VIRGULA 271
#define PF 272
#define ESCREVE 273
#define ESCREVETUDO 274
#define ESCREVESTRING 275
#define LE 276
#define LETUDO 277
#define LESTRING 278
#define MAIS 279
#define MENOS 280
#define MULTIPLICA 281
#define DIVIDE 282
#define MODULO 283
#define COMENTARIO 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 174 "sintaxG.y"

        char nome_var[33];
        int tipoint;
        struct valorTipo valTip;
     

#line 122 "sintaxG.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTAXG_H_INCLUDED  */
