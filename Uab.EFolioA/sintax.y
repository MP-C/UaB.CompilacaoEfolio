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

    /* Ponto 6 - Verificar se a variavel foi declarada anteriormente
       Vamos guardar o nome da variavel numa estrutura com 100 posicoes
       em que cada identificador podera ter 32 caracteres + 1 para \0
    */

    struct {
        char nome [33];
        char tipo [6];
        char local [8];
    }
    vars[100];

    int debug=0;
    void debuf(char*);

    /* código nosso e de nózes */
    void bashInfo(char*);
    void adiciona_var(const char*, const char*, const char*);
    int existe_var(const char*, const char*, const char*);
    void apresenta_debug(const char*);

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
%token<nome_var>	IDENTFUNC
%type<tipoint>primeira_variavel
%type<tipoint>atribuicao

/* Tipos */
%token	INT
%token	FLOAT
%token	BOOL
/* Caracteristicas e metodos da linguagem YAIL */
%token	SE
%token	SENAO
%token	ENQUANTO
%token	PARA
%token  OU
%token  E
%token	ESTRUCT
%token	CONST
%token	GLOBAL
%token	ESCREVE
%token	ESCREVETUDO
%token	ESCREVESTRING
%token	LE
%token	LETUDO
%token	LESTRING
%token	RAIZ
%token	EXPOENTE
%token  MAIN
%token  LOCAL
%token	GEN
%token	SIZE
%token	RESIZE
/* Caracteristicas de uma linguagem de programação */
%token  VIRGULA
%token  ABRECHAVETA
%token  FECHACHAVETA
%token  ABREPARENT
%token  FECHAPARENT
%token 	ABREVETOR
%token 	FECHAVETOR
%token  IGUAL
%token  PV
%token  ASPAS
%token  COMPARATIVOS
%token  EXCLAMACAO
%token  MAIS
%token  MENOS
%token	OPERADOR
%token  TEXTOWRITE
%token  COMENTARIO
%token  PARAGRAFO
%token  INTEIRO
%token	REAL
%token  BOOLEANO
%start  input
/*          Associatividade de operadores         */
%left  MAIS MENOS
%left  OPERADOR
%nonassoc  SINAL

%%

input: /* Para começar a ler um ficheiro */
	input linha
    |   %empty
    ;

linha: /* Para ser lida cada linha */
        PARAGRAFO
    |   primeira_camada
    |   error PARAGRAFO{ yyerrok; }
    ;

/* Atribuição do esquema geral de um programa em YAIL */
primeira_camada:
        PARAGRAFO
    |   comentario
    |   structs {printf("Structs encontrado\n");}
    |   constante {printf("Constante encontrado\n");}
    |   global {printf("Global encontrado\n");}
    |   main  {printf("Main encontrado\n");}  /* TODO: funcao não deveria estar tb identificada neste nivel?
    |   funcao */
    |   segunda_camada
    ;

segunda_camada:
	PARAGRAFO segunda_camada
    |   comentario segunda_camada
    |   declara_variavel segunda_camada
    |   chama_funcao segunda_camada
    |	declara_funcao segunda_camada
    |   metodos segunda_camada
    |   %empty
    ;

comentario: /* COMENTARIO => [#].* \n, pois começam com o símbolo # e vão até ao fim da linh        */
        COMENTARIO {printf("Comentario encontrado\n");}
	;

structs: /* ESTRUCT => Definição das estruturas   */
        ESTRUCT ABRECHAVETA structs_corpo FECHACHAVETA
    ;

structs_corpo:
        PARAGRAFO structs_corpo
    |   comentario structs_corpo
    |   IDENT ABRECHAVETA declara_variavel FECHACHAVETA PV structs_corpo
    |   structs  {printf("Estruturas dentro de estruturas encontrado\n");}
    |   vetor	 /* int v [] */
    |   %empty
    ;

declara_variavel: /* para determinar quando se inicia uma variavel com um tipo, nome (ou vários nomes) e valor (ou varios valores) ou vetor */
        tipo primeira_variavel
    ;

