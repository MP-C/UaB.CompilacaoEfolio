# para excecutar as novas melhorias
# o rm vai ajudar a detetar se existem erros no sintax ou no flex
# o sintax.c já tem o include do lex.yy.c já não precisa de incluir no gcc call

clear
rm sintaxOtimizado.c sintaxOtimizado.h lex.yy.c
-bash: ./otimizado: No such file or directory
bison -d sintaxOtimizado.y -o sintaxOtimizado.c
flex lexOtimizado.l
gcc sintaxOtimizado.c -o otimizadoB
./otimizado t.txt