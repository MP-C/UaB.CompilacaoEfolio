%{
    #include <stdio.h>
    #include <stdlib.h>

    extern int yylex(void);

    void yyerror(char* s);
    int count_error = 0;
    int debug = 0;
    struct {
        char* nome;

    } variaveis[200];

%}

%union{
    char* nome_var;
    int tipoint;
}

%token<nome_var> IDENT
%type<tipoint>variavel

%token  BOOL
%token	INT
%token	FLOAT
%token	SE
%token	SENAO
%token	ENQUANTO
%token	PARA
%token  ESTRUCT
%token  CONSTANTE
%token  GLOBAL
%token  MAIN
%token  LOCAL
%token  ESCREVE
%token  ESCREVETUDO
%token  ESCREVESTRING
%token  LE
%token  LETUDO
%token  LESTRING
%token  EXPOENTE
%token  RAIZ
%token	VIRGULA
%token	ABRECHAVETA
%token	FECHACHAVETA
%token	ABREPARENT
%token	FECHAPARENT
%token	IGUAL
%token	PONTOEVIRGULA
%token	CONDICIONAL
%token	MAIS
%token	MENOS
%token  VEZES
%token  DIVIDE
%token  OPERADOR
%token  IMPOSSIVEL
%token  ESPACO
%token	FIM
%token  COMENTARIO
%token	INTEIRO
%token	REAL
%token  BOOLEANO


%start input

%left MAIS MENOS VEZES DIVIDE
%nonassoc   IMPOSSIVEL

%%

input:
        palavra {printf("input\n");} input
    |   FIM
    ;

palavra:
        FIM{printf("palavra\n");}
    |   esquema FIM
    |   error FIM{ yyerrok; }
    ;

esquema:
        comentario  /* # comentário */ {printf("entramos no esquema\n");}
    |   constante   /* const{} */
    |   estruct     /* structs{} */
    |   global      /* global{} */
    |   main        /* main() */
    ;

comentario:
    COMENTARIO FIM /* # */ {printf("comentario\n");}
    ;

constante:
        CONSTANTE ABRECHAVETA declaracao FECHACHAVETA  /* const { } */
        CONSTANTE ABRECHAVETA constante FECHACHAVETA   /* const { const{ float a }} */
    ;

estruct:
    ESTRUCT ABRECHAVETA declaracao FECHACHAVETA        /* strcut { declaracao } */
    ;

declaracao:
        IDENT ABRECHAVETA variavel FECHACHAVETA PONTOEVIRGULA   /* point2D {int a variavel};  */
    |   %empty
    ;

variavel:
        tipo IDENT extra /* float x,y,z; */
    ;

extra:
        VIRGULA IDENT             /* , x */
    |   PONTOEVIRGULA             /* ; */
    ;

tipo:
        INT         /* int a float b ; */
    |   FLOAT       /* float c */
    |   BOOL        /* bool d */
    ;


/* estamos aqui */
global:
    GLOBAL ABRECHAVETA qualquercoisa FECHACHAVETA
    ;

qualquercoisa:
    FIM
    ;


main:
    MAIN ABREPARENT FECHAPARENT BOOL
    ;

%%

int main(int argc, char** argv) {
    // Pede ao usuário para escolher o nível de debug
        // Lê o arquivo
    FILE* ficheiro = fopen(argv[1], "r");
    if(ficheiro == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    char* linha;
    yyparse();
    while(fgets(linha,100, ficheiro)) {
        if(debug == 0) {
            if(count_error == 0)
                printf("\n0 erros encontrados\n");
            else
                printf("\n%d erros encontrados\n", count_error);
        }
    }
    fclose(ficheiro);
    return 0;
}

// Função de tratamento de erro do parser
void yyerror(char* s) {
    count_error++;
}