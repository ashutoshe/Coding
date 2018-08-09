

t=list(map(int,list(input("").split(','))))
n=t[0]
m=t[1]
k=t[2]

x=[]
y=[]
for i in range(0,k):
	t=list(map(int,list(input("").split(','))))
	x.append(t[0])
	y.append(t[1])
	
count=0
for i in range(0,m):
	for j in range(0,n):
		fastest=abs(x[0]-i)+abs(y[0]-j)
		for t in range(1,k):
			if((abs(x[t]-i)+abs(y[t]-j))<fastest):
				fastest=abs(x[t]-i)+abs(y[t]-j)
		
		tc=0
		for t in range(0,k):
			if((abs(x[t]-i)+abs(y[t]-j))==fastest):
				tc+=1
			if(tc>1):
				count+=1
				break
print(count)