%{
 	#include <stdio.h>
    #include <string.h>
   	#include <stdlib.h>
   	#include <stdbool.h>
   	#include "lex.yy.c"

    #define MAX 100

	extern int yylex( void );
	extern FILE *yyin;

	void yyerror(char *s);
	int count_error=0;

    extern int yylineno;

    char localDecalracao[100];
    char tipoVar[6];

    typedef struct {
        char token[MAX][MAX]; // fica com o valor de string/token
        int valor[MAX][1];    // fica com o valor de int
        float real[MAX][1];   // fica com o valor de floats
        int boleano[MAX][1];  // fica com o valor de bools
        char tipo[MAX][7];    // fica com o tipo da variável/token
        int stackCount;		  // conta a quantidade de variaveis/tokens
    }Variaveis;

    Variaveis teste;



    void startStack(Variaveis* stack){
        stack->stackCount=-1;
    }

    void pushInt(Variaveis* stack, char* token, int val, char* tipo){
        stack->stackCount++;
        char* parsedT = token;
        strcpy(stack->token[stack->stackCount],parsedT);
        stack->valor[stack->stackCount][0] = val;
        strcpy(stack->tipo[stack->stackCount], tipo);

    }

	void pushFloat(Variaveis* stack, char* token, float val, char* tipo) {
        stack->stackCount++;
        char* parsedT = token;
        strcpy(stack->token[stack->stackCount], parsedT);
        stack->real[stack->stackCount][0] = val;
        strcpy(stack->tipo[stack->stackCount], tipo);
    }


    void printStack(Variaveis* stack, char* local) {
        printf("%s encontrado\n", local);
        int i;
        bool encontrouInt = false;

        for (i = stack->stackCount; i >= 0 ; i--) {
            if(!strcmp(stack->tipo[i],"int"))
                printf("variavel %s do tipo %s com valor %d\n", stack->token[i],stack->tipo[i], stack->valor[i][0]);
            else
                printf("variavel %s do tipo %s com valor %f\n", stack->token[i],stack->tipo[i], stack->real[i][0]);
        }
    }

%}

%union
     {
        char nome_var[33];
        int tipoint;
        struct valorTipo valTip;
     }


%token <valTip> IDENT INT INTEIRO FLOAT DECIMAL
// %token <float> IDENT FLOAT DECIMAL

%token PARAGRAFO ABRECHAVETA FECHACHAVETA PV IGUAL CONST VIRGULA PF
%token ESCREVE ESCREVETUDO ESCREVESTRING LE LETUDO LESTRING
%token MAIS MENOS MULTIPLICA DIVIDE MODULO

%start input


%%

input: // Para começar a ler um ficheiro
	input programa
    |   %empty
    ;
programa:
        constante
    |   PARAGRAFO
    ;
constante: // int a ...
    CONST ABRECHAVETA constante_corpo FECHACHAVETA PARAGRAFO { printStack(&teste,"const");} ;

constante_corpo:
        PARAGRAFO constante_corpo
    |   tipo_variavel atribuicao PV constante_corpo
    |   %empty
    ;
tipo_variavel:
        INT { strcpy(tipoVar,"int"); }
    |   FLOAT { strcpy(tipoVar,"float"); }
    ;

atribuicao:
        IDENT IGUAL INTEIRO VIRGULA atribuicao { pushInt(&teste,$1.valorString, $3.valorInt, tipoVar); }
    |   IDENT IGUAL INTEIRO { pushInt(&teste,$1.valorString, $3.valorInt, tipoVar); }
    |	IDENT IGUAL DECIMAL VIRGULA atribuicao {pushFloat(&teste, $1.valorString, $3.valorDecimal, tipoVar);}
    |   IDENT IGUAL DECIMAL {pushFloat(&teste, $1.valorString, $3.valorDecimal, tipoVar);}
    ;



%%

/* INICIO DE FUNÇÕES PARA COMPILADOR */
/* Funcao main para leitura do ficheiro a compilar*/
int main(int argc, char** argv) {
    startStack(&teste);
	if (argc<2) {
		//printf("");
	} else {
		yyin = fopen(argv[1], "r");
		if (NULL != yyin) {
			yyparse();
			fclose(yyin);
			if (count_error == 0) {
				printf("\nPrograma sem erros.\n \n");
			}
			else if(count_error == 1){
				printf("\nExiste %d erro no ficheiro. \n \n", count_error);
			} else {
				printf("\nExistem %d erros no ficheiro. \n \n", count_error);
			}
		}
		else {
			printf("\n Impossivel abrir o ficheiro: %s", argv[1]);
			//bashInfo(argv[0]);
		}
	}
	return 0;
}

/* Contangem de erros encontrados, com ativação yylineno seria possivel colocar em que se encontrou o erro */
void yyerror(char *s) {
	count_error++;
	fprintf(stderr,"%s\n",s); /* output para debug */
}