tipo:
        INT
    |   FLOAT
    |   BOOL
    ;

primeira_variavel:
        IDENT segundo_termo       {$$ = encontra_var($1,1);}
    ;

segundo_termo:
        VIRGULA primeira_variavel
    |   vetor
    |   PV
    ;

vetor:  /* Exemplo: TIPO igual ao mesmo valor int = INTEIRO        */
        ABREVETOR vetor_corpo FECHAVETOR PV 			{printf("Vetor encontrado\n");}
    |   ABREVETOR vetor_corpo FECHAVETOR IGUAL ABRECHAVETA vetor_listas FECHACHAVETA PV {printf("Vetor encontrado\n");}
    |   ABREVETOR vetor_corpo FECHAVETOR IGUAL gerador PV 	{printf("Vetor encontrado\n");}
    ;

vetor_corpo:
	ident_ou_inteiro 	{printf("Vetor com variavel encontrado\n");}
    |   calculos vetor_corpo_extra {printf("Vetor com calculo encontrado\n");}
    |   %empty   		{printf("Vetor vazio encontrado\n");}
    ;

vetor_corpo_extra:
        operacoes ident_ou_inteiro vetor_corpo_extra
    | 	%empty
    ;

vetor_listas:
	INTEIRO
    |   INTEIRO VIRGULA vetor_listas
    ;

gerador:
	GEN ABREPARENT INTEIRO VIRGULA INTEIRO FECHAPARENT {printf("Gerador encontrado\n");}
    ;

constante:  /* CONST => const {declaracao_atribuicao}, pois é a definição das constantes */
        CONST ABRECHAVETA declaracao_atribuicao FECHACHAVETA
    ;

declaracao_atribuicao:
        PARAGRAFO declaracao_atribuicao 		  /* >> 	    */
    |   comentario declaracao_atribuicao                  /* # comment      */
    |   tipo IDENT IGUAL atributo declaracao_atribuicao	  /* int abc = 0;   */
    |   tipo IDENT IGUAL metodos PV declaracao_atribuicao /* int x = read();*/
    |   IDENT IGUAL metodos PV declaracao_atribuicao      /* x = read();    */
    |   %empty
    ;

atributo:
       valor PV				  /* 1;     */
    |  valor VIRGULA IDENT IGUAL atributo /* 2, a = */
    ;

valor:
        INTEIRO		/* [-]?[0-9]+ 		 */
    |   REAL		/* [-]?[0-9]+(\.[0-9]+)? */
    |   BOOLEANO	/* (false)|(true)	 */
    ;

global: /* GLOBAL => global { declar_varia }, pois é a definição das variáveis globais       */
        GLOBAL ABRECHAVETA declara_variavel FECHACHAVETA
    ;

main:	/* MAIN => main () bool { corpo_main }     */
        MAIN ABREPARENT FECHAPARENT BOOL ABRECHAVETA funcoes_corpo FECHACHAVETA segunda_camada
    	/* |   funcao TODO : faz sentido se for para agrupar o declara_funcao e chama_funcao */
    ;

funcoes_corpo:
	PARAGRAFO
    |	comentario
    |	expressao
    |   condicional
    |   write 	 /* TODO : METODOS ? é isso que se quer dizer ?*/
    |   %empty
    ;

expressao:
	IDENT expressao_equivalencia
    ;

expressao_equivalencia:
        IGUAL expressao_continuacao 		/* a = ..  */
    |   IGUAL OPERADOR expressao_continuacao    /* a =+ .. */
    |	OPERADOR OPERADOR 			/* a++ | a-- | a** | a// */
    ;

expressao_continuacao:
        valores OPERADOR expressao_continuacao
    |   valores PV
    ;

valores:
        valor  /* valor = INTEIRO, FLOAT, BOOLEANO */
    |   IDENT
    ;

