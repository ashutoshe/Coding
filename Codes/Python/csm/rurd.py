import random
import math

n=100

a=[]
for i in range(n):
	a.append(random.randrange(0,100,1)/100)
print("Data : ",a)

counts=[]
for i in range(1,n):
	if(a[i-1]>a[i]):
		counts.append(0)
	else:
		counts.append(1)
print("Runs : ",counts)

x=1
for i in range(len(counts)-1):
	if(counts[i]!=counts[i+1]):
		x+=1
print("No of Runs : ",x)

mean=(2*n-1)/3
sd=math.sqrt((16*n-29)/90)

z=(x-mean)/sd
print("Calculated z : ",z)

if(z<1.96 and z>-1.96):
	print("Numbers are Independent")
else:
	print("Numbers are Not Independent")