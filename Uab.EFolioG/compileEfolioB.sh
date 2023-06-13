# Para aplicar os testes no documento YAILsemErros.txt
# O rm vai evitar a ocorrencia de erros no sintax ou no flex apagando-os
# o sintax.c já tem o include do lex.yy.c já não precisa de incluir no gcc call
clear
rm sintaxB.c sintaxB.h lex.yy.c
bison -d sintaxB.y -o sintaxB.c
flex lexB.l
gcc sintaxB.c -o efolioB
./efolioB YAILsemErros.txt