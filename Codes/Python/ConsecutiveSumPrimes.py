#Find Primes which can be expressed as a sum of consecutive primes starting from 2 .
#eg: 2+3=5 so print 5 2+3+5+7=17 so print 17 (bcoz 5 and 17 are primes)

import math

def isPrime(n):
	if(n%2==0):
		return 0;
	else:
		for i in range(3,int(math.sqrt(n))+1,2):
			if(n%i==0):
				return 0;
	return 1;

def nextPrime(n,x):
	if(n==1):
		return 2
	for i in range(n+1,x):
		if(isPrime(i)):
			return i

x=int(input("Enter the Maximum Number : "))

sum=0
temp=1
while(sum<x):
	temp=nextPrime(temp,x)
	if(temp==0):
		break
	sum+=temp
	
	if(isPrime(sum)):
		print(sum,end=" ")