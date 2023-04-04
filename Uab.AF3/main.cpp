#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Função para avaliar a expressão
double eval(string exp);

// Função para analisar a expressão
double parseExpr(string exp);

// Função para analisar termos
double parseTerm(string exp);

// Função para analisar fatores
double parseFactor(string exp);

// Função para verificar se o caracter é um número
bool isNumber(char c);

// Função para verificar se o caracter é um operador
bool isOperator(char c);

// Função para calcular o resultado de uma operação
double calculate(double a, double b, char op);


double eval(string exp) {
    double result = parseExpr(exp);
    return result;
}

double parseExpr(string exp) {
    double result = parseTerm(exp);
    size_t pos = 0;
    char op;
    while (pos < exp.length() && (exp[pos] == '+' || exp[pos] == '-')) {
        op = exp[pos];
        pos++;
        double term = parseTerm(exp.substr(pos));
        if (isnan(term)) {
            return NAN;
        }
        result = calculate(result, term, op);
        pos += to_string(term).length();
    }
    return result;
}

double parseTerm(string exp) {
    double result = parseFactor(exp);
    size_t pos = 0;
    char op;
    while (pos < exp.length() && (exp[pos] == '*' || exp[pos] == '/')) {
        op = exp[pos];
        pos++;
        double factor = parseFactor(exp.substr(pos));
        if (isnan(factor)) {
            return NAN;
        }
        result = calculate(result, factor, op);
        pos += to_string(factor).length();
    }
    return result;
}

double parseFactor(string exp) {
    if (exp[0] == '(') {
        double result = parseExpr(exp.substr(1));
        if (exp[exp.length() - 1] != ')') {
            return NAN;
        }
        return result;
    }
    size_t pos = 0;
    while (pos < exp.length() && (isNumber(exp[pos]) || exp[pos] == '.' || exp[pos] == 'e' || exp[pos] == 'E' || (pos == 0 && exp[pos] == '-'))) {
        pos++;
    }
    double result;
    stringstream(exp.substr(0, pos)) >> result;
    if (isnan(result)) {
        return NAN;
    }
    return result;
}

bool isNumber(char c) {
    return isdigit(c);
}

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

double calculate(double a, double b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return b == 0 ? NAN : a / b;
        default:
            return NAN;
    }
}

int main() {
    string exp;
    cout << "Digite a expressao: ";
    getline(cin, exp);
    double result = eval(exp);
    if (isnan(result)) {
        cout << "Erro: Divisao por zero" << endl;
    } else {
        cout << "Resultado: " << fixed << setprecision(2) << result << endl;
    }
    return 0;
}
