import itertools

temp=list(map(int,list(input("").split(','))))

n=temp[0]
p=temp[1]

x=list(map(int,list(input("").split(','))))

#s=list(itertools.combinations(x,3))

count=0
for t in itertools.combinations(x,3):
	sum=t[0]+t[1]+t[2]
	if(sum%p==0):
		count+=1
print(count%1009,end='')