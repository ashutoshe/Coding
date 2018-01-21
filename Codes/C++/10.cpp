#include<iostream.h>
#include<conio.h>
class complex
{
float x,y;
public:
complex() 
{
x=y=0;
}
complex(float real,float img)
{
x=real;
y=img;
}
complex operator+(complex c);
void display();
};
complex complex::(operator+complex c)
{
complex temp;
temp.x=x=c.x;
temp.y=y=c.y;
return(temp);
}
void complex::display()
{
cout<<x<<"+i"<<y;
}
void main()
{
clrscr();
complex c3;
complex c1(2.5,3.1);
complex c2(1.3,2.6);
cout<<"\n Complex number A:";
c1.display;
cout<<"\n Complex number B:";
c2.display;
cout<<"\n Sum of the two numbers:";
c3=c1+c2;
c3.display();
getch();
}

/* Output
 COMPLEX NUMBER A: 2.5+i3.5
 COMPLEX NUMBER B: 1.8+i4.6

Sum of two COMPLEX NUMBERS A AND B: 4.3+i8.1 

/*
