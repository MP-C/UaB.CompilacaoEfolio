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

/* Tipos */
%token INT FLOAT BOOL

%token CONST GLOBAL MAIN
%token PARAGRAFO COMENTARIO ABRECHAVETA FECHACHAVETA PV IGUAL VIRGULA PF
%token ESCREVE ESCREVETUDO ESCREVESTRING LE LETUDO LESTRING
%token MAIS MENOS MULTIPLICA DIVIDE MODULO

/* Caracteristicas e metodos da linguagem YAIL */
%token SE
%token SENAO
%token ENQUANTO
%token PARA
%token OU
%token E
%token NOT
%token ESTRUTURA
%token LOCAL

%token EXPOENTE
%token RAIZ
%token SIZE
%token GEN
%token RESIZE


/* Caracteristicas de uma linguagem de programação */
%token ABREPARENT
%token FECHAPARENT
%token ABREVETOR
%token FECHAVETOR
%token IGUAL
%token ASPAS
%token EXCLAMACAO
%token COMPARATIVOS
%token OPERADOR
%token OPERADORLOGICO
%token INCREMENTO // Antes de + : "++"            { return (INCREMENTO); }
%token DECREMENTO // Antes de + : "--"            { return (DECREMENTO); }

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


// Início Structure
estructs_inicio: // Atribuição do esquema geral de um programa em YAIL- 1/6
	PARAGRAFO estructs constante_inicio {printf("Paragrafo Estruturas encontrado\n");}
    |   comentario estructs constante_inicio {printf("Comentario de Estruturas encontrado\n");}
    |   constante_inicio
    | 	vazio
    ;
estructs: // ESTRUTURA => Definição das estruturas
    |   ESTRUTURA ABRECHAVETA estruct_corpo FECHACHAVETA estructs {printf("Estruturas encontrado\n");}
    ;
estruct_corpo:
        PARAGRAFO estruct_corpo
    |   comentario estruct_corpo
/*|   estruct_dentro_estruct estruct_corpo {printf("Estruturas dentro de estruturas encontrado\n");}*/
    |   IDENT ABRECHAVETA declara_variavel FECHACHAVETA PV estruct_corpo
    |   vetor estruct_corpo  {printf("Vetor dentro de estruturas encontrado\n");}  // int v []
    |   vazio
    ;
declara_variavel: // Para determinar quando se inicia uma variavel com um tipo, nome (ou vários nomes) e valor (ou varios valores) ou vetor
        tipo primeira_variavel
    ;
primeira_variavel:
        IDENT segunda_variavel       {$$ = encontra_var($1,1);}
    ;
segunda_variavel:
        VIRGULA primeira_variavel
    |   vetor
    |   PV fim_linha
    |	PV fim_linha declara_variavel
    ;
fim_linha:
	PARAGRAFO
    |   vazio
    ;

// Início Estruturas Vetores
vetor:  // Exemplo: TIPO igual ao mesmo valor int = INTEIRO
        ABREVETOR vetor_corpo FECHAVETOR PV 			{printf("Vetor encontrado\n");}
    |   ABREVETOR vetor_corpo FECHAVETOR IGUAL ABRECHAVETA vetor_listas FECHACHAVETA PV {printf("Vetor encontrado\n");}
    |   ABREVETOR vetor_corpo FECHAVETOR IGUAL gerador PV 	{printf("Vetor encontrado\n");}
    ;
vetor_corpo:
	ident_ou_inteiro 	{printf("Vetor com variavel encontrado\n");}
    |   calculos vetor_corpo_extra {printf("Vetor com calculo encontrado\n");}
    |   vazio   		{printf("Vetor vazio encontrado\n");}
    ;
ident_ou_inteiro:
        IDENT 	{printf("Identificação de variavel encontrado\n");}// [_a-zA-Z\_]+([0-9]?|[_a-zA-Z\_]?)
    |   INTEIRO		// [-]?[0-9]+
    ;
calculos:
        ident_ou_inteiro operador ident_ou_inteiro  {printf("Calculos encontrados\n");}
    ;
operador:
	MAIS
    |   MENOS
    |   MULTIPLICA
    |   DIVIDE
    ;
vetor_corpo_extra:
        operador ident_ou_inteiro vetor_corpo_extra
    | 	vazio
    ;
