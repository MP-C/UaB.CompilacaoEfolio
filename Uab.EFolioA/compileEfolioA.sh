#bison -dy sintax.y -o sintax.c
#flex lex.l
#g++ sintax.c lex.yy.c -o efolioA
#./efolioA YAILsemErros.txt

# o rm vai ajudar a detetar se existem erros no sintax ou no flex
# o sintax.c já tem o include do lex.yy.c já não precisa de incluir no gcc call
rm sintax.c sintax.h lex.yy.c
bison -dy sintax.y -o sintax.c
flex lex.l
gcc sintax.c -o efolioA
./efolioA YAILsemErros.txt