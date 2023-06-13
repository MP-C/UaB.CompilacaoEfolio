+-------------------------------------------------------+
+        Constituição do grupo de 5 elementos           +
+       Grupo  : Alt + C ++ Elite	                    +
+-------------------------------------------------------+
+ Compilador construido	em C				            +
+ 			                                            +
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
+  1) compileGlobal.sh - que substitui a insercao 	    +
+     individual de cada comando     			        +
+  2) lexG.l   - ficheiro com especificação lexical   	+
+  3) sintaxG.y - analise sintatica			            +
+  4) YAILcomErros.txt - ficheiro de testes realizados  +
+	diretamente no compilador			                +
+  5) YAILsemErros.txt - ficheiro de testes realizados 	+
+	diretamente no compilador		                	+
+  6) compileEfolioB.sh - que substitui a insercao 	    +
+     individual de cada comando     			        +
+  7) lexB.l   - ficheiro com especificação lexical   	+
+  8) sintaxB.y - analise sintatica			            +
+  9) YAILotimizado.txt - ficheiro                      +
+  10) README.me - Ficheiro de explicações e conteudo	+
+  11) RelatorioEquipa.PDF - Realtório final 		    +
+  12) RelatorioIndividual.PDF - Realtório final 		+
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
+    a) $ bison -d sintaxG.y -o sintaG.c    		    +
+    b) $ flex lexG.l			                        +
+    c) $ gcc sintaxG.c yy.lex.c -o global		        +
+ 							                            +
+ Para efeitos de facilidade de execução e de testes,   +
+ foi criado um ficheiro "bash" que executa todos estes +
+ comandos de forma automatisada "./compileEfolioG.sh"	+
+   P.S. -o efolioG corresponde ao <nome executavel> é 	+
+	opcional, caso não execute ficará com o nome de     +
+ 	ficheiro a.out					                    +
+-------------------------------------------------------+


+-------------------------------------------------------+
+            Instruções para Utilização                 +
+-------------------------------------------------------+
+     $ ./efolioG YAILotimizado.txt			            +
+  	  sudo apt-get update                               +
+ <YAILotimizado.txt> pode ser substituido por qualquer +
+     outro ficheiro que se pretenda utilizar 		    +
+                           				            +
+     $ ./efolioG					                    +
+   output:						                        +
+          				                                +
+     funcionamento: ./efolioG <ficheiro>               +
+                           				            +
+      <ficheiro>     Ficheiro em linguagem YAIL    	+
+-------------------------------------------------------+