vetor_listas:
	INTEIRO
    |   INTEIRO VIRGULA vetor_listas
    ;
gerador:
	GEN ABREPARENT INTEIRO VIRGULA INTEIRO FECHAPARENT {printf("Gerador encontrado\n");}
    ;
// Expressões e métodos associados a variável Global
expressao:
	IDENT expressao_equivalencia {printf("Expressao encontrada\n");}
    ;
expressao_equivalencia:
        IGUAL expressao_continuacao 		// a = ...
    |   operador IGUAL expressao_continuacao    // a =+ ...
    |	IGUAL calculos PV fim_linha		// g = 10 * 10;
    |	operador operador PV fim_linha		// a++ | a-- | a** | a//
    ;
expressao_continuacao:
        valores operador expressao_continuacao
    |   valores PV fim_linha
    |	metodos
    ;
valores:
        ABREPARENT valores_dentro FECHAPARENT	// (INTEIRO, FLOAT, BOOLEANO)
    |   valores_dentro
    ;
valores_dentro:
        valor  			// valor = INTEIRO, FLOAT, BOOLEANO
    |   IDENT 			// q
    |   IDENT PF IDENT		// q.x
    ;
metodos: // Para cada método, pode ficar mais facil tratar os ponto e virgulas aqui
	size PV
    |   resize PV
    |	expoente PV
    |	raiz PV
    |  	write PV
    |	write_all PV
    |	write_string PV
    |	read PV
    |	read_all PV
    |	read_string PV
    ;
size:
	SIZE ABREPARENT IDENT FECHAPARENT {printf("Metodo SIZE encontrado\n");}
    ;
resize:
	RESIZE ABREPARENT IDENT VIRGULA INTEIRO FECHAPARENT {printf("Metodo RESIZE encontrado\n");}
    ;
expoente:
	EXPOENTE ABREPARENT exponte_raiz_variavel VIRGULA exponte_raiz_variavel FECHAPARENT {printf("Metodo EXPOENTE encontrado\n");}
    ;
exponte_raiz_variavel:
	ident_ou_inteiro exponte_raiz_extra
    |	expoente exponte_raiz_extra
    |	raiz exponte_raiz_extra
    |   calculos exponte_raiz_extra
    |   valores exponte_raiz_extra
    ;
exponte_raiz_extra:
       operador exponte_raiz_variavel
    |  vazio
    ;
raiz:
        RAIZ ABREPARENT exponte_raiz_variavel FECHAPARENT {printf("Metodo RAIZ encontrado\n");}
    ;
write:
	ESCREVE ABREPARENT IDENT FECHAPARENT {printf("Metodo write encontrado\n");}
    ;
write_all:
	ESCREVETUDO ABREPARENT IDENT FECHAPARENT {printf("Metodo write_all encontrado\n");}
    ;
write_string:
	ESCREVESTRING ABREPARENT IDENT FECHAPARENT {printf("Metodo write_string encontrado\n");}
    ;
read:
	LE ABREPARENT FECHAPARENT {printf("Metodo read encontrado\n");}
    ;
read_all:
	LETUDO ABREPARENT FECHAPARENT {printf("Metodo read_all encontrado\n");}
    ;
read_string:
	LESTRING ABREPARENT FECHAPARENT {printf("Metodo read_string encontrado\n");}
    ;

// Início Main
main_inicio:// Atribuição do esquema geral de um programa em YAIL- 5/6
        PARAGRAFO main {printf("Paragrafo de Global encontrado\n");}
    |   comentario main {printf("Comentario de Global encontrado\n");}
    | 	vazio
    ;
main:	// MAIN => main () bool { corpo_main }
        MAIN ABREPARENT FECHAPARENT BOOL ABRECHAVETA instrucoes FECHACHAVETA declara_funcao {printf("Main encontrado\n");}
    ;
expressao:
	IDENT expressao_equivalencia {printf("Expressao encontrada\n");}
    ;
expressao_equivalencia:
        IGUAL expressao_continuacao 		// a = ...
    |   operador IGUAL expressao_continuacao    // a =+ ...
    |	IGUAL calculos PV fim_linha		// g = 10 * 10;
    |	operador operador PV fim_linha		// a++ | a-- | a** | a//
    ;
