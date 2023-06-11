%{
 	#include <stdio.h>
    	#include <string.h>
   	#include <stdlib.h>
   	#include "lex.yy.c"

	/* A funcao yyparse() gerada pelo bison vai automaticamente chamar a funcao
	   yylex() do flex.
	   A funcao yyparse() esta' definida no ficheiro ".tab.c" gerada por este
	   ficheiro ".y" e a yylex() no ficheiro "lex.yy.c" gerada pelo ficheiro ".l".

	   Como ambos os ficheiros sao compilados de forma independente para so'
	   depois serem ligados (linked), o ficheiro ".y" precisa de ter definida a
	   funcao yylex() para nao dar erro de compilacao.
	   Infelizmente precisamos ques o bison corra antes do flex (para gerar o
	   ficheiro ".tab.h" com os %tokens e algumas outras definicoes). Entao
	   declaramos essa funcao do flex como sendo "definida noutro ficheiro fonte",
	   ou seja, "externa":
	*/

	extern int yylex( void );
	extern FILE *yyin;

	void yyerror(char *s);
	int count_error=0;

	/*
		Estrutura para guardar variáveis com
		nome, tipo e local onde foi declarada
	*/
    struct {
        char nome [33];
        char tipo [6];
        char local [8];
    }
    vars[100];

    int debug=0;
    char* msg;
    void debuf(char*);

    /* código nosso e de nózes */
    void bashInfo(char*);
    void adiciona_var(const char*, const char*, const char*);
    int existe_var(const char*, const char*, const char*);
    void apresenta_debug(char*);

    /* TODO :  APAGAR ESTE COMENTARIO ?!?!?  - - */
    /*int debug=0;*/
    int variaveis_criadas=0;

    //printf("Todo o output serve como identificador");
    /* apartir daqui já é do Deus dará */

    int vars_preenchidas=0;
    int le_var(const char *nome);
    int encontra_var(const char *nome, int adicionar);
%}

%union
     {
        char nome_var[33];
        int tipoint;
     }

%token<nome_var>	IDENT
%type<tipoint>primeira_variavel

/* Tipos */
%token INT
%token FLOAT
%token BOOL

/* Caracteristicas e metodos da linguagem YAIL */
%token SE
%token SENAO
%token ENQUANTO
%token PARA
%token OU
%token E
%token ESTRUCT
%token CONST
%token MAIN
%token LOCAL
%token GLOBAL
%token ESCREVE
%token ESCREVETUDO
%token ESCREVESTRING
%token LE
%token LETUDO
%token LESTRING
%token EXPOENTE
%token RAIZ
%token SIZE
%token GEN
%token RESIZE

/* Caracteristicas de uma linguagem de programação */
%token VIRGULA
%token ABRECHAVETA
%token FECHACHAVETA
%token ABREPARENT
%token FECHAPARENT
%token ABREVETOR
%token FECHAVETOR
%token IGUAL
%token PV
%token PF
%token ASPAS
%token EXCLAMACAO
%token COMPARATIVOS
%token OPERADOR
%token OPERADORLOGICO

%token COMENTARIO
%token PARAGRAFO
%token INTEIRO
%token REAL
%token BOOLEANO
%start input

/* Associatividade de operadores */
//%precedence OPERADOR
%left  OPERADOR
%right COMENTARIO
%nonassoc  SINAL

%%

input: // Para começar a ler um ficheiro
	input programa
    |   vazio
    ;

vazio:
	%prec empty // Substitui a traducao do simbolo de percentagem
    ;

fim_linha:
	PARAGRAFO
    |   vazio
    ;

programa: // Para ser lida cada linha
        primeira_camada
    |   error PARAGRAFO{ yyerrok; }
    ;

primeira_camada: // Atribuição do esquema geral de um programa em YAIL
        PARAGRAFO primeira_camada {printf("Paragrafo primeira camada encontrado\n");}
    |   comentario primeira_camada {printf("Comentario de primeira camada encontrado\n");}
    |   structs {printf("Structs encontrado\n");}
    |   constante {printf("Constante encontrado\n");}
    |   global {printf("Global encontrado\n");}
    |   main {printf("Main encontrado\n");}
    | 	vazio
    ;

comentario: // COMENTARIO => [#].* \n, pois começam com o símbolo # e vão até ao fim da linha
        COMENTARIO {printf("Comentario encontrado\n");}
    ;

