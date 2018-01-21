#include<iostream.h>
#include<conio.h>
class ratio
{
public:

ratio()
{
cout<<endl<<"OBJECT IS BORN";
}
void print()
{
cout<<"\n Now X is alive";
}
~ratio()
{
cout<<endl<<"OBJECT DIES";
}
} 
void main()
{
clrscr();
ratio r;
r.print()
getch();
}
/*output1
 OBJECT IS BORN.
 NOW X IS ALIVE.
 
 output 2
 OBJECT IS BORN.
 NOW X IS ALIVE.
 OBJECT DIES.
/*
 
