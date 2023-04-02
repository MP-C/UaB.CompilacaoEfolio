%{
#include <iostream>
using namespace std;
%}

%%

int|float|double|char|string     { cout << "TYPE" << endl; }
[a-zA-Z_][a-zA-Z0-9_]*          { cout << "ID" << endl; }
=                               { cout << "ATRIB" << endl; }
[-]?[0-9]+(\.[0-9]+)?           { cout << "VALUE" << endl; }
;                               { cout << "DELIM" << endl; }
[ \t\n]+                        { /* ignore whitespace */ }

%%

int main() {
    yylex();
    return 0;
}




