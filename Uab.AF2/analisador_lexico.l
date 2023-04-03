%{
#include <iostream>
using namespace std;

int linha_atual = 1;
int coluna_atual = 1;
%}

%option noyywrap

%%

int|float|double|char|string     { cout << "Token encontrado: TYPE (valor: '" << yytext << "', linha: " << linha_atual << ", coluna: " << coluna_atual << ") " << endl; }
[a-zA-Z_][a-zA-Z0-9_]*           { cout << "Token encontrado: ID (valor: '" << yytext << "', linha: " << linha_atual << ", coluna: " << coluna_atual << ") " << endl; }
=                                { cout << "Token encontrado: ATRIB (valor: '" << yytext << "', linha: " << linha_atual << ", coluna: " << coluna_atual << ") " << endl; }
[-]?[0-9]+(\.[0-9]+)?            { cout << "Token encontrado: VALUE (valor: '" << yytext << "', linha: " << linha_atual << ", coluna: " << coluna_atual << ") " << endl; }
;                                { cout << "Token encontrado: DELIM (valor: '" << yytext << "', linha: " << linha_atual << ", coluna: " << coluna_atual << ") " << endl; }
[ \t]                            { coluna_atual++; }
\n                               { linha_atual++; coluna_atual = 1; }
.                                { coluna_atual++; }

%%

int main() {
    yylex();
    return 0;
}