%{

    #include <iostream>
    #include <fstream>
    #include "sintax.h"

    using namespace std;

    // Apresenta erro
    void ApresentaErro();

%}

impossivel [^0]
espaco [ \t]
fim [\r\n]
comentario [#]
identificador [_a-zA-Z]+([0-9]?|[_a-zA-Z]?)
inteiro [0-9]+
real [0]|((|[-])[0-9]+|\.[0-9]+)
booleano (^\W?false)|(^\W?true)

outroreal \b\d+(\.\d+)?\b

%%

"int"   {return INT;}
"float" {return FLOAT;}
"bool"  {return BOOL;}


"if"            { return SE; }
"else"          { return SENAO; }
"while"         { return ENQUANTO; }
"for"           { return PARA; }
"structs"       { return ESTRUCT; }
"const"         { return CONSTANTE; }
"global"        { return GLOBAL; }
"main"          { return MAIN; }
"local"         { return LOCAL; }
"write"         { return ESCREVE; }
"write_all"     { return ESCREVETUDO; }
"write_string"  { return ESCREVESTRING; }
"read"          { return LE; }
"read_all"      { return LETUDO; }
"read_string"   { return LESTRING; }
"pow"           { return EXPOENTE; }
"square_root"   { return RAIZ; }


","	{ return(VIRGULA); }
"{"	{ return(ABRECHAVETA); }
"}"	{ return(FECHACHAVETA); }
"("	{ return(ABREPARENT); }
")"	{ return(FECHAPARENT); }
"="	{ return(IGUAL); }
";"	{ return(PONTOEVIRGULA); }
"<"|">"|"<="|">="|"=="|"!="	{ return(CONDICIONAL); }
"+"	{ return(MAIS); }
"-"	{ return(MENOS); }
"*" { return(VEZES); }
"/" { return(DIVIDE); }


{impossivel}    { return(IMPOSSIVEL); }
{espaco}        { return(ESPACO);}
{fim}           { return(FIM); }
{comentario}    { return(COMENTARIO); }
{inteiro}       { return(INTEIRO); }
{real}          { return(REAL); }
{booleano}      { return(BOOLEANO); }


%%

void ApresentaErro(){
    cout << "caracter inesperado." << endl;
}