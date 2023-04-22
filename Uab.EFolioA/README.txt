+-------------------------------------------------------+
+         Constituição do grupo de 5 elementos          +
+-------------------------------------------------------+
+ Compilador construido	em C				+
+ Grupo  : Alt + C ++ Elite				+					+
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
+  1) lex.l      - ficheiro com especificação lexical	+
+  2) lex.yy.c   - analisador lexical resultante: 	+
+  3) README.txt - Ficheiro de explicações e conteudo	+
+  4) RelatorioEquipa.docx - Realtório final 		+
+  5) sint.tab.c - analisador sintatico resultante	+
+  6) sint.tab.h - analisador sintatico para 		+
+ 	reconhecimento dos elementos lexicais		+
+  7) sint.y     - ficheiro com especificação sintatica	+
+  8) YAILcomErros.txt  - ficheiro de testes realizados +
+	diretamente no compilador			+
+  9) YAILsemErros.txt  - ficheiro de testes realizados +
+	diretamente no compilador			+
--------------------------------------------------------+


+-------------------------------------------------------+
+            Instruções para Compilação                 +
+-------------------------------------------------------+
+							+
+ Testes realizados em Windows, com recurso aos 	+
+ comandos seguintes: 					+
+    a) $ bison -dy sint.y -o sint.tab.c		+
+    b) $ flex lex.l 					+
+    c) $ gcc sint.tab.c lex.yy.c -o efolioA		+
+ 							+
+   P.S. -o <nome executavel> é opcional, caso não	+
+   execute ficará com o ficheiro a.out			+
--------------------------------------------------------+


+-------------------------------------------------------+
+            Instruções para Utilização                 +
+-------------------------------------------------------+
+ 							+
+     $ ./efolioA testeEFA.txt				+
+ 							+
+     <testeEFA.txt> pode ser substituido por qualquer	+
+     outro ficheiro que se pretenda compilar 		+
--------------------------------------------------------+