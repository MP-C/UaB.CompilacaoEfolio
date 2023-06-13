%{
	#include <stdio.h>
    	#include <string.h>
   	#include <stdlib.h>
   	#include <stdbool.h>
   	#include <ctype.h>
   	#include "lex.yy.c"

    	#define MAX 100

	extern int yylex( void );
	extern FILE *yyin;

	void yyerror(char *s);
	int count_error=0;

    	extern int yylineno;

	char localDecalracao[100]; // local onde está a haver a declaração: structs || const || global || ...
	char tipoVar[6]; // tipo de var: int || float || bool
    char valorVar[100]; // valor: inteiro || real || booleano || nome_var

	/* estrutura que guarda as variáveis em pilha */
	typedef struct {
		char token[MAX][MAX]; // fica com o valor de string ou token
		int inteiro[MAX][1];    // fica com o valor de int
		float real[MAX][1];   // fica com o valor de floats
		bool booleano[MAX][1]; // fica com o valor de bools
		char tipo[MAX][7];    // fica com o tipo da variável ou token
        	char local[100];
		int stackCount;	      // conta a quantidade de variaveis ou tokens
	}Variaveis;

	Variaveis teste;

    struct {
        char nome[33];
        int inteiro;
        float real;
        bool booleano;
        char valor[100];
        char tipo[6];
        char local[100];
    }vars[100];

    int vars_declaradas=0;

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

    /* carrega pilha */
    void push(Variaveis* stack, char* token, char* valor, char* tipo) {
        char inteiro[4]="int", real[6]="float", booleano[5]="bool";
        char boolTrue[5]="true", boolFalse[6]="false";
        //tipo:int
        if(!strcmp(tipo,inteiro)) {
            if(!strcmp(valor,boolTrue)) {
                stack->stackCount++;
                char* parsedToken = token;
                strcpy(stack->token[stack->stackCount], parsedToken);
                stack->inteiro[stack->stackCount][0] = 1;
                strcpy(stack->tipo[stack->stackCount], tipo);
            } else if(!strcmp(valor,boolFalse)) {
                stack->stackCount++;
                char* parsedToken = token;
                strcpy(stack->token[stack->stackCount], parsedToken);
                stack->inteiro[stack->stackCount][0] = 0;
                strcpy(stack->tipo[stack->stackCount], tipo);
            }else {
                stack->stackCount++;
                char* parsedToken = token;
                strcpy(stack->token[stack->stackCount], parsedToken);
                stack->inteiro[stack->stackCount][0] = atoi(valor);
                strcpy(stack->tipo[stack->stackCount], tipo);
            }

        }
        //tipo:float
        if(!strcmp(tipo,real))
        {
            if(!strcmp(valor,boolTrue)) {
                stack->stackCount++;
                char* parsedToken = token;
                strcpy(stack->token[stack->stackCount], parsedToken);
                stack->real[stack->stackCount][0] = 1.00;
                strcpy(stack->tipo[stack->stackCount], tipo);
            } else if(!strcmp(valor,boolFalse)) {
                stack->stackCount++;
                char* parsedToken = token;
                strcpy(stack->token[stack->stackCount], parsedToken);
                stack->real[stack->stackCount][0] = 0.00;
                strcpy(stack->tipo[stack->stackCount], tipo);
            }else {
                stack->stackCount++;
                char* parsedToken = token;
                strcpy(stack->token[stack->stackCount], parsedToken);
                stack->real[stack->stackCount][0] = atof(valor);
                strcpy(stack->tipo[stack->stackCount], tipo);
            }
        }
        //tipo:bool
        if(!strcmp(tipo,booleano))
        {
            if(!strcmp(valor,boolTrue)) {
                stack->stackCount++;
                char* parsedToken = token;
                strcpy(stack->token[stack->stackCount], parsedToken);
                stack->booleano[stack->stackCount][0] = true ;
                strcpy(stack->tipo[stack->stackCount], tipo);
            } else if(!strcmp(valor,boolFalse)) {
                stack->stackCount++;
                char* parsedToken = token;
                strcpy(stack->token[stack->stackCount], parsedToken);
                stack->booleano[stack->stackCount][0] = false ;
                strcpy(stack->tipo[stack->stackCount], tipo);
            } else if(!strchr(valor, '.')) {
                if(!atof(valor)) {
                    stack->stackCount++;
                    char* parsedToken = token;
                    strcpy(stack->token[stack->stackCount], parsedToken);
                    stack->booleano[stack->stackCount][0] = false ;
                    strcpy(stack->tipo[stack->stackCount], tipo);
                } else {
                    stack->stackCount++;
                    char* parsedToken = token;
                    strcpy(stack->token[stack->stackCount], parsedToken);
                    stack->booleano[stack->stackCount][0] = true ;
                    strcpy(stack->tipo[stack->stackCount], tipo);
                }
            } else {
                if(!atoi(valor)) {
                    stack->stackCount++;
                    char* parsedToken = token;
                    strcpy(stack->token[stack->stackCount], parsedToken);
                    stack->booleano[stack->stackCount][0] = false ;
                    strcpy(stack->tipo[stack->stackCount], tipo);
                } else {
                    stack->stackCount++;
                    char* parsedToken = token;
                    strcpy(stack->token[stack->stackCount], parsedToken);
                    stack->booleano[stack->stackCount][0] = true ;
                    strcpy(stack->tipo[stack->stackCount], tipo);
                }
            }
        }
    }

    /* apresenta pilha */
    void printStack(Variaveis* stack) {
        for (int i = 0; i <= stack->stackCount ; i++) {
            if(!strcmp(stack->tipo[i],"int"))
                printf("variavel %s do tipo %s com valor %d\n", stack->token[i],stack->tipo[i], stack->inteiro[i][0]);
            else if(!strcmp(stack->tipo[i],"float"))
                printf("variavel %s do tipo %s com valor %f\n", stack->token[i],stack->tipo[i], stack->real[i][0]);
            else
                printf("variavel %s do tipo %s com valor %s\n", stack->token[i],stack->tipo[i], stack->booleano[i][0] ? "true":"false");
        }
    }

    /* procura elemento da pilha */
    void searchStack(Variaveis* stack, char* token) {

    }

    /* atualiza elemento da pilha */
    void updateStack(Variaveis* stack, char* token, char* valor) {

    }

    /* push stack para o ficheiro */
    void pushStack(Variaveis* stack) {
        for(int i = 0; i <= stack->stackCount ; i++) {
            if(!strcmp(stack->tipo[i],"int")) {
            novoTk(tk, contaTk);
            printf("%s = %d\n", strdup(tk), stack->inteiro[i][0]);
            printf("%s = %s\n", stack->token[i],strdup(tk));
            } else if(!strcmp(stack->tipo[i],"float")) {
                novoTk(tk, contaTk);
                printf("%s = %f\n", strdup(tk), stack->real[i][0]);
                printf("%s = %s\n", stack->token[i],strdup(tk));
            } else {
                novoTk(tk, contaTk);
                printf("%s = %s\n", strdup(tk), stack->booleano[i][0] ? "true":"false");
                printf("%s = %s\n", stack->token[i],strdup(tk));
            }
        }
    }


    int encontra_var(char* var) {

        int i;
        for(i=0; i<=vars_declaradas;i++)
        {
            if(!strcmp(vars[i].nome,var)) {
                return i;
            }
        }
        i=-1;
        return i;
    }

    void verifica_var(char* var) {
        char inteiro[4]="int", real[6]="float", booleano[5]="bool";
        int i=encontra_var(var);
        if (i==-1) {
            printf("ERRO! Variavel %s não declarada\n", var);
            count_error++;
        } else {
            if(!strcmp(vars[i].tipo,inteiro)){
                    sprintf(valorVar,"%d",vars[i].inteiro);
                } else if(!strcmp(vars[i].tipo,real)){
                    sprintf(valorVar,"%f",vars[i].real);
                } else {
                    sprintf(valorVar,"%s",vars[i].booleano ? "true":"false");
                }
        }
    }

    void adiciona_var(Variaveis* stack, char* token, char* valor, char* tipo) {
        char inteiro[4]="int", real[6]="float", booleano[5]="bool";
        char boolTrue[5]="true", boolFalse[6]="false";
        if(encontra_var(token)==-1) {
            strcpy(vars[vars_declaradas].nome,token);
            strcpy(vars[vars_declaradas].tipo,tipo);
            push(stack, token, valor, tipo);
            if(!strcmp(tipo,inteiro)) {
                if(!strcmp(valor,boolTrue)) {
                    vars[vars_declaradas].inteiro = 1;
                } else if(!strcmp(valor,boolFalse)) {
                    vars[vars_declaradas].inteiro = 0;
                } else {
                    vars[vars_declaradas].inteiro = atoi(valor);
                }
            }
            if(!strcmp(tipo,real)) {
                if(!strcmp(valor,boolTrue)) {
                        vars[vars_declaradas].real = 1.00;
                    } else if(!strcmp(valor,boolFalse)) {
                        vars[vars_declaradas].real = 0.00;
                    } else {
                        vars[vars_declaradas].real = atof(valor);
                    }
            }
            if(!strcmp(tipo,booleano)) {
                if(!strcmp(valor,boolTrue)) {
                        vars[vars_declaradas].booleano = true;
                    } else if(!strcmp(valor,boolFalse)) {
                        vars[vars_declaradas].booleano = false;
                    } else if(!strchr(valor, '.')) {
                        if(!atof(valor)) {
                            vars[vars_declaradas].booleano = false;
                        } else {
                            vars[vars_declaradas].booleano = true;
                        }
                    } else if(!atoi(valor)) {
                        vars[vars_declaradas].booleano = false;
                    } else {
                        vars[vars_declaradas].booleano = true;
                    }
            }
            vars_declaradas++;
        } else {
            printf("ERRO! Variavel %s já declarada\n", token);
            count_error++;
        }
    }

    /* funcao para receber e calcular dois valores +, -, *, e / ou ++ e -- */
    void operacao(char* var, char* valor1, char* operacao, char* valor2) {
        char inteiro[4]="int", real[6]="float", booleano[5]="bool";
        char boolTrue[5]="true", boolFalse[6]="false";
        int i = encontra_var(var);
        char tipo[6];
        strcpy(tipo,vars[i].tipo);
        if(!strcmp(tipo,inteiro)) {
            int val1, val2, total;
            if(!strcmp(valor1,boolTrue)) {
                strcpy(valor1, "1");
                val1=atoi(valor1);
            } else if(!strcmp(valor1,boolFalse)) {
                strcpy(valor1, "0");
                val1=atoi(valor1);
            } else if(isalpha(valor1[0])==0 || valor1[0]=="_"){
                int var_check = encontra_var(valor1);
                if(var_check!=-1) {
                    val1=vars[var_check].inteiro;
                } else {
                    printf("ERRO! Variavel %s nao declarada\n", valor1);
                    count_error++;
                }
            } else {
                val1=atoi(valor1);
            }
            if(!strcmp(valor2,boolTrue)) {
                strcpy(valor2, "1");
                val2=atoi(valor2);
            } else if(!strcmp(valor2,boolFalse)) {
                strcpy(valor2, "0");
                val2=atoi(valor2);
            } else if(isalpha(valor2[0])==0 || valor2[0]=="_"){
                int var_check = encontra_var(valor2);
                if(var_check!=-1) {
                    val2=vars[var_check].inteiro;
                } else {
                    printf("ERRO! Variavel %s nao declarada\n", valor2);
                    count_error++;
                }
            } else {
                val2=atoi(valor2);
            }
            if (strcmp(operacao, "+") == 0) {
                total = val1 + val2;
            } else if (strcmp(operacao, "-") == 0) {
                total = val1 - val2;
            } else if (strcmp(operacao, "*") == 0) {
                total = val1 * val2;
            } else if (strcmp(operacao, "/") == 0) {
                if (val2 == 0) {
                    printf("ERRO! Divisão por 0\n");
                    count_error++;
                } else {
                    total = val1 / val2;
                }
            } else if (strcmp(operacao, "++") == 0) {
                total = val1++;
            } else if (strcmp(operacao, "--") == 0) {
                total = val1--;
              }

        }
        if(!strcmp(tipo,real)) {
            float val1, val2, total;
            if(!strcmp(valor1,boolTrue)) {
                strcpy(valor1, "1");
                val1=atof(valor1);
            } else if(!strcmp(valor1,boolFalse)) {
                strcpy(valor1, "0");
                val1=atof(valor1);
            } else if(isalpha(valor1[0])==0 || valor1[0]=="_"){
                int var_check = encontra_var(valor1);
                if(var_check!=-1) {
                    val1=vars[var_check].real;
                } else {
                    printf("ERRO! Variavel %s nao declarada\n", valor1);
                    count_error++;
                }
            } else {
                val1=atof(valor1);
            }
            if(!strcmp(valor2,boolTrue)) {
                strcpy(valor2, "1");
                val2=atof(valor2);
            } else if(!strcmp(valor2,boolFalse)) {
                strcpy(valor2, "0");
                val2=atof(valor2);
            } else if(isalpha(valor2[0])==0 || valor2[0]=="_"){
                int var_check = encontra_var(valor2);
                if(var_check!=-1) {
                    val2=vars[var_check].real;
                } else {
                    printf("ERRO! Variavel %s nao declarada\n", valor2);
                    count_error++;
                }
            } else {
                val2=atof(valor2);
            }
            if (strcmp(operacao, "+") == 0) {
                total = val1 + val2;
            } else if (strcmp(operacao, "-") == 0) {
                total = val1 - val2;
            } else if (strcmp(operacao, "*") == 0) {
                total = val1 * val2;
            } else if (strcmp(operacao, "/") == 0) {
                if (val2 == 0) {
                    printf("ERRO! Divisão por 0\n");
                    count_error++;
                } else {
                    total = val1 / val2;
                }
            } else if (strcmp(operacao, "++") == 0) {
                total = val1++;
            } else if (strcmp(operacao, "--") == 0) {
                total = val1--;
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
%token CONST GLOBAL MAIN
%token PARAGRAFO COMENTARIO ABRECHAVETA FECHACHAVETA PV IGUAL VIRGULA PF
%token ESCREVE ESCREVETUDO ESCREVESTRING LE LETUDO LESTRING
%token MAIS MENOS MULTIPLICA DIVIDE MODULO

%start input

%%

input: // Para começar a ler um ficheiro
	input programa
    |   %empty
    ;
programa:
        constante_inicio
    |   error PARAGRAFO{ yyerrok; }
    ;

constante_inicio:
        comentario_paragrafo constante global_inicio
    |   constante global_inicio
    |   global_inicio
    ;
comentario_paragrafo:
        PARAGRAFO
    |   COMENTARIO
    ;

constante:
        CONST {strcpy(localDecalracao,"const");} ABRECHAVETA constante_corpo FECHACHAVETA { printStack(&teste); }
    ;

constante_corpo:
        comentario_paragrafo constante_corpo
    |   tipo_variavel atribuicao PV constante_corpo
    |   %empty
    ;

tipo_variavel:
        INT { strcpy(tipoVar,"int"); }
    |   FLOAT { strcpy(tipoVar,"float"); }
    |   BOOL { strcpy(tipoVar,"bool"); }
    ;


atribuicao:
        IDENT IGUAL valor VIRGULA atribuicao { adiciona_var(&teste,$1.valorString, valorVar, tipoVar); }
    |   IDENT IGUAL valor { adiciona_var(&teste,$1.valorString, valorVar, tipoVar); }
    ;

valor:
        INTEIRO {strcpy(valorVar, $1.valorString);}
    |   DECIMAL {strcpy(valorVar, $1.valorString);}
    |   BOOLEANO {strcpy(valorVar, $1.valorString);}
    |   IDENT { verifica_var($1.valorString);}
    ;

global_inicio:
        comentario_paragrafo global
    |   global
    |   comentario_paragrafo
    ;

global:
        GLOBAL {strcpy(localDecalracao,"global");} ABRECHAVETA global_corpo FECHACHAVETA ;

global_corpo: comentario_paragrafo;

%%

/* INICIO DE FUNÇÕES PARA COMPILADOR */
/* Funcao main para leitura do ficheiro a compilar*/
int main(int argc, char** argv) {
    startStack(&teste);
	if (argc<2) {
	} else {
		yyin = fopen(argv[1], "r");
		//ficheiro = fopen("tac","w");
		if (NULL != yyin) {
			yyparse();
			fclose(yyin);
			if (count_error == 0) {
				printf("\nPrograma sem erros.\n \n");
                pushStack(&teste);
			}
			else if(count_error == 1){
				printf("\nExiste %d erro no ficheiro. \n \n", count_error);
			} else {
				printf("\nExistem %d erros no ficheiro. \n \n", count_error);
			}
		}
		else {
			printf("\n Impossivel abrir o ficheiro: %s", argv[1]);
		}
	}
	return 0;
}

/* Contangem de erros encontrados, com ativação yylineno seria possivel colocar em que se encontrou o erro */
void yyerror(char *s) {
	count_error++;
	fprintf(stderr,"%s\n",s); /* output para debug */
}
