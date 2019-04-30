import random
import math

n=100

a=[]
for i in range(n):
	a.append(random.randrange(0,100,1)/100)
print("Data : ",a)

counts=[]
n1=0
n2=0
for i in range(n):
	if(a[i]<0.495):
		counts.append(0)
		n1+=1
	else:
		counts.append(1)
		n2+=1
print("Runs : ",counts)
print("Below Runs : ",n1)
print("Above Runs : ",n2)

x=1
for i in range(len(counts)-1):
	if(counts[i]!=counts[i+1]):
		x+=1
print("No of Runs : ",x)

mean=(2*n1*n2/n)+0.5
sd=math.sqrt(2*n1*n2*(2*n1*n2-n)/(n*n*(n-1)))

z=(x-mean)/sd
print("Calculated z : ",z)

if(z<1.96 and z>-1.96):
	print("Numbers are Independent")
else:
	print("Numbers are Not Independent")