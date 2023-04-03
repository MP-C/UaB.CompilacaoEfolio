#include "analisador_lexico.h"

/*
 * Isto serve para gerar o analisador flex
 *
 * flex -o analisador_lexico.cpp analisador_lexico.l
 * g++ analisador_lexico.cpp -o analisador_lexico
 * ./analisador_lexico
 */

int main() {
    YYSTYPE yylval;
        int token = yylex();
        switch (token) {
            case TYPE:
                cout << "Tipo de dado" << endl;
                break;
            case ID:
                cout << "Identificador" << endl;
                break;
            case ATRIB:
                cout << "Atribuição" << endl;
                break;
            case VALUE:
                cout << "Valor" << endl;
                break;
            case DELIM:
                cout << "Delimitador" << endl;
                break;
            default:
                cout << "Token desconhecido" << endl;
                break;
        }
        return token;

}