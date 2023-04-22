/* A Bison parser, made by GNU Bison 3.8.2.  */

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

#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
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
    BOOL = 259,                    /* BOOL  */
    INT = 260,                     /* INT  */
    FLOAT = 261,                   /* FLOAT  */
    SE = 262,                      /* SE  */
    SENAO = 263,                   /* SENAO  */
    ENQUANTO = 264,                /* ENQUANTO  */
    PARA = 265,                    /* PARA  */
    ESTRUCT = 266,                 /* ESTRUCT  */
    CONSTANTE = 267,               /* CONSTANTE  */
    GLOBAL = 268,                  /* GLOBAL  */
    MAIN = 269,                    /* MAIN  */
    LOCAL = 270,                   /* LOCAL  */
    ESCREVE = 271,                 /* ESCREVE  */
    ESCREVETUDO = 272,             /* ESCREVETUDO  */
    ESCREVESTRING = 273,           /* ESCREVESTRING  */
    LE = 274,                      /* LE  */
    LETUDO = 275,                  /* LETUDO  */
    LESTRING = 276,                /* LESTRING  */
    EXPOENTE = 277,                /* EXPOENTE  */
    RAIZ = 278,                    /* RAIZ  */
    VIRGULA = 279,                 /* VIRGULA  */
    ABRECHAVETA = 280,             /* ABRECHAVETA  */
    FECHACHAVETA = 281,            /* FECHACHAVETA  */
    ABREPARENT = 282,              /* ABREPARENT  */
    FECHAPARENT = 283,             /* FECHAPARENT  */
    IGUAL = 284,                   /* IGUAL  */
    PONTOEVIRGULA = 285,           /* PONTOEVIRGULA  */
    CONDICIONAL = 286,             /* CONDICIONAL  */
    MAIS = 287,                    /* MAIS  */
    MENOS = 288,                   /* MENOS  */
    VEZES = 289,                   /* VEZES  */
    DIVIDE = 290,                  /* DIVIDE  */
    IMPOSSIVEL = 291,              /* IMPOSSIVEL  */
    ESPACO = 292,                  /* ESPACO  */
    FIM = 293,                     /* FIM  */
    COMENTARIO = 294,              /* COMENTARIO  */
    INTEIRO = 295,                 /* INTEIRO  */
    REAL = 296,                    /* REAL  */
    BOOLEANO = 297                 /* BOOLEANO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "sintatico.y"

    string nome_var;
    int tipoint;

#line 111 "sintatico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */
