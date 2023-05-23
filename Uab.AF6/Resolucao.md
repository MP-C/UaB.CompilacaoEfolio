"assembly" do processador
b = 7 - 3
t1 = b * 2
t2 = a + t1
t3 = t2 * b
t4 = t3 / 2
t5 = t4 + c
t6 = t2 * b
d = t6 + t4

; Definir variáveis
b DW 0
t1 DW 0
t2 DW 0
t3 DW 0
t4 DW 0
t5 DW 0
t6 DW 0
d DW 0
a DW 0
c DW 0

; Instruções Assembly
b = 7 - 3
MOV AX, 7    ; AX = 7
SUB AX, 3    ; AX = 7 - 3
MOV b, AX    ; b = AX

t1 = b * 2
MOV AX, b    ; AX = b
MOV BX, 2    ; BX = 2
MUL BX       ; AX = AX * BX
MOV t1, AX   ; t1 = AX

t2 = a + t1
MOV AX, a    ; AX = a (supondo que a está previamente definida)
ADD AX, t1   ; AX = AX + t1
MOV t2, AX   ; t2 = AX

t3 = t2 * b
MOV AX, t2   ; AX = t2
MOV BX, b    ; BX = b
MUL BX       ; AX = AX * BX
MOV t3, AX   ; t3 = AX

t4 = t3 / 2
MOV AX, t3   ; AX = t3
MOV BX, 2    ; BX = 2
DIV BX       ; AX = AX / BX
MOV t4, AX   ; t4 = AX

t5 = t4 + c
MOV AX, t4   ; AX = t4
MOV BX, c    ; BX = c (supondo que c está previamente definido)
ADD AX, BX   ; AX = AX + BX
MOV t5, AX   ; t5 = AX

t6 = t2 * b
MOV AX, t2   ; AX = t2
MOV BX, b    ; BX = b
MUL BX       ; AX = AX * BX
MOV t6, AX   ; t6 = AX

d = t6 + t4
MOV AX, t6   ; AX = t6
MOV BX, t4   ; BX = t4
ADD AX, BX   ; AX = AX + BX
MOV d, AX    ; d = AX