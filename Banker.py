avail = []
namer = []
namep = []

nor=int(input("Enter the no of Resources : "))

for res in range(nor):
	name += input("Enter name of Resourse "+(res+1))
	avail += int(input("Enter Instances Available of Resource "+(res+1)))

nop = int(input("Enter the no of Processes : "))

for pro in range(nop):
	namep += input("Enter name of Process "+(res+1))
	for res in range(nor):
		temp=int(input("How many Instances of Resource "+namer[res]+ " does "+namep[nop]+" Require : "))
		if(temp>0 and avail[nor]>=temp):
			avail[nor]-=temp
		elif(temp>0 and avail[nor]<temp):
			print("Cant add Process since no more Instances of Resource "+namer[res]+" Available")
			break;
		else:
			print("Value cant be negative.Considered 0")

while(True)
	ch=int(print("\n1.Add Process\n2.Remove Process\n3.Display Available Resources\n4.Quit"))
	