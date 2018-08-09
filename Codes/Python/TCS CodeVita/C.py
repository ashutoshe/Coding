import math

def isPrime(n):
	if(n%2==0):
		return False;
	else:
		for i in range(3,int(math.sqrt(n))+1,2):
			if(n%i==0):
				return False;
	return True;

def nextPrime(n):
	if(n==1):
		return 2
	#if(n%2==0):
	#	n+=1
	for i in range(n+1,1000000,2):
		if(isPrime(i)):
			return i

n=int(input())

x=[]
y=[]

for i in range(0,n):
	t=list(map(int,list(input("").split(','))))
	x.append(t[0])
	y.append(t[1])
      
s = sorted(zip(x,y))
x,y = map(list, zip(*s))

tx=0
ty=0
tp=2
inc=1
dir=1	
for k in range(0,n):
	while(True):
		ttx=tx
		tty=ty
		ttp=tp

		for i in range(0,inc):
			if(tx==x[k]) and (ty==y[k]):
				break
			tx+=dir
			tp=nextPrime(tp)
			
		for i in range(0,inc):
			if(tx==x[k]) and (ty==y[k]):
				break
			ty+=dir
			tp=nextPrime(tp)
				
		dir*=(-1)
		inc+=1
		if(tx==x[k]) and (ty==y[k]):
			print(tp)
			tx=ttx
			ty=tty
			tp=ttp
			dir*=(-1)
			inc-=1
			break