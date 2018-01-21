#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],i,j,k,t;
clrscr();
for(i=0;i<10;i++)
{
cout<<"\n The elements are"<<a[i];
}
for(k=0;k<10;k++)
{
for(j=0;j<(10-k))
{
if a[j]>a[j+1]
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
cout<<"\n The Second Array is"<<endl;
for(j=0;j<10;j++)
cout<<endl<<a[j];
}
getch();
} 

/* Output:
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

The given list in Ascending Order is:
a[0]=10
a[1]=21
a[2]=32
a[3]=48
a[4]=56
a[5]=62
a[6]=67
a[7]=72
a[8]=84
a[9]=95
/*
  


