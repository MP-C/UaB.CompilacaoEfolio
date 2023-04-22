%{
    #include <iostream>
    #include <fstream>

    using namespace std;

    extern int yylex(void);

    void yyerror(string s);
    int count_error=0;

    struct {
        string nome;
        
    } variaveis[200];

    int debug = 0;
    int vars_preenchidas=0;
    int le_var(const string nome);
    int encontra_var(const string nome, int add);
    void adddebug(string);
%}

%union{
    string nome_var;
    int tipoint;
}

%token IDENT
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
        input palavra
    |   FIM
    ;

palavra:
        FIM
    |   esquema FIM
    |   error FIM{ yyerrok; }
    ;

esquema:
        comentario  /* # comentário */
    |   constante   /* const{} */
    |   estruct     /* structs{} */
    |   global      /* global{} */
    |   main        /* main() */
    ;

comentario:
    COMENTARIO FIM /* # */ { adddebug("comentario"); }
    ;

constante:
        CONSTANTE ABRECHAVETA declaracao FECHACHAVETA  /* const { } */ { adddebug("constante"); }
        CONSTANTE ABRECHAVETA constante FECHACHAVETA   /* const { const{ float a }} */ { adddebug("comentario"); }
    ;

estruct:
    ESTRUCT ABRECHAVETA declaracao FECHACHAVETA        /* strcut { declaracao } */ { adddebug("structs"); }
    ;

declaracao:
        IDENT ABRECHAVETA variavel FECHACHAVETA PONTOEVIRGULA   /* point2D {int a variavel};  */ { adddebug("declaracao"); }
    ;

variavel:
        tipo IDENT extra /* float x,y,z; */ { adddebug("variavel"); }
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

int main(int argc, char** argv)
{
    /* pede ao utilizador para escolher o nível de debug */
    while(1)
    {
        cout << "nivel de debug?" << endl
            << "0 - so contagem de erros" << endl
            << "1 - detalhe de linhas lidas" << endl;
        cin >> debug;
        if(debug==0 || debug==1)
            break;
        cout << "nivel errado (0 ou 1)" << endl << endl;
    }
    /* le ficheiro */
    ifstream ficheiro(argv[1]);
    string linha;
    yyparse();
    while(getline(ficheiro,linha))
    {
        if(debug==0)
        {
            if(count_error==0)
                cout << endl << "0 erros encontrados" << endl;
            else
                cout << endl << count_error << " erros encontrados" << endl;
        }
    }    
    
    
}

void debug(string mensagem)
{
    if(debug!=0)
        cout << mensagem << endl;
}

void yyerror(string s)
{
    count_error++;
}