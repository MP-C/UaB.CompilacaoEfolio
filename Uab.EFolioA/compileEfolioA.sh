bison -dy sintax.y -o sintax.c
flex lex.l
g++ sintax.c lex.yy.c -o efolioA
./efolioA YAILsemErros.txt

bison -dy sintaxold.y -o sintax.c
flex lex.l
gcc sintax.c lex.yy.c -o efolioA
./efolioA YAILsemErros.txt