+-------------------------------------------------------+
+         Constituição do grupo de 5 elementos          +
+-------------------------------------------------------+
+ Compilador construido	em C				+
+ Grupo  : Alt + C ++ Elite				+
+ Nome   : Gonçalo Caraça				+
+ Numero : 2000130					+
+							+
+ Nome   : Joana Martins				+
+ Numero : 2003351					+
+							+
+ Nome   : Mário Carvalho				+
+ Numero : 2000563					+
+							+
+ Grupo  : The Optimization Optimists			+
+ Nome   : Inês Oliveira				+
+ Numero : 2000130					+
+ 							+
+ Nome   : João Carvalho				+
+ Numero : 2103537					+
--------------------------------------------------------+


+-------------------------------------------------------+
+                 Conteudo da pasta                     +
+-------------------------------------------------------+
+  1) compileEfolioA.sh - que substitui a insercao +
+     individual de cada comando     +
+  2) lex.l   - ficheiro com especificação lexical   +
+  3) lex.yy.c - analisador lexical resultante:   	+
+  4) README.me - Ficheiro de explicações e conteudo	+
+  5) RelatorioEquipa.docx - Realtório final 		+
+  6) sintax.y - analise sintatica
+  7) sintax.c - gerado pelo Bison
+  8) sitax.h - gerado pelo Bison
+  9) YAILcomErros.txt - ficheiro de testes realizados +
+	diretamente no compilador			+
+  10) YAILsemErros.txt - ficheiro de testes realizados +
+	diretamente no compilador			+
--------------------------------------------------------+


+-------------------------------------------------------+
+            Instruções para Compilação                 +
+-------------------------------------------------------+
+							+
+ Testes realizados em Windows, com recurso aos 	+
+ comandos seguintes: 					+
+ para instalar: 					+
+  	  sudo apt-get update                           +
+     sudo apt-get install flex (--version flex 2.6.4)  +
+     sudo apt-get install bison (--version bison 3.8.2)+
+                                                       +
+ para correr o programa                                +
+    a) $ bison -dy sintatico.y -o sintatico.c		+
+    b) $ flex lexico.l			                +
+    c) $ gcc sintax.c yy.lex.c -o efolioA		+
+ 							+
+ Para efeitos de facilidade de execução e de testes,   +
+ foi criado um ficheiro "bash" que executa todos estes +
+ comandos de forma automatisada "./compileEfolioA.sh"	+
+   P.S. -o efolioA corresponde ao <nome executavel> é 	+
+	opcional, caso não execute ficará com o nome de +
+ 	ficheiro a.out					+
--------------------------------------------------------+


+-------------------------------------------------------+
+            Instruções para Utilização                 +
+-------------------------------------------------------+
+ 							+
+     $ ./efolioA YAILcomErros.txt			+
+     $ ./efolioA YAILsemErros.txt			+
+ 							+
+  <YAILcomErros.txt> pode ser substituido por qualquer	+
+     outro ficheiro que se pretenda utilizar 		+
--------------------------------------------------------+