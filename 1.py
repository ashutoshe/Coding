import threading
import sys

def search1(array,x,y,z,item,name):
	threading.current_thread().setName(name)
	for i in range(x,y,z):
		if(array[i]==item):
			print("Item Found at Location",i+1,threading.current_thread().getName())
		else:
			print("Item not Found at Location",i+1,threading.current_thread().getName())

array=[54,23,13,64,90,12,31,23,13,13,65,32,23,45,12,14]
 
#for i in range(0,8):
#	array[i]=input("")
	
item=int(input("Enter Number to Search : "))

#search1(array,0,8,item)

threading.Thread(target=search1,args=(array,0,8,1,item,"Forward")).start()
threading.Thread(target=search1,args=(array,15,7,-1,item,"Backward")).start()
