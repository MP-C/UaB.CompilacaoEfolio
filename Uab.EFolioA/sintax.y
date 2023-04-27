%{
 	#include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

	/* A funcao yyparse() gerada pelo bison vai automaticamente chamar a funcao
	   yylex() do flex.
	   A funcao yyparse() esta' definida no ficheiro ".tab.c" gerada por este
	   ficheiro ".y" e a yylex() no ficheiro "lex.yy.c" gerada pelo ficheiro ".l".

	   Como ambos os ficheiros sao compilados de forma independente para so'
	   depois serem ligados (linked), o ficheiro ".y" precisa de ter definida a
	   funcao yylex() para nao dar erro de compilacao.
	   Infelizmente precisamos que o bison corra antes do flex (para gerar o
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
       para o exercicio em causa estas reservas sao sufecientes
       Fonte - Pedro Freire - Sebenta flex-bison
    */
    struct {
        char nome [33];
    }
    vars[100];

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
%type<tipoint>dv1
%type<tipoint>atribuicao

%token	INT
%token	FLOAT
%token	BOOL

%token	SE
%token	SENAO
%token	ENQUANTO
%token	PARA
%token	ESTRUCT
%token	CONST
%token	GLOBAL
%token	ESCREVE
%token	ESCREVETUDO
%token	ESCREVESTRING
%token	LE
%token	LETUDO
%token	LESTRING
%token	EXPOENTE
%token	RAIZ
%token  MAIN
%token  LOCAL

%token  VIRGULA
%token  ABRECHAVETA
%token  FECHACHAVETA
%token  ABREPARENT
%token  FECHAPARENT
%token 	ABREVETOR
%token 	FECHAVETOR
%token  IGUAL
%token  PV
%token  ESPACO
%token  OCONDICIONAL
%token  MAIS
%token  MENOS
%token	OPERADOR
%token  COMENTARIO
%token  PARAGRAFO
%token  LETRAS
%token  CALCULO
%token  INTEIRO
%token	REAL
%token  BOOLEANO

%start input

/*          Associatividade de operadores         */
%left  MAIS MENOS
%left  OPERADOR
%nonassoc  SINAL

%%

input:
	input linha
	|   %empty
	;

linha:
        PARAGRAFO
    |   primeira_camada
    |   error PARAGRAFO{ yyerrok; }
    ;

primeira_camada:
        PARAGRAFO
    |   comentario
    |   structs
    |   constante
    |   global
    |   segunda_camada
    ;

segunda_camada:
        PARAGRAFO
    |   comentario
    |   main
    |   funcoes
    ;

/*      COMENTARIO => [#].* \n  */
comentario:
        COMENTARIO {printf("\nComentario encontrado\n");}
	;


structs:
        ESTRUCT {printf("\nStructs encontrado\n");} ABRECHAVETA structs_corpo FECHACHAVETA
    ;


structs_corpo:
        PARAGRAFO structs_corpo
    |   IDENT ABRECHAVETA decla_varia FECHACHAVETA PV structs_corpo
    |   comentario structs_corpo
    |   %empty
    ;

/*      CONST => const {declaracao_atribuicao}\n    */
constante:
        CONST ABRECHAVETA declaracao_atribuicao FECHACHAVETA{printf("\nconstante encontrada\n");}
    ;

/*          GLOBAL => global { declar_varia }       */
global:
        GLOBAL ABRECHAVETA decla_varia FECHACHAVETA {printf("\nglobal encontrado\n");}
    ;

/*          MAIN => main () bool { corpo_main }     */
main:
    MAIN ABREPARENT FECHAPARENT BOOL ABRECHAVETA instrucoes FECHACHAVETA segunda_camada {printf("\nmain encontrado\n");}
    ;

funcoes:
        %empty
    ;

/*          falta vetores       */
declaracao_atribuicao:
        comentario declaracao_atribuicao
    |   PARAGRAFO declaracao_atribuicao
    |   tipo IDENT IGUAL atributo declaracao_atribuicao
    |   %empty
    ;


atributo:
        valor VIRGULA IDENT IGUAL atributo
    |   valor PV
    ;

/*             TIPO igual ao mesmo valor int = INTEIRO        */
valor:
        INTEIRO
    |   REAL
    |   BOOLEANO
    ;

instrucoes:
        decla_varia
    |   constante
    |   atribuicao
    |   condicionais
    |   ciclos
    ;

decla_varia:
        tipo dv1
    ;

tipo:
        INT
    |   FLOAT
    |   BOOL
    ;

dv1:
        IDENT dv2       {$$ = encontra_var($1,1);}
    ;


dv2:
        VIRGULA dv1
    |   vetor
    |   PV
    ;

/* falta expressões ex: a+2-c */
vetor:
        INT IDENT ABREVETOR vetor_tamanho FECHAVETOR PV {printf("\nVetor encontrado\n");}
    ;

vetor_tamanho:
	INTEIRO
    |   LETRAS
    |   CALCULO
    |   %empty
    ;

atribuicao:
        IDENT IGUAL MMV expressao PV {$$ = le_var($1);}
;

MMV:
        MAIS
    |   MENOS
    |   %empty
    ;

expressao:
        INTEIRO
    |   REAL
    |   BOOLEANO
    |   IDENT
    |   ABREPARENT expressao FECHAPARENT
    |   expressao CALC expressao %prec SINAL
    ;

CALC:   MAIS
    |   MENOS
    |   OPERADOR
    ;

condicionais:
        SE ABREPARENT expressao OCONDICIONAL expressao FECHAPARENT X ABRECHAVETA Y FECHACHAVETA X SENAO X ABRECHAVETA Y FECHACHAVETA {printf("\ncondicao if-else Ok"); } /* output para debug */
;


X:      PARAGRAFO X
    |   %empty
    ;

Y:      X instrucoes Y
    |   X
    ;


ciclos:
        ENQUANTO ABREPARENT expressao OCONDICIONAL expressao FECHAPARENT X ABRECHAVETA Y FECHACHAVETA {printf("\nciclo while OK");} /* output para debug */
    |   PARA ABREPARENT atribuicao expressao OCONDICIONAL expressao PV IDENT IGUAL MMV expressao FECHAPARENT X ABRECHAVETA Y FECHACHAVETA {printf("\nciclo for Ok");} /* output para debug */

%%


/* Funcao main para leitura do ficheiro a compilar*/
int main(int argc, char** argv) {
	yyin = fopen(argv[1], "r");

	if (NULL != yyin) {

		yyparse();
		fclose(yyin);
		if (count_error == 0) {
			printf("\nParabens ! Nao foram encontrados erros. \n\n");
		}
		else {
			printf("\n Existe(m) %d erro(s) no ficheiro. \n\n", count_error);
		}
	}
	else {
		printf("\n Impossivel abrir o ficheiro: %s", argv[1]);
        printf("\n A forma a usar: programa ficheiro.extensao\n");
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
        fprintf(stderr,"\nVariavel %s declarada", nome); /* output para debug */
		return i;
	}
    return -1;
}