structs: // ESTRUCT => Definição das estruturas
        ESTRUCT ABRECHAVETA structs_corpo FECHACHAVETA primeira_camada
    ;

structs_corpo:
        PARAGRAFO structs_corpo
    |   comentario structs_corpo
    |   IDENT ABRECHAVETA declara_variavel FECHACHAVETA PV structs_corpo
    |   structs_structs  structs_corpo {printf("Estruturas dentro de estruturas encontrado\n");}
    |   vetor structs_corpo	 // int v []
    |   vazio
    ;

structs_structs:
	IDENT ABRECHAVETA IDENT primeira_variavel FECHACHAVETA PV
    ;

declara_variavel: // Para determinar quando se inicia uma variavel com um tipo, nome (ou vários nomes) e valor (ou varios valores) ou vetor
        tipo primeira_variavel
    ;

tipo:
        INT
    |   FLOAT
    |   BOOL
    ;

primeira_variavel:
        IDENT {$$ = encontra_var($1,1);} segundo_termo
    ;

segundo_termo:
        VIRGULA primeira_variavel
    |   vetor
    |   PV fim_linha
    |	PV fim_linha declara_variavel
    ;

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

calculos:
        ident_ou_inteiro OPERADOR ident_ou_inteiro  {printf("Calculos encontrados\n");}
    ;

vetor_corpo_extra:
        OPERADOR ident_ou_inteiro vetor_corpo_extra
    | 	vazio
    ;

vetor_listas:
	INTEIRO
    |   INTEIRO VIRGULA vetor_listas
    ;

gerador:
	GEN ABREPARENT INTEIRO VIRGULA INTEIRO FECHAPARENT {printf("Gerador encontrado\n");}
    ;

constante:  // CONST => const {declaracao_atribuicao}, pois é a definição das constantes
        CONST ABRECHAVETA declaracao_atribuicao FECHACHAVETA fim_linha
    ;

declaracao_atribuicao:
        PARAGRAFO declaracao_atribuicao 		  // >>
    |   comentario declaracao_atribuicao                  // # comment
    |   tipo IDENT IGUAL atributo declaracao_atribuicao	  // int abc = 0;
    |   tipo IDENT IGUAL metodos declaracao_atribuicao    // int x = read();
    |   IDENT IGUAL metodos declaracao_atribuicao         // x = read();
    |   vazio
    ;

atributo:
       valor PV				  // 1;
    |  valor VIRGULA IDENT IGUAL atributo // 2, a =
    ;

valor:
        INTEIRO		// [-]?[0-9]+
    |   REAL		// [-]?[0-9]+(\.[0-9]+)?
    |   BOOLEANO	// (false)|(true)
    ;

global: // GLOBAL => global { com_global_corpo_proprio }, pois é a definição das variáveis globais
        GLOBAL ABRECHAVETA global_corpo FECHACHAVETA
    ;

global_corpo:
	PARAGRAFO global_corpo
    |	comentario global_corpo
    |	declara_variavel global_corpo
    |	tipo IDENT IGUAL metodos global_corpo
    |	expressao global_corpo
    |	vazio
    ;
main:	// MAIN => main () bool { corpo_main }
        MAIN ABREPARENT FECHAPARENT BOOL ABRECHAVETA instrucoes FECHACHAVETA declara_funcao
    ;

expressao:
	IDENT expressao_equivalencia {printf("Expressao encontrada\n");}
    ;

expressao_equivalencia:
        IGUAL expressao_continuacao 		// a = ...
    |   IGUAL OPERADOR expressao_continuacao    // a =+ ...
    |	IGUAL calculos PV fim_linha		// g = 10 * 10;
    |	OPERADOR OPERADOR PV fim_linha		// a++ | a-- | a** | a//
    ;

expressao_continuacao:
        valores OPERADOR expressao_continuacao
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
    |   IDENT PF IDENT PF IDENT // q.p.x
    ;

condicional: // Se e/ou  Senão
	SE ABREPARENT condicoes_inicio FECHAPARENT ABRECHAVETA instrucoes FECHACHAVETA senao {printf("Condicional SE encontrado\n");}
    ;

condicoes_inicio: // exemplo: if(condicoes_inicio)
	condicoes_resto
    |	ABREPARENT condicoes_resto FECHAPARENT e_ou condicoes_inicio
    |  	ABREPARENT condicoes_resto FECHAPARENT COMPARATIVOS condicoes_inicio
    ;

