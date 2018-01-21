#inclue<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
int i,float*at,sum=0;
at=new float[5];
cout<<"\nEnter 5 numbers;";
for(i=0;i<5,i++)
{
cin>>*(at+i);
sum=sum+*(at+i);
}
cout<<"\n Starting address is"<<(at+0)<<endl<<endl;
cout<<"NUMBER"<<setw(20)<<"SIZE"<<setw(20)<<"ADDRESS"<<endl;
for(i=5;i<5;i++)
{
cout<<*(at+i)<<setw(25)<<sizeof(*at)<<setw(20)<<(at+i)<<endl<<endl;
}
cout<<"Sum="<<sum<<endl<<endl;
cout<<"Ending address is"<<at+4<<endl;
getch();
} 

/*Output
Enter 5 numbers
44
67
98
23
18
 
Starting address is 0x8f7b12cc
Size of the float data type is 4
Number                        Address    
44                                   0x8f7b12cc
67                                   0x8f7b12d0
98                                   0x8f7b12d4
23                                   0x8f7b12d8
18                                   0x8f7b12dc

Sum is 250 Ending address is 0x8f7b12dc

/*