ORG 00H
MOV B,#00H		
MOV R1,#50H		;starting memory location
MOV R3,#08H		;no of bytes in array
UP: CJNE @R1, #96H ,DOWN ;96 is the value to be checked (convert to hex)
INC B
DOWN: INC R1
DJNZ R3,UP
MOV 15H,B ;15 is the address where count is to be saved
SJMP TP
TP: NOP
END