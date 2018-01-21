#include<iostream.h>
#include<conio.h>

void swap(int &,int &)
void main( )
{
clrscr( );
int a,b;
  cout<<"\n\nEnter two integer values:\n";
  cin>>a>>b;
  cout<<"\n\nBefore swapping:\n\n";
         <<"A"=<<a<<"B"=<<b;
swap(a,b);
  cout<<"\n\nAfter swapping:\n\n"
         <<"A"=<<a<<"B"=<<b;
        getch( );
}
void swap(int&x,int&y)
{
int temp 
       temp=x;
              x=y;
              y=temp;
}

/*output
     
     Enter two integer values:
      59     147

     Before swapping:
      A=59         B=147
     
     After swapping:
      A=147       B=59
   
/*