ORG 00H
MOV R1,30H
MOV R2,32H
MOV R3,31H
MOV R4,33H

MOV A,R3
MOV B,R4
MUL AB
MOV 43H,A
MOV 42H,B

MOV A,R3
MOV B,R2
MUL AB
MOV 41H,B
ADDC A,42H
MOV 42H,A

MOV A,R1
MOV B,R4
MUL AB
ADDC A,42H
MOV 42H,A
MOV A,B
ADDC A,41H
MOV 41H,A

MOV A,R1
MOV B,R2
MUL AB
ADDC A,41H
MOV 41H,A
MOV A,B
ADDC A,#00H
MOV 40H,A
NOP
END