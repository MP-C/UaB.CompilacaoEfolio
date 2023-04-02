#include <iostream>
#include <string>
#include <sstream>

using namespace std;

enum TokenType { TYPE, ID, ATRIB, VALUE, DELIM, WS };

string tokenNames[] = { "TYPE", "ID", "ATRIB", "VALUE", "DELIM", "WS" };

//#region Funções Tipos de Token

bool isID(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

bool isAttribute(char ch) {
    return ch == '=';
}

bool isValue(char ch) {
    return ch >= '0' && ch <= '9';
}

bool isDelimiter(char ch) {
    return ch == ';';
}

bool isWhiteSpace(char ch) {
    return ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r';
}

//#endregion

//Implementação do analisador léxico
void lexicalAnalysis(string input) {
    stringstream ss(input);
    char ch;
    int line = 1, column = 1;

    //TODO::temos que criar uma forma de guardar o ultimo token (lastToken), pois sabemos que em programação existe uma sequencia
    // portanto, vamos fazer essa verificacao, depois de encontrar o tipo atual
    // int(id) ' '(ws) x(id)
    TokenType lastToken;

    // percorrer caracter a caracter da string dada
    while (ss >> noskipws >> ch) {
        TokenType tokenType;
        string tokenValue = "";

        if (isWhiteSpace(ch)) { // verificar se é um espaço vazio
            tokenType = WS;
            if (ch == '\n') {
                line++;
                column = 1;
            } else {
                column++;
            }
        } else if (isAttribute(ch)) { // verificar se é um atributo
            tokenType = ATRIB;
            tokenValue = "=";
            column++;
        } else if (isDelimiter(ch)) { // verificar se é um limitador de palavras
            tokenType = DELIM;
            tokenValue = ";";
            column++;
        } else if (isValue(ch)) { // verificar se é um valor
            tokenType = VALUE;
            while (ch >= '0' && ch <= '9') { // verificar se é um número
                tokenValue += ch;
                ss >> ch;
                column++;
            }
            ss.putback(ch);
            column--;
        } else if (isID(ch)) { // verificar se é um ID
            tokenType = ID;
            tokenValue += ch;
            ss >> ch;
            column++;
            while ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
                tokenValue += ch;
                ss >> ch;
                column++;
            }
            ss.putback(ch);
            column--;
        } else {
            tokenType = TYPE;
            tokenValue += ch;
            ss >> ch;
            column++;
            while ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
                tokenValue += ch;
                ss >> ch;
                column++;
            }
            ss.putback(ch);
            column--;
        }

        cout << "Token encontrado: " << tokenNames[tokenType] << " (valor: '" << tokenValue << "', linha: " << line << ", coluna: " << column << ")" << endl;
    }
}

int main() {
    string input = "string x = 20;\r;\nint \tz = 0;";
    lexicalAnalysis(input);
    return 0;
}