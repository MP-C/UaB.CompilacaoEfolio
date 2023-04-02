//#include <iostream>
//#include <string>
//#include <sstream>
//
//using namespace std;
//
//enum Token {
//    TOK_IDENTIFICADOR,
//    TOK_NUMERO,
//    TOK_PARENTESES_ABRE,
//    TOK_PARENTESES_FECHA,
//    TOK_PONTO_VIRGULA,
//    TOK_FIM
//};
//
//enum Tipo {
//    TIPO_INTEIRO,
//    TIPO_FLOAT,
//    TIPO_BOOLEANO
//};
//
//struct TokenInfo {
//    Token token;
//    string lexema;
//    Tipo tipo;
//    union {
//        int i;
//        float f;
//        bool b;
//    } valor;
//};
//
//class AnalisadorLexico {
//public:
//    AnalisadorLexico(string entrada) : entrada(entrada), pos(0) {}
//
//    TokenInfo proximoToken() {
//        while (pos < entrada.length()) {
//            if (isdigit(entrada[pos])) {
//                return lerNumero();
//            } else if (isalpha(entrada[pos])) {
//                return lerIdentificador();
//            } else {
//                Token token;
//                switch (entrada[pos]) {
//                    case '(': token = TOK_PARENTESES_ABRE; break;
//                    case ')': token = TOK_PARENTESES_FECHA; break;
//                    case ';': token = TOK_PONTO_VIRGULA; break;
//                    default: throw "Erro lexico: simbolo desconhecido";
//                }
//                pos++;
//                return TokenInfo{token, "", TIPO_BOOLEANO, false};
//            }
//        }
//        return TokenInfo{TOK_FIM, "", TIPO_BOOLEANO, false};
//    }
//
//private:
//    TokenInfo lerNumero() {
//        stringstream ss;
//        ss << entrada[pos];
//        pos++;
//        while (pos < entrada.length() && isdigit(entrada[pos])) {
//            ss << entrada[pos];
//            pos++;
//        }
//        if (entrada[pos] == '.') {
//            ss << entrada[pos];
//            pos++;
//            while (pos < entrada.length() && isdigit(entrada[pos])) {
//                ss << entrada[pos];
//                pos++;
//            }
//            float f;
//            ss >> f;
//            return TokenInfo{TOK_NUMERO, ss.str(), TIPO_FLOAT, static_cast<int>(f)};
//        } else {
//            int i;
//            ss >> i;
//            return TokenInfo{TOK_NUMERO, ss.str(), TIPO_INTEIRO, i};
//        }
//    }
//
//    TokenInfo lerIdentificador() {
//        stringstream ss;
//        ss << entrada[pos];
//        pos++;
//        while (pos < entrada.length() && (isalnum(entrada[pos]) || entrada[pos] == '_')) {
//            ss << entrada[pos];
//            pos++;
//        }
//        string identificador = ss.str();
//        Tipo tipo = identificador[0] == 'i' ? TIPO_INTEIRO : identificador[0] == 'f' ? TIPO_FLOAT : TIPO_BOOLEANO;
//        return TokenInfo{TOK_IDENTIFICADOR, identificador, tipo, false};
//    }
//
//    string entrada;
//    int pos;
//};
//
//int main() {
////    AnalisadorLexico analisador("i42;(f3);14;btrue;i3");
//    AnalisadorLexico analisador("(");
//    TokenInfo token;
//    do {
//        token = analisador.proximoToken();
//        switch (token.token) {
//            case TOK_IDENTIFICADOR:
//                cout << "Identificador: " << token.lexema << " (tipo: " << token.tipo << ")" << endl;
//                break;
//            case TOK_NUMERO:
//                if (token.tipo == TIPO_INTEIRO) {
//                    cout << "Numero inteiro: " << token.valor.i << endl;
//                } else if (token.tipo == TIPO_FLOAT) {
//                    cout << "Numero float: " << token.valor.f << endl;
//                }
//                break;
//            case TOK_PONTO_VIRGULA:
//                cout << "Ponto e vírgula" << endl;
//                break;
//            case TOK_PARENTESES_ABRE:
//                cout << "Parenteses Abre" << endl;
//                break;
//            case TOK_PARENTESES_FECHA:
//                cout << "Parentese Fecha" << endl;
//                break;
//            case TIPO_BOOLEANO:
//                cout << "Booleano: " << boolalpha << token.valor.b << endl;
//                break;
//            default:
//                cout << "Token desconhecido" << endl;
//                break;
//        }
//    } while (token.token != TOK_FIM);
//    return 0;
//}


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
    string input = "string x = 'ines';\r;\nint \tz = 0;";

    lexicalAnalysis(input);

    return 0;
}