condicional: /* Se e/ou  Senão*/
	SE ABREPARENT condicoes FECHAPARENT ABRECHAVETA funcoes_corpo FECHACHAVETA {printf("condicional Se encontrado\n");}
    ;

condicoes:
        IDENT COMPARATIVOS valores ou_e
    |   IDENT COMPARATIVOS valores
    ;

ou_e:
        OU condicoes
    |   E condicoes
    ;

// TODO: APAGAR O que está aqui?
// isto é só para conseguir correr
/*declara_funcao: %empty;
instrucoes: %empty;
chama_funcao: %empty;*/
////////////////////////////////

//TODO : chama_funcao e declara funcao podem ser unidas, ou não?
chama_funcao:
	IDENT ABREPARENT parametros FECHAPARENT PV PARAGRAFO {printf("Chama funcao encontrada\n");}
    |	%empty
    ;

parametros:
        parametro
   |    parametros VIRGULA parametro
   ;

parametro:
        ident_ou_inteiro
    |   %empty
    ;

ident_ou_inteiro:
        IDENT 		/* [_a-zA-Z\_]+([0-9]?|[_a-zA-Z\_]?) */
    |   INTEIRO		/* [-]?[0-9]+ */
    ;

declara_funcao:
	IDENT ABREPARENT parametros FECHAPARENT tipo ABRECHAVETA instrucoes FECHACHAVETA PARAGRAFO {printf("Declara funcao encontrada\n");}
    |   %empty
    ;

instrucoes:
    	PARAGRAFO instrucoes
    |   comentario
    |   declara_variavel instrucoes
    |	chama_funcao
    |   metodos
    |   atribuicao
    |   condicional
    |   ciclos
    |   %empty
    ;


metodos:
	size
    |   resize
    |	expoente
    |	raiz
    |  	write
    |	write_all
    |	write_string
    |	read
    |	read_all
    |	read_string
    |   %empty
    ;

size:
	SIZE ABREPARENT IDENT FECHAPARENT PV {printf("Metodo SIZE encontrado\n");}
    ;

resize:
	RESIZE ABREPARENT IDENT VIRGULA INTEIRO FECHAPARENT PV {printf("Metodo RESIZE encontrado\n");}
    ;

expoente:
	EXPOENTE ABREPARENT exponte_variavel VIRGULA exponte_variavel FECHAPARENT PV {printf("Metodo EXPOENTE encontrado\n");}
    ;

exponte_variavel:
	ident_ou_inteiro
    |   calculos
    ;

calculos:
        ident_ou_inteiro operacoes ident_ou_inteiro  {printf("Calculos encontrados\n");}
    ;

operacoes:
   	MAIS
    |   MENOS
    |   OPERADOR
    ;

raiz:
        RAIZ ABREPARENT raiz_variavel FECHAPARENT PV {printf("Metodo RAIZ encontrado\n");}
    ;

raiz_variavel:
	INTEIRO
    |   EXPOENTE
    ;

write:
	ESCREVE ABREPARENT IDENT FECHAPARENT PV {printf("Metodo write encontrado\n");}
    ;

write_all:
	ESCREVETUDO ABREPARENT IDENT FECHAPARENT PV {printf("Metodo write_all encontrado\n");}
    ;

write_string:
	ESCREVESTRING ABREPARENT IDENT FECHAPARENT PV {printf("Metodo write_string encontrado\n");}
    ;

read:
	LE ABREPARENT FECHAPARENT PV {printf("Metodo read encontrado\n");}
    ;

read_all:
	LETUDO ABREPARENT FECHAPARENT PV {printf("Metodo read_all encontrado\n");}
    ;

read_string:
	LESTRING ABREPARENT FECHAPARENT PV {printf("Metodo read_string encontrado\n");}
    ;

