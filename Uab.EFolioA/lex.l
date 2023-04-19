%{

    #include <iostream>
    #include <fstream>
    #include "sintax.h"

    using namespace std;

    // Apresenta erro
    void ApresentaErro();

%}

espaco [ \t]
fim [\r\n]
numeros [0-9]+
vouf    [true][false]
inteiro {numeros}
real {numeros}+\.{numeros}+
booleano {vouf}

%%

"int"   {return INT;}
"float" {return FLOAT;}
"bool"  {return BOOL;}


"if"    { return SE; }
"else"  { return SENAO; }
"while" { return ENQUANTO; }
"for"   { return CADA; }


","	{ return(VIRGULA); }
"{"	{ return(ABRECHAVETA); }
"}"	{ return(FECHACHAVETA); }
"("	{ return(ABREPARENT); }
")"	{ return(FECHAPARENT); }
"="	{ return(IGUAL); }
";"	{ return(PV); }
"<"|">"|"<="|">="|"!="|"=="	{ return(OCONDICIONAL); }
"+"	{ return(MAIS); }
"-"	{ return(MENOS); }
"*"|"/"	{ return (OPERADOR); }


{espaco}
{fim}       { return(FIM); }
{inteiro}   { return(INTEIRO); }
{real}      { return(REAL); }
{booleano}  { return(BOOLEANO); }


%%

void ApresentaErro(){
    cout << "caracter inesperado!" << endl;
}