condicoes_resto: // exemplo: if(condicoes_inicio, condicoes_resto)
        valores COMPARATIVOS valores e_ou condicoes_resto
    |   valores COMPARATIVOS valores
    |   valores OPERADORLOGICO valores e_ou condicoes_resto
    |   valores OPERADORLOGICO valores
    |	valores
    ;

e_ou:
	E
    |	OU
    ;

senao:
	fim_linha
    |	SENAO condicional {printf("Condicional SENAO encontrado\n");}
    | 	SENAO ABRECHAVETA instrucoes FECHACHAVETA {printf("Condicional SENAO encontrado\n");}
    | 	vazio
    ;

chama_funcao:
	IDENT ABREPARENT parametros_sem_tipo FECHAPARENT PV {printf("Chama funcao encontrada\n");}
    ;
parametros_sem_tipo:
	IDENT parametros_sem_tipo // (a)
    |	VIRGULA IDENT parametros_sem_tipo // (a,b,c)
    ;

ident_ou_inteiro:
        IDENT 		// [_a-zA-Z\_]+([0-9]?|[_a-zA-Z\_]?)
    |   INTEIRO		// [-]?[0-9]+
    ;

declara_funcao:
	PARAGRAFO declara_funcao
    |	comentario declara_funcao
    |	IDENT ABREPARENT parametros FECHAPARENT tipo ABRECHAVETA instrucoes FECHACHAVETA fim_linha declara_funcao {printf("Declara funcao encontrada\n");}
    |   vazio
    ;

parametros:
        parametro
   |    parametro VIRGULA parametros
   ;

parametro:
	tipo IDENT
   |   	vazio
   ;

instrucoes:
    	PARAGRAFO instrucoes
    |   comentario instrucoes
    |   declara_variavel instrucoes
    |	chama_funcao instrucoes
    |   metodos instrucoes
    |   expressao instrucoes
    |   condicional instrucoes
    |   calculos PV instrucoes
    |   ciclos instrucoes
    |   local instrucoes {printf("Local encontrado\n");}
    |   vazio
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
       OPERADOR exponte_raiz_variavel
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

ciclos: /* Para determinar os ciclos While e For */
	ENQUANTO ABREPARENT condicoes_inicio FECHAPARENT ABRECHAVETA instrucoes FECHACHAVETA {printf("Ciclo While encontrados\n");}
    |   PARA ABREPARENT condicao_for  FECHAPARENT  ABRECHAVETA instrucoes FECHACHAVETA {printf("Ciclo For encontrados\n");}
    ;

condicao_for:
    	IDENT VIRGULA valor VIRGULA ident_ou_inteiro VIRGULA valor
    ;

local:
	LOCAL ABRECHAVETA fim_linha declara_variavel fim_linha FECHACHAVETA PV
    |	LOCAL ABRECHAVETA fim_linha declaracao_atribuicao fim_linha FECHACHAVETA PV
    ;

%%


/* Funcao main para leitura do ficheiro a compilar*/
int main(int argc, char** argv) {
	if (argc<2) {
		bashInfo(argv[0]);
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
			bashInfo(argv[0]);
		}
	}
	return 0;
}

/* Contangem de erros encontrados, com ativação yylineno seria possivel colocar em que se encontrou o erro */
void yyerror(char *s) {
	count_error++;
	fprintf(stderr,"%s\n",s); /* output para debug */
}

/* Funcao para leitura de variaveis, permite verificar se variavel já foi declarada */
int le_var(const char *nome) {
	int i;

	i = encontra_var(nome, 0);
	if (i < 0)
	{
		fprintf(stderr, "Referencia a variavel inexistente: %s\n", nome); /* output para debug */
		count_error++;
	}
    return 0;
}


/* funcao para procurar variavel e/ou adicionar variavel */
int encontra_var(const char *nome, int adicionar) {
	int i;
	for (i = 0; i < vars_preenchidas; i++)
	{
		if (strcmp(vars[i].nome, nome) == 0)
			return i;
	}
	if (adicionar && i < 100)
	{
		strcpy(vars[i].nome, nome);
		vars_preenchidas++;
        fprintf(stderr,"Variavel %s declarada\n", nome); /* output para debug */
		return i;
	}
    return -1;
}

/* funcao para apresentar info de funcionamento do EfolioA */
void bashInfo(char* argumento) {
    printf("\n");
    printf("funcionamento: %s <ficheiro>\n", argumento);
    printf("\n");
    printf(" <ficheiro>\tFicheiro em linguagem YAIL\n");
}