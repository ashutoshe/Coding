import random

chk=0
rock=0
paper=0
scissor=0

while(True):

	y=["rock","paper","scissor"];

	x=input("rock ,paper or scissor : ")
	x=x.lower()
	if(x=="rock"):
		rock+=1
	elif(x=="scissor"):
		scissor+=1
	elif(x=="paper"):
		paper+=1
	
	if(x not in y):
		print("Wrong Input")
		continue
	
	y=random.choice(y);

	if (chk>3):
		if(rock>paper+scissor):
			y="paper"
		elif(paper>rock+scissor):
			y="scissor"
		elif(scissor>rock+paper):
			y="rock"

	if(x==y):
		print("TIE")
	elif((x=="rock" and y=="scissor") or (x=="scissor" and y=="paper") or (x=="paper" and y=="rock")):
		print("YOU WIN")
	else:
		print("YOU LOSE")
	chk+=1;