# o rm vai ajudar a detetar se existem erros no sintax ou no flex
# o sintax.c já tem o include do lex.yy.c já não precisa de incluir no gcc call
clear
rm sintaxB.c sintaxB.h lex.yy.c
bison -d sintaxB.y -o sintaxB.c
flex lexB.l
gcc sintaxB.c -o efolioB
./efolioB YAILsemErros.txt

