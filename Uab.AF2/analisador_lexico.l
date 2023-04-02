%{
#include <iostream>
using namespace std;
%}

%option noyywrap

%%

// Ignora espaços em branco
[ \t\n\r] ;

// Tipos de variáveis
int|float|double|char|string { cout << "TYPE\n"; }

// Identificadores
[a-zA-Z_][a-zA-Z0-9_]* { cout << "ID\n"; }
ss
// Símbolo de atribuição
= { cout << "ATRIB\n"; }

// Valores
[0-9]+ { cout << "VALUE\n"; }

"\""([^"\\]|\\.)*"\"" { cout << "VALUE\n"; }


// Delimitador da expressão
; { cout << "DELIM\n"; }

%%

int main() {
    yylex();
    return 0;
}