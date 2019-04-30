import random
import math

n=10

x=[]
y=[]
for i in range(n):
	x.append(random.randrange(0,10,1))
	y.append(random.randrange(100,1000,1))
print("X :",x,"\nY :",y)

sumxsq=0
sumysq=0
sumxy=0
meanx=0
meany=0
for i in range(n):
	sumxsq+=x[i]**2
	sumysq+=y[i]**2
	sumxy+=x[i]*y[i]
	meanx+=x[i]
	meany+=y[i]
meanx/=n
meany/=n
meanxy=meanx*meany

sdx=math.sqrt((sumxsq-n*meanx**2)/(n-1))
sdy=math.sqrt((sumysq-n*meany**2)/(n-1))

cov=(sumxy-n*meanx*meany)/(n-1)
print("Covaraince :",cov)

cor=cov/(sdx*sdy)
print("Corelation :",cor)
