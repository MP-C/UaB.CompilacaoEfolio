/* versao 30.04.23 */
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

textoWrite [^"]+
divisaoImpossivel [^0]
espaco [ \S]
paragrafo [\r\n]
comentario (#.*)
identificador [_a-zA-Z\_]+([0-9]?|[_a-zA-Z\_]?)
inteiro [-]?[0-9]+
real [-]?[0-9]+(\.[0-9]+)?
booleano (false)|(true)

%%

"int"           { return INT;}
"float"         { return FLOAT; }
"bool"          {return BOOL;}

"if"            { return SE; }
"else"          { return SENAO; }
"while"         { return ENQUANTO; }
"for"           { return PARA; }
"or"            { return OU; }
"and"           { return E; }
"structs"       { return ESTRUCT; }
"const"         { return CONST; }
"main"          { return MAIN; }
"local"         { return LOCAL; }
"global"        { return GLOBAL; }
"write"         { return ESCREVE; }
"write_all"     { return ESCREVETUDO; }
"write_string"  { return ESCREVESTRING; }
"read"          { return LE; }
"read_all"      { return LETUDO; }
"read_string"   { return LESTRING; }
"pow"           { return EXPOENTE; }
"square_root"   { return RAIZ; }
"gen"           { return GEN; }
"size"          { return SIZE; }
"resize"        { return RESIZE; }

","	            { return(VIRGULA); }
"{"	            { return(ABRECHAVETA); }
"}"	            { return(FECHACHAVETA); }
"("	            { return(ABREPARENT); }
")"	            { return(FECHAPARENT); }
"["             { return(ABREVETOR); }
"]"             { return(FECHAVETOR); }
"="	            { return(IGUAL); }
";"	            { return(PV); }
"."             { return(PF); }
"!"             { return(EXCLAMACAO); }
"<"|">"|"<="|">="|"!="|"=="	{ return(COMPARATIVOS); }

"+"|"-"|"*"|"/"|"%"	{ return (OPERADOR); }











{comentario}  { return(COMENTARIO);}
{espaco}
{paragrafo}   { return(PARAGRAFO); }
{inteiro}     { return(INTEIRO); }
{real}        { return(REAL); }
{booleano}    { return(BOOLEANO); }
{textoWrite}  { return(TEXTOWRITE); }

{identificador}{0,31} {strcpy(yylval.nome_var,yytext); return(IDENT); }
. { yyerror("caractere inesperado"); }

%%