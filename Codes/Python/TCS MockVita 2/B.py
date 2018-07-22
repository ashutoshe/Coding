n=int(input(""))

x=list(map(int,list(input("").split(','))))

t=[]
for i in x:
	t.append(bin(i).count("1"))

count=0
for i in range(0,len(t)-1):
	for j in range(i+1,len(t)):
		if(t[i]>t[j]):
			count+=1
		
print(count,end='')