expressao_continuacao:
        valores operador expressao_continuacao
    |   valores PV fim_linha
    |	metodos
    ;
valores:
        ABREPARENT valores_dentro FECHAPARENT	// (INTEIRO, FLOAT, BOOLEANO)
    |   ABREPARENT valores_dentro FECHAPARENT 	// (q) (q.x) (q.p.x)
    |   valores_dentro
    ;
valores_dentro:
        valor  			// valor = INTEIRO, FLOAT, BOOLEANO
    |   IDENT 			// q
    |   IDENT PF IDENT		// q.x
    /*|   IDENT PF IDENT PF IDENT // q.p.x  => retirado dos padrões do novo efolio B */
    ;
// Início Instruções
instrucoes: // Atribuição do esquema geral de um programa em YAIL- 6/6
    	PARAGRAFO instrucoes
    |   comentario instrucoes
    |   declara_variavel instrucoes
    |   calculos PV instrucoes
    |   expressao instrucoes
    |   metodos instrucoes
    |	chama_funcao instrucoes
    |   ciclos instrucoes
    |   condicional instrucoes
    |   local instrucoes {printf("Local encontrado\n");}
    |   vazio
    ;
chama_funcao:
	IDENT ABREPARENT parametros_sem_tipo FECHAPARENT PV {printf("Chama funcao encontrada\n");}
    ;
parametros_sem_tipo:
	IDENT parametros_sem_tipo // (a)
    |	VIRGULA IDENT parametros_sem_tipo // (a,b,c)
    ;
ciclos: /* Para determinar os ciclos While e For */
	ENQUANTO ABREPARENT condicoes_inicio FECHAPARENT ABRECHAVETA instrucoes FECHACHAVETA {printf("Ciclo While encontrados\n");}
    |   PARA ABREPARENT condicao_for  FECHAPARENT  ABRECHAVETA instrucoes FECHACHAVETA {printf("Ciclo For encontrados\n");}
    ;
condicao_for:
    	IDENT VIRGULA valor VIRGULA ident_ou_inteiro VIRGULA valor
    ;
condicional: // Se e/ou  Senão. exemplo: if/else,
	SE ABREPARENT condicoes_inicio FECHAPARENT ABRECHAVETA instrucoes FECHACHAVETA senao {printf("Condicional SE encontrado\n");}
    ;
condicoes_inicio: // exemplo: if(condicoes_inicio)
	condicoes_resto
    |	ABREPARENT condicoes_resto FECHAPARENT operadores_logicos condicoes_inicio
    |  	ABREPARENT condicoes_resto FECHAPARENT COMPARATIVOS condicoes_inicio
    ;
condicoes_resto: // exemplo: if(condicoes_inicio, condicoes_resto)
        valores COMPARATIVOS valores operadores_logicos condicoes_resto
    |   valores COMPARATIVOS valores
    |   valores operadores_logicos valores operadores_logicos condicoes_resto
    |   valores operadores_logicos valores
    |	valores
    ;
operadores_logicos:
	OU
    |	E
    |	NOT
    ;
senao:
	SENAO condicional {printf("Condicional SENAO encontrado\n");}
    | 	SENAO ABRECHAVETA instrucoes FECHACHAVETA {printf("Condicional SENAO encontrado\n");}
    |   fim_linha
    ;
local:
	LOCAL ABRECHAVETA fim_linha declara_variavel fim_linha FECHACHAVETA PV
    |	LOCAL ABRECHAVETA fim_linha declaracao_atribuicao fim_linha FECHACHAVETA PV
    ;
declara_funcao:
	PARAGRAFO declara_funcao
    |	comentario declara_funcao
    |	IDENT ABREPARENT parametros_com_tipo FECHAPARENT tipo ABRECHAVETA instrucoes FECHACHAVETA fim_linha declara_funcao {printf("Declara funcao encontrada\n");}
    |   vazio
    ;
parametros_com_tipo:
        parametro
   |    parametro VIRGULA parametros_com_tipo
   ;
parametro:
	tipo IDENT
   |   	vazio
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
		//ficheiro = fopen("tac","w");
		if (NULL != yyin) {
			yyparse();
			//fclose(ficheiro;)
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
