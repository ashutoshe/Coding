#include<iostream>
#include<conio.h>
class circle
{
private:
floatx,y;
float radius;
public: circle()
{ x=0.0;y=0.0;radius=0.0;
}
void getdata()
{
cout<<"\n Enter x coordinates:";
cin>>x;
cout<<"\n Enter y coordinates :";
cin>>y;
cout<<"\n Enter the radius:"
cin>>radius;
}
void area()
{
cout<<"\n Area="<<(3.14*radius*radius);
}
void circumference()
{
cout<<"\n Circumference="<<(2*3.14*radius);
}
void print()
{
cout<<"\n Circle  details are as follows:";
cout<<"\n X="<<x;
cout<<"\n Y="<<y;
cout<<"\n Radius="<<radius;
area();
circumference()}
};
void main()
{
clrscr();
circle c;
c.getdata();
c.print();
getch();
}

/* Output 
Area of the circle: 3.142
Circumference : 6.284
Radius of the circle:1
X co-ordinate: 5
Y co-ordinate: 9
Pi value:3.142857