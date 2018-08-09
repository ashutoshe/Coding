import math

# def isSquareFree(x):
	# for i in range(2,int(math.sqrt(x))+1):
		# if(x%(i*i)==0):
			# return 0
	# return 1

x=int(input())

count=0
for i in range(2,x+1):
	if(x%i==0):
		flag=1
		for j in range(2,19):
			if(i%(j*j)==0):
				flag=0
				break
		count+=flag
	
print(count,end='')