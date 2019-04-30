import random

n=100

a=[]
for i in range(n):
	a.append(random.randrange(0,100,1)/100)
print("Data : ",a)

a.sort()

Oi=[0,0,0,0,0,0,0,0,0,0]
t=0
p=0.1
for i in a:
	if(i>p):
		p+=0.1
		t+=1
	Oi[t]+=1

print(Oi)

Ei=[10,10,10,10,10,10,10,10,10,10]

chi=0
for i in Oi:
	chi+=(10-i)**2/10
print("Test Statistic :",chi)

if(chi<16.92):
	print("Numbers are Uniformely Distributed")
else:
	print("Numbers are not Uniformely Distributed")