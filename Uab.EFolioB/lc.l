/* versao 30.04.23 */
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

    #include "sc.h"

    // TODO: ELIMINIAR snippet
    // Caracteres invalidos
    void yyerror(char *s);

%}

espaco [ \S]
paragrafo [\r\n]
identificador [_a-zA-Z\_]+([0-9]?|[_a-zA-Z\_]?)
inteiro [-]?[0-9]+
decimal [-]?[0-9]+(\.[0-9]+)?

%%

"int"           {
                    yylval.valTip.valorString= strdup(yytext);
                    yylval.valTip.tipo = strdup("tipoVar");
                    return INT;
                }

"float"         {
                    yylval.valTip.valorString= strdup(yytext);
                    yylval.valTip.tipo = strdup("tipoVar");
                    return FLOAT;
                }

"const"         { return CONST; }

"write"         { return ESCREVE; }
"write_all"     { return ESCREVETUDO; }
"write_string"  { return ESCREVESTRING; }
"read"          { return LE; }
"read_all"      { return LETUDO; }
"read_string"   { return LESTRING; }

","	            { return(VIRGULA); }
"{"	            { return(ABRECHAVETA); }
"}"	            { return(FECHACHAVETA); }
"="	            { return(IGUAL); }
";"	            { return(PV); }
"."             { return(PF); }

"+"             { return (MAIS); }
"-"             { return (MENOS); }
"*"             { return (MULTIPLICA); }
"/"             { return (DIVIDE); }
"%"             { return (MODULO); }



{espaco}
{paragrafo}   { return(PARAGRAFO); }

{inteiro}       {
                    yylval.valTip.valorInt = atoi(yytext);
                    yylval.valTip.tipo = strdup("inteiro");
                    return(INTEIRO);
                }

{identificador} {
                    yylval.valTip.valorString = strdup(yytext);
                    yylval.valTip.tipo = strdup("string");
                    return(IDENT);
                }

{decimal}          {
                    yylval.valTip.valorDecimal= (float)atof(yytext);
                    yylval.valTip.tipo = strdup("decimal");
                    return(DECIMAL);
                }


. { yyerror("caractere inesperado"); }

%%