import math

# def isSquareFree(x):
	# for i in [2,3,5,7,11,13,17,19]:
		# if(x%i==0):
			# x=x/i
		# if(x%i==0):
			# return 0
	# return 1

x=int(input())

def func(x):
	tc=0
	if(x<=1):
		return tc
		
	for i in range(2,x+1):
		if(x%i==0):
			x=x/i
			if(x%i==0):
				x=x/i
				tc+=1
	return tc
		
print(func(x),end='')