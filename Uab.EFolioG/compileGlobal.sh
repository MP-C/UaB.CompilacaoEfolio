# Para excecutar as novas otimizações
# O rm vai evitar a ocorrencia de erros no sintax ou no flex apagando-os
# Escolher o comando adequado para realizar os testes Otimizados
clear
rm sintaxG.c sintaxG.h lex.yy.c
bison -d sintaxG.y -o sintaxG.c
flex lexG.l
gcc sintaxG.c -o global
./global YAILoptimizado.txt