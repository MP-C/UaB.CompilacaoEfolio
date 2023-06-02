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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INTEIRO = 260,
    FLOAT = 261,
    DECIMAL = 262,
    PARAGRAFO = 263,
    ABRECHAVETA = 264,
    FECHACHAVETA = 265,
    PV = 266,
    IGUAL = 267,
    CONST = 268,
    VIRGULA = 269,
    PF = 270,
    ESCREVE = 271,
    ESCREVETUDO = 272,
    ESCREVESTRING = 273,
    LE = 274,
    LETUDO = 275,
    LESTRING = 276,
    MAIS = 277,
    MENOS = 278,
    MULTIPLICA = 279,
    DIVIDE = 280,
    MODULO = 281
  };
#endif
/* Tokens.  */
#define IDENT 258
#define INT 259
#define INTEIRO 260
#define FLOAT 261
#define DECIMAL 262
#define PARAGRAFO 263
#define ABRECHAVETA 264
#define FECHACHAVETA 265
#define PV 266
#define IGUAL 267
#define CONST 268
#define VIRGULA 269
#define PF 270
#define ESCREVE 271
#define ESCREVETUDO 272
#define ESCREVESTRING 273
#define LE 274
#define LETUDO 275
#define LESTRING 276
#define MAIS 277
#define MENOS 278
#define MULTIPLICA 279
#define DIVIDE 280
#define MODULO 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 102 "sintaxOtimizado.y"

        char nome_var[33];
        int tipoint;
        struct valorTipo valTip;
     

#line 116 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
