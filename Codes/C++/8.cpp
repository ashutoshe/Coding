#include<iostream.h>
#include<conio.h>
class ratio
{
int num,den;
float r;
public:
ratio()
{
num=5;
den=2;
}
ratio(int n)
{
num=n;
den=3;
}
ratio(int n,int d)
{
num=n;
den=d;
}
void print()
{
r=float(num)/den;
cout<<"\n num"<<"/"<<den<<"="<<r;
}
};
void main()
{
ratioX;
ratio Y(8),z(3,7);
clrscr();
cout<<"\n X=";
X.print();
cout<<"\n Y=";
Y.print();
cout<<"\n Z=";
Z.print();
getch();
}

/* Output 
      X=0/1
      Y=15/1
/*

   
