#ifndef ANALISADOR_LEXICO_H
#define ANALISADOR_LEXICO_H

#include <iostream>
using namespace std;

// Define o tipo YYSTYPE
typedef union {
    int ival;
    float fval;
    double dval;
    char cval;
    string sval;
} YYSTYPE;

// Define a função yylex()
int yylex();

// Define a variável yylval
extern YYSTYPE yylval;

#endif /* ANALISADOR_LEXICO_H */
