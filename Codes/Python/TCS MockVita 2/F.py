import math
import itertools

temp=list(map(int,list(input("").split(' '))))

n=temp[0]
k=temp[1]

x=list(map(int,list(input("").split(' '))))

p=1
for i in range(0,n):
	p*=x[i]

div=[]
for i in range (1,p+1):
	if(p%i==0):
		div.append(i)

count=0
for t in itertools.combinations_with_replacement(div,k):
	tp=1
	for i in t:
		tp*=i
	if(p==tp):
		count+=1
			
print(count,end='')