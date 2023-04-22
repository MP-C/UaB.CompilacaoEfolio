flex lexico.l
bison -dy sintatico.y -o sintatico.c
gcc sintatico.c yy.lexico -o efolioA