import random
import math

n=60

a=[]#[0.3,0.48,0.36,0.01,0.54,0.34,0.96,0.06,0.61,0.85,0.48,0.86,0.14,0.86,0.89,0.37,0.49,0.6,0.04,0.83,0.42,0.83,0.37,0.21,0.9,0.89,0.91,0.79,0.57,0.99,0.95,0.27,0.41,0.81,0.96,0.31,0.09,0.06,0.23,0.77,0.73,0.47,0.13,0.55,0.11,0.75,0.36,0.25,0.23,0.72,0.6,0.84,0.7,0.3,0.26,0.38,0.05,0.19,0.73,0.44]
for t in range(n):
	a.append(random.randrange(0,100,1)/100)
print("Data : ",a)

i=2
m=7

M=int(((n-i)/m))-1

mew=0
for t in range(i-1,len(a)-m,m):
	mew+=a[t]*a[t+m]
mew/=(M+1)
mew-=0.25
print("M : ",M)

delta=math.sqrt(13*M+7)/(12*(M+1))

z=mew/delta
print("Test Statistic :",z)

if(z>-1.96 and z<1.96):
	print("Numbers are Independent")
else:
	print("Numbers are not Independent")