ciclos: /* Para determinar os ciclos While e For */
	 {printf("Ciclo While encontrados\n");}
	ENQUANTO ABREPARENT ciclo_condicional_while FECHAPARENT ABRECHAVETA instrucoes FECHACHAVETA {printf("Ciclo While encontrados\n");}
    |   PARA ABREPARENT ciclo_condicional_for  FECHAPARENT  ABRECHAVETA instrucoes FECHACHAVETA {printf("Ciclo For encontrados\n");}
    |   %empty
    ;

ciclo_condicional_while: /* Para determinar os condicional */
	IDENT COMPARATIVOS IDENT {printf("Comparacao entre variavaies encontrado");}
    |   IDENT COMPARATIVOS valor /* Inteiro | Real | Booleano */ {printf("Comparacao entre variavel e valor encontrado");}
    |   IDENT IGUAL IGUAL valor /* Para validar igualdade exata com valor */ {printf("Comparacao igualdade exata encontrado");}
    |   IDENT EXCLAMACAO IGUAL valor /* Inteiro | Real | Booleano */ {printf("Comparacao entre diferenca de valor encontrado");}
    |   %empty
    ;

ciclo_condicional_for:
    	IDENT VIRGULA valor VIRGULA ident_ou_inteiro VIRGULA valor
    ;

/***	ESTAMOS AQUI!!!		***/

// Codigo do colega
//TODO : comentado pois isto não faz sentido dado que a nossa é expressao e equivalencia e expressao continuacao, o que representa isto
atribuicao:
        IDENT IGUAL expressao PV {$$ = le_var($1);}
   ;

/*
expressao:
        valores		// valores = Valor | IDENT
    |   ABREPARENT expressao FECHAPARENT
    |   expressao operacoes expressao %prec SINAL
    ;

condicionais:
        SE ABREPARENT expressao COMPARATIVOS expressao FECHAPARENT X ABRECHAVETA Y FECHACHAVETA X SENAO X ABRECHAVETA Y FECHACHAVETA {printf("\ncondicional if-else Ok"); }
;

X:
	X
    |   %empty
    ;

Y:
	X instrucoes Y
    |   X
    ;
ciclos:
        ENQUANTO ABREPARENT expressao COMPARATIVOS expressao FECHAPARENT X ABRECHAVETA Y FECHACHAVETA {printf("Ciclo while encontrado\n");}
    |   PARA ABREPARENT atribuicao expressao COMPARATIVOS expressao PV IDENT IGUAL expressao FECHAPARENT X ABRECHAVETA Y FECHACHAVETA {printf("\nCiclo for encontrado ");}
    ;
*/
%%


/* Funcao main para leitura do ficheiro a compilar*/
int main(int argc, char** argv) {
	if (argc<2) {
		bashInfo(argv[0]);
    } else if (argc < 2 && argv[1]=="-d") {
		debug=1;
		yyin= fopen(argv[2],"r");
    } else {
		yyin = fopen(argv[1], "r");
    }

	if (NULL != yyin) {

		yyparse();
		fclose(yyin);
		if (count_error == 0) {
			printf("\nPrograma sem erros.\n\n");
		}
		else if(count_error == 1){
			printf("\nExiste %d erro no ficheiro. \n\n", count_error);
		} else {
			printf("\nExistem %d erros no ficheiro. \n\n", count_error);
		}
	}
	else {
		printf("\n Impossivel abrir o ficheiro: %s", argv[1]);
        bashInfo(argv[0]);
	}
}

/* Contangem de erros encontrados, com ativação yylineno seria possivel colocar em que se encontrou o erro */
void yyerror(char *s) {
	count_error++;
	fprintf(stderr,"%s\n",s); /* output para debug */
}

/* funcao para leitura de variaveis, permite verificar se variavel já foi declarada */
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
    printf("funcionamento: %s [ -d <ficheiro> | <ficheiro> ]\n", argumento);
    printf("\t-d\t\tLigar debug. Ouput de instruções válidas lidas.\n");
    printf("\t<ficheiro>\tFicheiro em linguagem YAIL\n");
}

/* funcao para apresentar debug */
void apresenta_debug(char* str){
	if(debug==1) {
		printf("%s",str);
	}
}