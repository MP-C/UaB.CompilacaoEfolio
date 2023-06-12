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

	char localDecalracao[100]; // local onde está a haver a declaração: structs || const || global || ...
	char tipoVar[6]; // tipo de var: int || float || bool

	/* estrutura que guarda as variáveis em pilha */
	typedef struct {
		char token[MAX][MAX]; // fica com o valor de string/token
		int valor[MAX][1];    // fica com o valor de int
		float real[MAX][1];   // fica com o valor de floats
		bool boleano[MAX][1]; // fica com o valor de bools
		char tipo[MAX][7];    // fica com o tipo da variável/token
        char teste[100];
		int stackCount;	      // conta a quantidade de variaveis/tokens
	}Variaveis;

	Variaveis teste;

    struct {
        char nome [33];
        char valor[100];
    }vars[100];

    FILE *ficheiro; // ficheiro que gera o código intermédio
    char tk[5]; // $t1...
    int contaTk = 1; // numero do t

    /* funcao que gera um novo token do tipo $t... */
    void novoTk( char* t, int i) {
    sprintf(t, "$t%d",i);
    contaTk++;
    }

    /* inicia a pilha */
    void startStack(Variaveis* stack){
       stack->stackCount=-1;
    }

    void push(Variaveis* stack, char* token, char* valor, char* tipo) {
            //printf("push\ntoken:%s\nvalor:%s -\n",token, valor);
            //TODO: FAZER FLOAT E BOOL
            //TODO: CARREGAR PARA A PILHA
            //TODO: VERIFICAR SE VAR EXISTE
            char inteiro[3]="int", real[5]="float", booleano[4]="bool";
            char boolTrue[5]="true", boolFalse[6]="false";
            if(!strcmp(tipo,inteiro))
            {
                //printf("inteiro\n");
                if(strcmp(valor,boolTrue)==0)
                {
                    printf("\nVariavel %s com valor 1", token);
                    //push int = 1
                } else if(strcmp(valor,boolFalse)==0)
                {
                    printf("\nVariavel %s com valor 0", token);
                    //push int = 1
                }
                if(strchr(valor, '.')!=NULL)
                {
                    printf("\nVariavel %s recebeu %f mas ficou com %d\n", token, atof(valor), atoi(valor));
                }
            }
        }

    /* push para pilha de valores int */
    void pushInt(Variaveis* stack, char* token, int val, char* tipo){
        stack->stackCount++;
        char* parsedT = token;
        strcpy(stack->token[stack->stackCount],parsedT);
        stack->valor[stack->stackCount][0] = val;
        strcpy(stack->tipo[stack->stackCount], tipo);
    }

    /* push para pilha de valores float */
	void pushFloat(Variaveis* stack, char* token, float val, char* tipo) {
        stack->stackCount++;
        char* parsedT = token;
        strcpy(stack->token[stack->stackCount], parsedT);
        stack->real[stack->stackCount][0] = val;
        strcpy(stack->tipo[stack->stackCount], tipo);
    }

    /* push para pilha de valores booleanos */
    void pushBool(Variaveis* stack, char* token, bool val, char* tipo) {
	stack->stackCount++;
	char* parsedT = token;
	strcpy(stack->token[stack->stackCount], parsedT);
	stack->real[stack->stackCount][0] = val;
	strcpy(stack->tipo[stack->stackCount], tipo);
    }

    /* apresenta pilha */
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

    /* push stack para o ficheiro */
    void pushStack(Variaveis* stack) {
        for(int i = stack->stackCount; i >=0 ; i--) {
            if(!strcmp(stack->tipo[i],"int")) {
		    novoTk(tk, contaTk);
		    printf("%s = %d\n", strdup(tk), stack->valor[i][0]);
		    //fprintf(ficheiro, "%s = %d", strdup(tk), stack->valor[i][0]);
		    printf("%s = %s\n", stack->token[i],strdup(tk));
		    //fprintf(ficheiro, "%s = %s\n", strdup(tk), strdup(stack->token[i]));
		    //fprintf(ficheiro, "%s = %s", $$.valorString, strdup(tk));
		    //fprintf
            }
        }
    }


%}

%union
     {
        char nome_var[33];
        int tipoint;
        struct valorTipo valTip;
     }


%token <valTip> IDENT INTEIRO DECIMAL BOOLEANO
%token INT FLOAT BOOL
%token PARAGRAFO ABRECHAVETA FECHACHAVETA PV IGUAL CONST VIRGULA PF
%token ESCREVE ESCREVETUDO ESCREVESTRING LE LETUDO LESTRING
%token MAIS MENOS MULTIPLICA DIVIDE MODULO

%start input
%token COMENTARIO


%%

input: // Para começar a ler um ficheiro
	input programa
    |   %empty
    ;
programa:
        constante
    |   PARAGRAFO
    ;
comentario: // COMENTARIO => [#].* \n, pois começam com o símbolo # e vão até ao fim da linha
        COMENTARIO {printf("Comentario encontrado\n");}
    ;

constante: //
    CONST ABRECHAVETA constante_corpo FECHACHAVETA PARAGRAFO { printStack(&teste,"const"); } ;

constante_corpo:
        PARAGRAFO constante_corpo
    |   tipo_variavel atribuicao PV constante_corpo
    |   %empty
    ;

tipo_variavel:
        INT { strcpy(tipoVar,"INT"); }
    |   FLOAT { strcpy(tipoVar,"float"); }
    |   BOOL { strcpy(tipoVar,"bool"); }
    ;

atribuicao: IDENT IGUAL BOOLEANO {push(&teste, $1.valorString, $3.valorString, tipoVar);}

/*
atribuicao_a:
        IDENT IGUAL INTEIRO VIRGULA atribuicao { pushInt(&teste,$1.valorString, $3.valorInt, tipoVar); }
    |   IDENT IGUAL INTEIRO { pushInt(&teste,$1.valorString, $3.valorInt, tipoVar); }
    |	IDENT IGUAL DECIMAL VIRGULA atribuicao {pushFloat(&teste, $1.valorString, $3.valorDecimal, tipoVar);}
    |   IDENT IGUAL DECIMAL {pushFloat(&teste, $1.valorString, $3.valorDecimal, tipoVar);}
    |	IDENT IGUAL BOOLEANO VIRGULA atribuicao {pushBool(&teste, $1.valorString, $3.valorBoleano, tipoVar);}
    |   IDENT IGUAL BOOLEANO {pushBool(&teste, $1.valorString, $3.valorBoleano, tipoVar);}
    ;
*/

%%

/* INICIO DE FUNÇÕES PARA COMPILADOR */
/* Funcao main para leitura do ficheiro a compilar*/
int main(int argc, char** argv) {
    startStack(&teste);
	if (argc<2) {
		//printf("");
	} else {
		yyin = fopen(argv[1], "r");
		//ficheiro = fopen("tac","w");
		if (NULL != yyin) {
			yyparse();
			pushStack(&teste);
			//fclose(ficheiro;)
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