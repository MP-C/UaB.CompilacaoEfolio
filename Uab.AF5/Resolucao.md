1)
Expressão: a * - (b + c)
TAC:
t1 = b + c
t2 = -t1
t3 = a * t2

Assembly:
1.Adição de a e b:
MOV AX, a     ; carregamento do valor de a em AX
ADD AX, b     ; adição de b a AX
MOV t1, AX    ; armazenamento do resultado em t1

2.Adição de c e d:
MOV AX, c     ; carregamento do valor de c em AX
ADD AX, d     ; adição de d a AX
MOV t2, AX    ; armazenamento do resultado em t2

3.Multiplicação de t1 por t2:
MOV AX, t1    ; carregamento do valor de t1 em AX
IMUL AX, t2   ; multiplicação de AX por t2 (signed multiplication)
MOV t3, AX    ; armazenamento do resultado em t3

4.Adição de t3, t1, e t2:
MOV AX, t3    ; carregamento do valor de t3 em AX
ADD AX, t1    ; adição de t1 a AX
ADD AX, t2    ; adição de t2 a AX
MOV t4, AX    ; armazenamento do resultado em t4

2)
Expressão: - (a + b) * (c + d) + (a + b + c)
TAC:
t1 = a + b
t2 = c + d
t3 = t1 * t2
t4 = t3 + t1 + t2

3)
Expressão:
main () {
    int i;
    int a[10];
    i = 1;
    while (i <= 10) {
        a[i] = 0; i = i + 1;
    }
}

TAC:
i = 0
a = new int[10]
i = 1
loop:
t1 = i <= 10
if t1 goto continue
goto end_loop
continue:
a[i] = 0
i = i + 1
goto loop
end_loop: