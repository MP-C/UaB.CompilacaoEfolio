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

	/* Estrutura para guardar variáveis com nome, tipo e local onde foi declarada */
    struct {
        char nome [33];
        char tipo [6];
        char local [8];
    }
    vars[100];

    int debug=0;
    char* msg;
    void debuf(char*);
    void bashInfo(char*);
    void adiciona_var(const char*, const char*, const char*);

    int existe_var(const char*, const char*, const char*);
    void apresenta_debug(char*);

    /* TODO :  APAGAR ESTE COMENTARIO ?!?!?  - - */
    /*int debug=0;*/
    int variaveis_criadas=0;

    int vars_preenchidas=0;
    int le_var(const char *nome);
    int encontra_var(const char *nome, int adicionar);
%}

%union
     {
        char nome_var[33];
        int tipoint;
     }

%token<nome_var> IDENT
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
%token NOT
%token ESTRUTURA
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
// %token OPERADOR // TODO: PARA APAGAR
//%token OPERADORLOGICO// TODO: PARA APAGAR
%token COMENTARIO
%token PARAGRAFO
%token INTEIRO
%token REAL
%token BOOLEANO
%start input

%token MAIS /* TODO : OPERADOR SUBSTITUIR NOME E CODIGO */
%token MENOS
%token MULTIPLICA
%token DIVIDE
%token MODULO
//%token INCREMENTO // TODO: PARA APAGAR  // Antes de + : "++"            { return (INCREMENTO); }
//%token DECREMENTO // TODO: PARA APAGAR  // Antes de + : "--"            { return (DECREMENTO); }

%token empty /* TODO: ANTES NÃO EXISTIA, AGORA ESTÁ AQUI E TEM QUE ESTAR PARA FUNCIONAR PQ???*/

/* Associatividade de operadores */
// %precedence MENOS // TODO: PARA QUE SERVE?
%left  MAIS MENOS
%left  MULTIPLICA DIVIDE
%right COMENTARIO
/*%nonassoc  SINAL  // TODO: PODE DESAPARECER? O QUE FAZ AQUI?*/
%%

input: // Para começar a ler um ficheiro
	input programa
    |   vazio
    ;
vazio:
	%prec empty // TODO: Substitui a traducao do simbolo de percentagem
    ;
comentario: // COMENTARIO => [#].* \n, pois começam com o símbolo # e vão até ao fim da linha
        COMENTARIO {printf("Comentario encontrado\n");}
    ;
// Para ser lida cada linha
programa: // Atribuição do esquema geral de um programa em YAIL - 0/6 partes
        estructs_inicio  {}
    |   error PARAGRAFO{ yyerrok; }
    ;

/*
primeira_camada: // Atribuição do esquema geral de um programa em YAIL
        PARAGRAFO primeira_camada {printf("Paragrafo primeira camada encontrado\n");}
    |   comentario primeira_camada {printf("Comentario de primeira camada encontrado\n");}
    |   estructs {printf("Estruturas encontrado\n");}
    |   constante {printf("Constante encontrado\n");}
    |   global {printf("Global encontrado\n");}
    |   main {printf("Main encontrado\n");}
    | 	vazio
    ;
*/
comentario: // COMENTARIO => [#].* \n, pois começam com o símbolo # e vão até ao fim da linha
        COMENTARIO {printf("Comentario encontrado\n");}
    ;

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

/* NOVO ENUNCIADO efolioB
estruct_dentro_estruct:
	IDENT ABRECHAVETA IDENT primeira_variavel FECHACHAVETA PV
    ;*/
/*
estruct_primeiro_termo:
	tipo variavel_estruct PV
    ;

estruct_segundo_termo:
        VIRGULA primeira_variavel
    |   vetor
    |   PV
    ;
*/

tipo:
        INT {printf("Valor INTEIRO encontrado\n");} // Valores Inteiros
    |   FLOAT {printf("Valor FLOAT encontrado\n");} // Valores Reais
    |   BOOL {printf("Valor BOLEANO encontrado\n");} // Valores Boleanos
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

// Início Constante
constante_inicio: // Atribuição do esquema geral de um programa em YAIL- 3/6
        PARAGRAFO constante global_inicio {printf("Paragrafo de Constante encontrado\n");}
    |   comentario constante global_inicio {printf("Comentario de Constante encontrado\n");}
    |	global_inicio
    | 	vazio
    ;
constante:  // CONST => const {declaracao_atribuicao}, pois é a definição das constantes
        CONST ABRECHAVETA declaracao_atribuicao FECHACHAVETA fim_linha {printf("Constante encontrado\n");}
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

// Início Global
global_inicio: // Atribuição do esquema geral de um programa em YAIL- 4/6
        PARAGRAFO global main_inicio {printf("Paragrafo de Global encontrado\n");}
    |   comentario global main_inicio {printf("Comentario de Global encontrado\n");}
    |	main_inicio
    | 	vazio
    ;
global: // GLOBAL => global { com_global_corpo_proprio }, pois é a definição das variáveis globais
        GLOBAL ABRECHAVETA global_corpo FECHACHAVETA {printf("GLobal encontrado\n");}
    ;
global_corpo:
	PARAGRAFO global_corpo
    |	comentario global_corpo
    |	declara_variavel global_corpo
    |	tipo IDENT IGUAL metodos global_corpo
    |	expressao global_corpo
    |	vazio
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