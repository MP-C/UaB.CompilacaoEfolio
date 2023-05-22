+-------------------------------------------------------+
+        Constituição do grupo de 5 elementos           +
+       Grupo  : Alt + C ++ Elite	                    +
+-------------------------------------------------------+
+ Compilador construido	em C :				            +
+ Nome   : Gonçalo Caraça				                +
+ Numero : 2000130					                    +
+							                            +
+ Nome   : Joana Martins				                +
+ Numero : 2003351					                    +
+							                            +
+ Nome   : Mário Carvalho			                    +
+ Numero : 2000563					                    +
+							                            +
+ Nome   : Inês Oliveira				                +
+ Numero : 2000130					                    +
+ 							                            +
+ Nome   : João Carvalho				                +
+ Numero : 2103537					                    +
+-------------------------------------------------------+


+-------------------------------------------------------+
+                 Conteudo da pasta                     +
+-------------------------------------------------------+
+  1) compileEfolioB.sh - que substitui a insercao 	    +
+     individual de cada comando (com BASH instalado)   +
+  2) lex.l   - ficheiro com especificação lexical   	+
+  2) README.me - Ficheiro de explicações e conteudo	+
+  3) RelatorioEquipa.PDF - Realtório final 		    +
+  4) sintax.y - analise sintatica			            +
+  5) YAILcomErros.txt - ficheiro de testes realizados  +
+	diretamente no compilador		                	+
+  6) YAILsemErros.txt - ficheiro de testes realizados 	+
+	diretamente no compilador			                +
+-------------------------------------------------------+


+-------------------------------------------------------+
+            Instruções para Compilação                 +
+-------------------------------------------------------+
+							                            +
+ Testes realizados em Windows, com recurso aos 	    +
+ comandos seguintes: 					                +
+ para instalar: 					                    +
+     sudo apt-get install flex (--version flex 2.6.4)  +
+     sudo apt-get install bison (--version bison 3.8.2)+
+                                                       +
+ para correr o programa                                +
+    a) $ bison -dy sintatico.y -o sintatico.c		    +
+    b) $ flex lexico.l			                        +
+    c) $ gcc sintax.c yy.lex.c -o efolioB		        +
+ 							                            +
+ Para efeitos de facilidade de execução e de testes,   +
+ foi criado um ficheiro "bash" que executa todos estes +
+ comandos de forma automatisada "./compileEfolioB.sh"	+
+   P.S. -o efolioB corresponde ao <nome executavel> é 	+
+	opcional, caso não execute ficará com o nome de     +
+ 	ficheiro a.out					                    +
+-------------------------------------------------------+


+-------------------------------------------------------+
+            Instruções para Utilização                 +
+-------------------------------------------------------+
+     $ ./efolioB YAILcomErros.txt			            +
+  	  sudo apt-get update                               +
+     $ ./efolioB YAILsemErros.txt			            +
+ 							                            +
+  <YAILcomErros.txt> pode ser substituido por qualquer	+
+     $ ./efolioB					                    +
+   output:						                        +
+          				                                +
+     funcionamento: ./efolioB <ficheiro>               +
+      <ficheiro>     Ficheiro em linguagem YAIL    	+
+-------------------------------------------------------+