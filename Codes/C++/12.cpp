#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class person
{
private:
char name[80];
public:
person( )
{
strcpy(name,"TOM");
}
virtual void print( )
{
cout<<"Name of person assigned through base object is ";cout<<name<<endl;
}
};
class student : public person
{
private:
char name1 [80];
public:
student( )
{
strcpy(name1,"BOB");
}
void print( )
{
cout<<"\nName of person assigned through derieved object is";
cout<<name1;
}
};
void main( )
{
clrscr( )
person *p,x;
student y;
p=&x;
p->print( );
p=&y;
p->print( );
getch( );
}

/*output
   Name of person assigned through base object is TOM
   
   Name of person assigned through derieved object is BOB.
/*