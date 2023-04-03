// São apenas exemplos do que devemos implementar para controlar, mesmo assim estou a achar que falta muitos outros controlos, se temos mesmo que fazer isto manualmente, vamos precisar de tempo


// verificar se é um espaço vazio

/* Em ambas as linguagens C e Java, um espaço vazio (também conhecido como espaço em branco) pode ser usado para separar elementos em uma declaração ou expressão. Antes de um espaço vazio, pode haver qualquer caractere válido na linguagem, incluindo letras, números, operadores e símbolos. Após um espaço em branco, pode haver outro caractere válido na linguagem, a menos que o espaço em branco esteja no final de uma linha ou arquivo, nesse caso não há caracteres depois dele. */

bool validBefore = false;
bool validAfter = false;

// Verifica o que está antes e depois do primeiro espaço em branco na entrada
for (int i = 0; i < input.length(); i++) {
    if (input[i] == ' ') {
        validBefore = true;
        // Verifica se há caracteres válidos depois do espaço em branco
        for (int j = i + 1; j < input.length(); j++) {
            if ((input[j] >= 'a' && input[j] <= 'z') ||
                (input[j] >= 'A' && input[j] <= 'Z') ||
                (input[j] >= '0' && input[j] <= '9')) {
                validAfter = true;
                break;
            }
        }
        break;
    } else if ((input[i] >= 'a' && input[i] <= 'z') ||
               (input[i] >= 'A' && input[i] <= 'Z') ||
               (input[i] >= '0' && input[i] <= '9')) {
        validBefore = true;
    }
}

if (validBefore && validAfter) {
    std::cout << "Entrada válida" << std::endl;
} else {
    std::cout << "Entrada inválida" << std::endl;
}

return 0;
}



// verificar se é um atributo

/* Antes e depois de um atributo, em linguagens de programação como C e Java, é possível ocorrer a declaração e a atribuição de valores.

Em C, por exemplo, um atributo pode ser declarado antes da função main(), dentro de uma struct, como um parâmetro de uma função ou como uma variável global. A atribuição de um valor pode ocorrer em qualquer momento após a declaração, por exemplo, dentro da função main() ou em outra função. */

bool is_valid_attribute(string before, string after) {
    // Verifica se a sequência de caracteres antes e depois do atributo formam uma
    // sequência válida na linguagem
    if (before.length() > 0 && !is_valid_identifier_char(before[before.length() - 1])) {
        return false;
    }
    if (after.length() > 0 && !is_valid_identifier_char(after[0])) {
        return false;
    }
    string attribute = before + after;
    if (!is_valid_identifier(attribute)) {
        return false;
    }
    return true;
}

// verificar se é um limitador de palavras

/* Na linguagem C e Java, o ponto e vírgula(;) é um caractere que indica o fim de uma instrução ou declaração.Em geral, o que pode acontecer antes de um ponto e vírgula(;) é a definição de uma expressão ou declaração de uma variável, função, estrutura, entre outros. */

bool isValid(std::string code, int index) {
    // Verifica o que é válido antes do ponto e vírgula
    int i = index - 1;
    while (i >= 0 && isspace(code[i])) {
        i--;
    }
    if (i < 0) {
        return false;  // Não há nada antes do ponto e vírgula
    }
    switch (code[i]) {
        case '}':
        case ')':
        case ']':
            // Há um fechamento de bloco antes do ponto e vírgula
            return true;
        default:
            // Há um caractere inválido antes do ponto e vírgula
            return false;
    }
}

// verificar se é um valor

/* Em ambas as linguagens C e Java, um número pode ser precedido ou seguido por outros caracteres que alteram o seu significado ou tipo.Alguns exemplos são :

    Operadores matemáticos : em ambas as linguagens,
    números podem ser seguidos por operadores matemáticos, como + (adição), -(subtração), *(multiplicação)e / (divisão).

    Caracteres não numéricos: em ambas as linguagens, números podem ser seguidos ou precedidos por caracteres não numéricos, como letras, espaços em branco ou símbolos. Se isso acontecer, o compilador pode gerar um erro ou interpretar o número como uma sequência de caracteres e não como um valor numérico.

    Sufixos de tipo: em C, números inteiros podem ser seguidos por sufixos de tipo, como "u" para indicar um inteiro sem sinal (unsigned), ou "l" para indicar um longo (long). Em Java, não há sufixos de tipo, mas existem sufixos que indicam o tipo de um número literal, como "f" para indicar um número de ponto flutuante (float) e "L" para indicar um número longo. */

// Verificar se o caractere anterior é válido
if (i > 0 && !isalnum(str[i - 1]) && str[i - 1] != '_' && str[i - 1] != ')' && str[i - 1] != ']') {
    valido = false;
    break;
}
// Verificar se o caractere seguinte é válido
if (i < str.size() - 1 && !isalnum(str[i + 1]) && str[i + 1] != '_' && str[i + 1] != '(' && str[i + 1] != '[') {
    valido = false;
    break;

    // verificar se é um ID

    /* Antes de um ID, pode haver espaços em branco ou outros caracteres não alfanuméricos, como operadores matemáticos ou de comparação, pontuações ou parênteses. No entanto, não é permitido iniciar um ID com um número ou qualquer outro caractere não válido.

    Depois de um ID, pode haver espaços em branco ou outros caracteres não alfanuméricos, mas eles geralmente não são necessários. O final de um ID é determinado pelo primeiro caractere que não é um caractere válido para um ID (como um espaço em branco ou um operador). */

    bool verificarAntesDepoisID(string str) {
        bool valido = true;

        // Verificar se a string é vazia
        if (str.empty()) {
            valido = false;
        } else {
            // Encontrar a posição do ID
            size_t posID = str.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_");

            // Verificar se há caracteres não válidos antes do ID
            if (posID > 0) {
                string antesID = str.substr(0, posID);
                for (char c : antesID) {
                    if (!isspace(c) && !ispunct(c)) {
                        valido = false;
                        break;
                    }
                }
            }

            // Encontrar a posição do primeiro caractere não válido após o ID
            size_t posFinalID = str.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_ ", posID + 1);
            if (posFinalID == string::npos) {
                posFinalID = str.size();
            }

            // Verificar se há caracteres não válidos após o ID
            if (posFinalID > posID + 1) {
                string depoisID = str.substr(posID + 1, posFinalID - posID - 1);
                for (char c : depoisID) {
                    if (!isspace(c) && !ispunct(c)) {
                        valido = false;
                        break;
                    }
                }
            }
        }

        return valido;
    }
