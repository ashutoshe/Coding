#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<iomanip.h>
void main( )
{
clrscr( );
char name[80],cap[80];
of stream out f1,out f2;
 out f1.open("COUN.DAT");
  out f1      <<"INDIA"<<endl;
  out f1<<"CHINA"<<endl;
  out f1<<"USA"<<endl;
  out f1<<"ENGLAND"<<endl;
  out f1<<"FRANCE"<<endl;
  out f1.close( );
out f2.open("CAP.DAT");
  out f2<<"NEW DELHI"<<endl;
  out f2<<"BEIJING"<<endl;
  out f2<<"WASHINGTON DC"<<endl;
  out f2<<"LONDON"<<endl;
  out f2<<"PARIS"<<endl;
  out f2.close( );
if stream int1,int2;
  inf1 open("COUN.DAT")
  inf2 open("CAP.DAT")
while( ! inf1.eof( )&& ! inf2.eof( ))
{
  inf1.getline(cname,80,'\n');
  inf2.getline(cap,80,'\n');
  cout<<"capital of"<<cname<<"is"
  <<cap<<endl;
}
getch( );
inf1.close( );
inf2.close( );
}

/*output
   Capital of INDIA is NEW DELHI
   Capital of CHINA is BEIJING
   Capital of  USA is WASHINGTON DC
   Capital of ENGLAND is LONDON
   Capital of FRANCE is PARIS
/*