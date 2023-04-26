%option noyywrap
%{
  
    #include <string.h>
    #include <stdlib.h>
    /*
        Incluir definicoes criadas pelo bison e exportadas para um ficheiro".h"
    */
    #include "sintax.h"

    // Caracteres invalidos
    void yyerror(char *s); 
%}

divisaoImpossivel [^0]
espaco [ \S]
paragrafo [\r\n]
comentario (#.*)
identificador [_a-zA-Z]+([0-9]?|[_a-zA-Z]?)
inteiro [0-9]+
real [0-9]+(\.[0-9]+)?
booleano (^\W?false)|(^\W?true)

%%

"int"   { return INT;}
"float"    { return FLOAT; }
"bool"  {return BOOL;}


"if"    { return SE;}
"else"  { return SENAO; }
"while" { return ENQUANTO; }
"for"   { return PARA; }
"structs" { return ESTRUCT; }
"const" { return CONST; }
"main" { return MAIN;}
"global"        { return GLOBAL; }
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
";"	{ return(PV); }
"<"|">"|"<="|">="|"!="|"=="	{ return(OCONDICIONAL); }
"+"	{ return(MAIS); }
"-"	{ return(MENOS); }  
"*"|"/"	{ return (OPERADOR); }

{comentario}    { return(COMENTARIO);}
{espaco}
{paragrafo}           { return(PARAGRAFO); }
{inteiro}       { return(INTEIRO); }
{real}          { return(REAL); }
{booleano}      { return(BOOLEANO); }

{identificador}{0,31} {strcpy(yylval.nome_var,yytext); return(IDENT); }

. { yyerror("caracter nao esperado"); }

%%
