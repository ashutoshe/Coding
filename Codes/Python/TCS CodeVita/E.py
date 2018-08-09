import math

t=list(map(int,list(input("").split(','))))

r=t[0]
h=t[1]
s=t[2]

t=list(map(int,list(input("").split(','))))

d=t[0]
g=t[1]

dist=0

if(d>0):
	s1=abs(s-g)
	if(g>=0 and g<=180):
		s2=r*g*3.14/180
	else:
		s2=r*(360-g)*3.14/180
		
	dist=math.sqrt(s1**2+s2**2)

if(d<0):
	s1=abs(s+d)
	if(g>=0 and g<=180):
		s2=r*g*3.14/180
	else:
		s2=r*(360-g)*3.14/180
		
	dist=math.sqrt(s1**2+s2**2)+3
	
# elif(d<0):
	# if(g>180 and g<360):
		# g=360-g
	# dist=s+math.sqrt(r**2+(d)**2-2*r*d*math.cos(g*3.14/180))
	
print(int(dist))