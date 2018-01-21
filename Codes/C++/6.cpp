#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class ratio
{ 
private:
int num,den;
float f,ref;
double m;
public:
void assign();
void convert();
void invert();
void print();
}
void ratio::assign()
{
cout<<"Enter a numerator of the ratio"<<endl;
cin>>num;
cout<<"Enter a denominator of the ratio"<<endl;
cin>>den;
f=num/flat(den);
}
void ratio::convert()
{
m=f;
}
void ratio::invert()
{
float t=num;
num=den;
den=t;
ref==num/float(den);
}
void ratio::print()
{
cout<<"\n The numerator of the original ratio is"<<num;
cout<<"\n The denominator of the original ratio is "<<den;
cout<<"\n The original ratio is"<<setprecision(6)<<f;
cout<<"\n The ratio in double is"<<setprecision(10)<<m;
cout<<"\n The reciprocal of original ratio is"<<setprecision(3)<<ref;
}
void main()
{
clrscr();
ratio R;
R.assign();
R.convert();
R.invert();
R.print();
getch();
}

/*Output 
Enter the numerator of the ratio:19
Enter the denominator of the ratio:9
The numerator of the original ratio is 19
The denominator of the original ratiois 9
The original ratio is 2.111111
The ratio in double is 2.1111111641
The reciprocal of the original ratio is 0.4736842215
/*