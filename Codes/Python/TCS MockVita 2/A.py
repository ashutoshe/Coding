import math
import re

n=int(input(""))

x=[]
for i in range(0,n):
	t=list(input("").split(','))
	dir=''.join(re.findall(r'[A-Z]+',t[0]))
	if(dir=='N'):
		x.append(math.radians(1*int(''.join(re.findall(r'[0-9]+',t[0])))))
	else:
		x.append(math.radians(-1*int(''.join(re.findall(r'[0-9]+',t[0])))))
		
	dir=''.join(re.findall(r'[A-Z]+',t[1]))
	if(dir=='E'):
		x.append(math.radians(1*int(''.join(re.findall(r'[0-9]+',t[1])))))
	else:
		x.append(math.radians(-1*int(''.join(re.findall(r'[0-9]+',t[1])))))
		
dist=0
for i in range(0,len(x)-3,2):
	fromlon=x[i+1]
	fromlat=x[i]
	tolon=x[i+3]
	tolat=x[i+2]
	latdiff=abs(tolat-fromlat)
	londiff=abs(tolon-fromlon)
	# if(latdiff>3.14159):
		# latdiff=6.28319-latdiff
	# if(londiff>3.14159):
		# londiff=6.28319-londiff
	temp1=math.sin(latdiff/2)**2
	temp2=math.sin(londiff/2)**2
	temp3=math.cos(fromlat)
	temp4=math.cos(tolat)
	temp=temp1+temp3*temp4*temp2
	dist+=2*6400*math.asin(math.sqrt(temp))
	
print (int(round(dist)))