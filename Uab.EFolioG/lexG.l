/* versao 14.06.23 */
%option noyywrap yylineno
%{

    #include <string.h>
    #include <stdlib.h>

    struct valorTipo {
          int valorInt;         // inteiros
          float valorDecimal;   // reais
          char *valorString;    // variáveis
          char *tipo;           // tipo de variáveis
          char *local;          // local onde variável foi declarada
    };

    #include "sintaxG.h"

    // Caracteres invalidos
    void yyerror(char *s);

%}

divisaoImpossivel [^0]
espaco [ \S]
paragrafo [\r\n]
comentario (#.*)
identificador [_a-zA-Z\_]+([0-9]?|[_a-zA-Z\_]?)
inteiro [-]?[0-9]+
decimal [-]?[0-9]+(\.[0-9]+)?
booleano (false)|(true)

%%

"int"           { return INT;}
"float"         { return FLOAT;}
"bool"          { return BOOL;}

"const"         { return CONST; }
"global"        { return GLOBAL; }
"main"          { return MAIN; }

"if"            { return SE; }
"else"          { return SENAO; }
"while"         { return ENQUANTO; }
"for"           { return PARA; }
"|"             { return OU; }
"&"             { return E; }
"~"             { return NOT; }
"structs"       { return ESTRUTURA; }
"local"         { return LOCAL; }
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

"+"             { return (MAIS); }
"-"             { return (MENOS); }
"*"             { return (MULTIPLICA); }
"/"             { return (DIVIDE); }
"%"             { return (MODULO); }
"<"|">"|"<="|">="|"!="|"=="	{ return(COMPARATIVOS); }

{espaco}
{paragrafo}   { return(PARAGRAFO); }
{comentario}  { return(COMENTARIO); }

{inteiro}       {
                    yylval.valTip.valorString = strdup(yytext);
                    return(INTEIRO);
                }

{booleano}     {
                   yylval.valTip.valorString = strdup(yytext);
                   return(BOOLEANO);
               }

{identificador} {
                    yylval.valTip.valorString = strdup(yytext);
                    return(IDENT);
                }

{decimal}       {
                    yylval.valTip.valorString = strdup(yytext);
                    return(DECIMAL);
                }

. { yyerror("caractere inesperado"); }

%%