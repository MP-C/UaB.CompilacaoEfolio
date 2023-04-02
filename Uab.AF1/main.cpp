#include <iostream>
#include <stack>
#include <string>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

/*
 * PARA infixToPostfix():
 * Este código é uma implementação de um algoritmo para converter uma expressão matemática em notação infixa para notação
 * posfixa. A notação infixa é a forma padrão de escrever uma expressão matemática, por exemplo, "3 + 4 * 2 / ( 1 - 5 )".
 * A notação posfixa, também conhecida como notação polonesa reversa, é uma forma alternativa de escrever a mesma
 * expressão onde os operadores aparecem após seus operandos, por exemplo, "3 4 2 * 1 5 - / +".
 * O algoritmo implementado usa uma pilha para armazenar os operadores. A cada caractere da expressão, o algoritmo
 * verifica se ele é um parêntese de abertura, um parêntese de fechamento, um operador ou um operando.
 * Ao final do processamento, o algoritmo desempilha todos os operadores restantes da pilha e adiciona-os ao resultado.
*/
string infixToPostfix(string expression) {
    stack<char> s;
    string result;

    for (char c : expression) {
        if (c == '(') { //Se for um parêntese aberto, adiciona-se à pilha.
            s.push(c);
        } else if (c == ')') {
            //Se for um parêntese fechado, o algoritmo desempilha todos os operadores da pilha e adiciona-os ao
            // resultado até encontrar o parêntese aberto correspondente.
            while (!s.empty() && s.top() != '(') {
                result += s.top(); //Adiciona a pilha
                s.pop(); //tira o elemento lido
            }
            if (!s.empty() && s.top() == '(')
                s.pop();
        } else if (isOperator(c)) {
            //Se for um operador, o algoritmo desempilha todos os operadores com precedência maior ou igual e
            // adiciona-os ao resultado antes de empilhar o operador atual.
            while (!s.empty() && precedence(c) <= precedence(s.top())) {
                result += s.top();
                s.pop();
            }
            s.push(c);
        } else {
            result += c;
        }
    }

    while (!s.empty()) {
        result += s.top();
        s.pop();
    }
    return result;
}


double evaluatePostfix(string postfix) {
    stack<double> s;

    for (char c : postfix) {
        if (isdigit(c)) {
            s.push(c - '0');
        } else if (isOperator(c)) {
            double op2 = (double)s.top();
            s.pop();
            double op1 = (double)s.top();
            s.pop();
            switch (c) {
                case '+':
                    s.push(op1 + op2);
                    break;
                case '-':
                    s.push(op1 - op2);
                    break;
                case '*':
                    s.push(op1 * op2);
                    break;
                case '/':
                    if (op2 == 0)
                        throw runtime_error("Divisao por zero!");
                    s.push(op1 / op2);
                    break;
            }
        }
    }
    return s.top();
}

void routine3() {
    bool error = false;

    while (!error) {
        string input;
        cout << " Digite a expressao: ";
        getline(cin, input);

        if(input == "0"){   //para sair do codigo, e ao comparar uma string com carater deve ser ""
            error = true;
            continue;
        }
        string postFix = infixToPostfix(input); //O resultado final é a expressão na notação posfixa.
        cout << "Expressao pos-fixa: " << postFix << endl;
    }
}

void routine5(){
    bool error = false;

    while (!error) {
        string input;
        cout << " Digite a expressao: ";
        getline(cin, input);

        if(input == "0"){
            error = true;
            continue;
        }

        string postFix = infixToPostfix(input);
        cout << "Expressao pos-fixa: " << postFix << endl;

        double result;
        try {
            result = evaluatePostfix(input);
            cout <<  "Resultado: " << result << endl;
        } catch (const exception& e) {
            cerr << "Erro: " << e.what() << endl;
        }
    }

}


int main() {
    string typeOfRoutine;
    cout << "Selecione a rotina: \n 1) * ou / sao Caracteres; \n 2) * ou / sao Operadores;\n 0) Sair \nEscolha: ";
    getline(cin, typeOfRoutine);

    if(typeOfRoutine == "1"){   //para ir para a rotina 1
        routine3();
    }
    else if(typeOfRoutine == "2"){   //para ir para a rotina 2
        routine5();
    }
    else if(typeOfRoutine == "0"){   //para sair do codigo
        cout << "..a sair..";
        exit(1);
    }
    else { // para sair do programa porque a rotina não existe
        cout << "A rotina escolhida: " << typeOfRoutine << " nao existe no projeto AF1" << endl;
    }
    return 0;
}