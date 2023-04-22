flex lexico.l
bison -dy sintatico.y -o sintatico.c
g++ sintatico.c yy.lexico -o efolioA