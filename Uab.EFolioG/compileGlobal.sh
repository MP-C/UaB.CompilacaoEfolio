# para excecutar as novas melhorias
# o rm vai ajudar a detetar se existem erros no sintax ou no flex
# o sintax.c já tem o include do lex.yy.c já não precisa de incluir no gcc call

clear
rm sintaxG.c sintaxG.h lex.yy.c
bison -d sintaxG.y -o sintaxG.c
flex lexG.l
gcc sintaxG.c -o global
./global YAILsemErros.txt