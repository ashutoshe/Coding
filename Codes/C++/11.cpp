#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class student
{
protected:
int no;
public:
student( ){ }
void get_no( )
{
 cout<<"\n Enter Roll Number";
 cin>>rno;
}
void display_no( )
{
 cout<<"\n\n Roll number of the student:"<<rno;
}
};
class test : public student
{
protected:
int s1,s2;
public:
void get_marks( )
{
 cout<<"\n Enter marks scored in the subject 1:";
 cin>>s1;
 cout<<"\n Enter marks scored in subject 2:";
 cin>>s2;
}
void display_marks( )
{
 cout<<"\n\n Marks scored in two subjects:"<<s1;
 <<set w(5);
 <<"and";
 <<s2;
}
};
class sports
{
protected:
int wt;
public:
void get_wt( )
{
 cout<<"\n\n Enter marks(weight age)in sports:";
 cin>>wt;
}
void display_wt( )
{
 cout<<"\n\n Marks(weight age)in sports:"<<wt;
}
};
class result : public test,public sports
{
public:
void display_result( )
{
 cout<<"\n\n Total marks="<<s1+s2+wt<<endl;
}
};
void main( )
{
clrscr( );
result obj Result;
  obj Result.student :: getno( );
  obj Result.test :: getmarks( );
  obj Result.sports :: getwt( );
  obj Result.student :: display no( );
  obj Result.test :: display marks( );
  obj Result.sports :: display wt( );
  obj Result.display_result( );
getch();
}

/*Output
   Enter roll no : 155
   Enter marks scored in subject 1 : 56
   Enter marks scored in subject 2 : 48
   Enter marks scored (weight age)in sports : 30
   Roll number of student : 155
   Marks scored in two subjects : 56 and 48
   Marks(weight age)in sports : 30
   Total marks=134
/* 