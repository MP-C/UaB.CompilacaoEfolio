flex lex.l
bison -dy sintax.y -o sintax.c
g++ sintax.c lex.yy.c -o efolioA
./efolioA YAILsemErros.txt