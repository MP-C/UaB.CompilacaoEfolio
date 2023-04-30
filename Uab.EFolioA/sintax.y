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
    */

    struct {
        char nome [33];
    }
    vars[100];

    int debug=0;
    void debuf(char*);

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

%token	INT
%token	FLOAT
%token	BOOL

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
    |   main
    |   segunda_camada
    ;

segunda_camada:
	PARAGRAFO
    |   declara_variavel
    |   comentario
    |   metodos
    |   chama_funcao segunda_camada
    |	declara_funcao
    |   %empty
    ;

/*       COMENTARIO => [#].* \n         */
comentario:
        COMENTARIO {printf("Comentario encontrado\n");}
	;

structs:
        ESTRUCT {printf("Structs encontrado\n");} ABRECHAVETA structs_corpo FECHACHAVETA
    ;

structs_corpo:
        PARAGRAFO structs_corpo
    |   comentario structs_corpo
    |   IDENT ABRECHAVETA declara_variavel FECHACHAVETA PV structs_corpo
    |   vetor
    |   structs  {printf("structs_in_structs encontrado\n");}
    |   %empty
    ;

/*      CONST => const {declaracao_atribuicao}      */
constante:
        CONST ABRECHAVETA declaracao_atribuicao FECHACHAVETA{printf("Constante encontrada\n");}
    ;

declaracao_atribuicao:
        comentario declaracao_atribuicao
    |   PARAGRAFO declaracao_atribuicao
    |   tipo IDENT IGUAL atributo declaracao_atribuicao
    |   tipo IDENT IGUAL metodos PV declaracao_atribuicao /* int x = read();*/
    |   IDENT IGUAL metodos PV declaracao_atribuicao /* x = read(); */
    |   %empty
    ;

atributo:
       valor PV
    |  valor VIRGULA IDENT IGUAL atributo
    ;

valor:
        INTEIRO
    |   REAL
    |   BOOLEANO
    ;

/*          GLOBAL => global { declar_varia }       */
global:
        GLOBAL ABRECHAVETA declara_variavel FECHACHAVETA {printf("Global encontrado\n");}
    ;

declara_variavel:
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

/*          MAIN => main () bool { corpo_main }     */
main:
        MAIN ABREPARENT FECHAPARENT BOOL ABRECHAVETA funcao_corpo FECHACHAVETA segunda_camada {printf("\nMain encontrado\n");}
    ;

funcao_corpo:
	PARAGRAFO
    |	comentario
    |	expressao
    |   condicional
    |   write
    |   %empty
    ;


expressao: IDENT igual;

igual:
        IGUAL expressao_continuacao // a = ..
    |   IGUAL OPERADOR expressao_continuacao // a =+ ..
    |	OPERADOR OPERADOR // a++
    ;

expressao_continuacao:
        valores OPERADOR expressao_continuacao
    |   valores PV
    ;

valores:
        INTEIRO
    |   REAL
    |   BOOLEANO
    |   IDENT
    ;

condicional:
    SE ABREPARENT condicoes FECHAPARENT ABRECHAVETA funcao_corpo FECHACHAVETA
    ;

condicoes:
    |   IDENT OCONDICIONAL valores ou_e
    |   IDENT OCONDICIONAL valores
    ;

ou_e:
        OU condicoes
    |   E condicoes
    ;

// isto é só para conseguir correr
declara_funcao: %empty;
instrucoes: %empty;
chama_funcao: %empty;

metodos:
	size
    |   resize
    |	expoente
    |	raiz
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
/*  |   structs_in_structs*/
    ;

calculos:
        ident_ou_inteiro operacoes ident_ou_inteiro  {printf("Calculos encontrados\n");}
    ;

raiz:
        RAIZ ABREPARENT raiz_variavel  FECHAPARENT PV {printf("Metodo RAIZ encontrado\n");}
    ;

raiz_variavel:
	INTEIRO
    |   EXPOENTE
    ;

ident_ou_inteiro:
        IDENT
    |   INTEIRO
    ;

operacoes:
   	MAIS
    |   MENOS
    |   OPERADOR
    ;

write:
	ESCREVE ABREPARENT IDENT FECHAPARENT PV
;

write_all:
	ESCREVETUDO ABREPARENT IDENT FECHAPARENT PV
;

write_string:
	ESCREVESTRING ABREPARENT IDENT FECHAPARENT PV
;

read:
	LE ABREPARENT FECHAPARENT PV
;

read_all:
	LETUDO ABREPARENT FECHAPARENT PV
;

read_string:
	LESTRING ABREPARENT FECHAPARENT PV
;

/*             Exemplo: TIPO igual ao mesmo valor int = INTEIRO        */
vetor:
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
	GEN ABREPARENT INTEIRO VIRGULA sinal INTEIRO FECHAPARENT {printf("Gerador encontrado\n");}
    ;

sinal:
        MENOS
   |    %empty
   ;

/***	ESTAMOS AQUI!!!		***/
atribuicao:
        IDENT IGUAL expressao PV {$$ = le_var($1);}
;

expressao:
        INTEIRO
    |   REAL
    |   BOOLEANO
    |   IDENT
    |   ABREPARENT expressao FECHAPARENT
    |   expressao operacoes expressao %prec SINAL
    ;


condicionais:
        SE ABREPARENT expressao OCONDICIONAL expressao FECHAPARENT X ABRECHAVETA Y FECHACHAVETA X SENAO X ABRECHAVETA Y FECHACHAVETA {printf("\ncondicao if-else Ok"); } /* output para debug */
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
        ENQUANTO ABREPARENT expressao OCONDICIONAL expressao FECHAPARENT X ABRECHAVETA Y FECHACHAVETA {printf("\nciclo while OK");} /* output para debug */
    |   PARA ABREPARENT atribuicao expressao OCONDICIONAL expressao PV IDENT IGUAL     expressao FECHAPARENT X ABRECHAVETA Y FECHACHAVETA {printf("\nciclo for Ok");} /* output para debug */

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
        fprintf(stderr,"Variavel %s declarada\n", nome); /* output para debug */
		return i;
	}
    return -1;
}

/* funcao para apresentar debug */
void apresenta_debug(char* str){
	if(debug==1) {
		printf("%s",str);
	}
}
