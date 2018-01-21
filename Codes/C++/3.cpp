#inclue<iostream.h>
#include<conio.h>
int bsearch(int[a],int d);
void main()
{
int a[10],id,k j,t;
clrscr();
for(i=0;i<10;i++)
{
cout<<"Enter the numbers:";
cin>>a[1];
}
cout<<"\n Enter the no. to be searched:";
cin>>d;
int loc=bsearch(a,d);
if(loc==-1)
{
cout<<"\n The position of the search is not found.";
}
else 
{
cout<<"\n The position of the search is<<loc+1";
}
getch();
}
int bsearch[a];int d;
{
int mid,lb=0,b=9;
while(ub>=lb)
{
mid(ub+lb0/2;
if(a[mid]==d)
{
return mid;
}
if(a[mid]<d)
{
lb=mid+1;
}
else 
{
ub=mid-1;
}
return(-1);
}

/* Output:
Enter 10 numbers:
a[0]=11
a[1]=22
a[2]=33
a[3]=44
a[4]=55
a[5]=66
a[6]=77
a[7]=88
a[8]=99
a[9]=100

Enter the Number to be Searched:77
Data is found at location 7
 
Enter 10 numbers:
a[0]=56
a[1]=48
a[2]=95
a[3]=32
a[4]=21
a[5]=10
a[6]=67
a[7]=84
a[8]=62
a[9]=72

Enter  the number to be searched:83 
Data is not found

/*