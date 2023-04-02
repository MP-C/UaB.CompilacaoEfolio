#AF2

Problem:
1. Dentro do seu grupo, implemente um analisador léxico que reconheça os seguintes tokens para as linguagens C e Java,
 de duas formas distintas (uma usando código direto, na linguagem que escolherem, outra usando uma ferramenta de geração
  de analisadores léxicos - Lex/Flex, JLex/JFlex, ANTLR, etc.):
a) TYPE: tipos de variáveis.
b) ID: identificador (nomes de variáveis e funções).
c) ATRIB: símbolo de atribuição do valor à variável.
d) VALUE: valores admissíveis para cada um dos tipos anteriores.
e) DELIM: delimitador da expressão.
f) WS: espaços em branco, isto é, carateres "invisíveis" que são ignorados (inclui espaço, tabulação, mudança de linha,
 etc.).

2. Adicione ao programa anterior o tratamento de erros léxicos, ou seja, sempre que um ou mais carateres seguidos não
 fazem parte da linguagem, deverá dar uma mensagem de erro com os números de início de linha e da coluna:
Exemplo: Erro linha 4, coluna 5, sequência não reconhecida: [].

Solution:
Its execution requires the completion of some tasks even before launching the developed program. Such as: to create the
lexical analyzer, it is necessary to install WSL (Linux) - via several commands (including install apk, upgrade, mixing,
 ...), and run the lexical analyzer file with the command: flex -o lexical_analyzer.cpp lexical_analyzer.l.