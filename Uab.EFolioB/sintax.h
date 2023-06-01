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
    OU = 266,                      /* OU  */
    E = 267,                       /* E  */
    NOT = 268,                     /* NOT  */
    ESTRUTURA = 269,               /* ESTRUTURA  */
    CONST = 270,                   /* CONST  */
    MAIN = 271,                    /* MAIN  */
    LOCAL = 272,                   /* LOCAL  */
    GLOBAL = 273,                  /* GLOBAL  */
    ESCREVE = 274,                 /* ESCREVE  */
    ESCREVETUDO = 275,             /* ESCREVETUDO  */
    ESCREVESTRING = 276,           /* ESCREVESTRING  */
    LE = 277,                      /* LE  */
    LETUDO = 278,                  /* LETUDO  */
    LESTRING = 279,                /* LESTRING  */
    EXPOENTE = 280,                /* EXPOENTE  */
    RAIZ = 281,                    /* RAIZ  */
    SIZE = 282,                    /* SIZE  */
    GEN = 283,                     /* GEN  */
    RESIZE = 284,                  /* RESIZE  */
    VIRGULA = 285,                 /* VIRGULA  */
    ABRECHAVETA = 286,             /* ABRECHAVETA  */
    FECHACHAVETA = 287,            /* FECHACHAVETA  */
    ABREPARENT = 288,              /* ABREPARENT  */
    FECHAPARENT = 289,             /* FECHAPARENT  */
    ABREVETOR = 290,               /* ABREVETOR  */
    FECHAVETOR = 291,              /* FECHAVETOR  */
    IGUAL = 292,                   /* IGUAL  */
    PV = 293,                      /* PV  */
    PF = 294,                      /* PF  */
    ASPAS = 295,                   /* ASPAS  */
    EXCLAMACAO = 296,              /* EXCLAMACAO  */
    COMPARATIVOS = 297,            /* COMPARATIVOS  */
    COMENTARIO = 298,              /* COMENTARIO  */
    PARAGRAFO = 299,               /* PARAGRAFO  */
    INTEIRO = 300,                 /* INTEIRO  */
    REAL = 301,                    /* REAL  */
    BOOLEANO = 302,                /* BOOLEANO  */
    MAIS = 303,                    /* MAIS  */
    MENOS = 304,                   /* MENOS  */
    MULTIPLICA = 305,              /* MULTIPLICA  */
    DIVIDE = 306,                  /* DIVIDE  */
    MODULO = 307,                  /* MODULO  */
    empty = 308                    /* empty  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 63 "sintax.y"

        char nome_var[33];
        int tipoint;
     

#line 123 "sintax.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTAX_H_INCLUDED  */
