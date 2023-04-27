+-------------------------------------------------------+
+         Constituição do grupo de 5 elementos          +
+-------------------------------------------------------+
+ Compilador construido	em C				+
+ Grupo  : Alt + C ++ Elite				+				+
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

|| + PARA RELATORIO ||
+ explicar como se considerou o valor interno do vetor ? sem ou com letras?
+ Parte de sintatica VS parte de Funcionamento (EfolioB)

+-------------------------------------------------------+
+                 Conteudo da pasta                     +
+-------------------------------------------------------+
+  1) lexico.l   - ficheiro com especificação lexical   +
+  2) lexco.yy.c - analisador lexical resultante:   	+
+  3) README.txt - Ficheiro de explicações e conteudo	+
+  4) RelatorioEquipa.docx - Realtório final 		+
+  5) YAILcomErros.txt  - ficheiro de testes realizados +
+	diretamente no compilador			+
+  6) YAILsemErros.txt  - ficheiro de testes realizados +
+	diretamente no compilador			+
--------------------------------------------------------+


+-------------------------------------------------------+
+            Instruções para Compilação                 +
+-------------------------------------------------------+
+							+
+ Testes realizados em Windows, com recurso aos 	+
+ comandos seguintes: 					+
+ para instalar: 					+
+  	  sudo apt-get update                               *
+     sudo apt-get install flex (--version flex 2.6.4)  +
+     sudo apt-get install bison (--version bison 3.8.2)+
+                                                       +
+ para correr o programa                                +
+    a) $ flex lexico.l			                		+
+    b) $ bison -dy sintatico.y -o sintatico.c		    +
+    c) $ gcc sintax.c yy.lex.c -o efolioA		        +
+ 							                            +
+ Para efeitos de facilidade de execução e de testes,   +
+ foi criado um ficheiro "bash" que executa todos estes +
+ comandos de forma automatisada "./compileEfolioA.sh"	+
+							+
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
+     outro ficheiro que se pretenda compilar 		+
--------------------------------------------------------+