#include<iostream.h>
#inclue<conio.h>
#include<string.h>
void reverse(char[])
const str=80;
void main()
{
int i;
char strev{str};
clrscr();
cout<<"\n Enter a string:";
cin>>getline(strev,str,'\n');
reverse(strev);
getch();
}
void reverse(char xt[])
{
intl;len;
len=strlen(xt);
for(i=0;i<=len/2;i++)
{
char temp=xt[i];
xt[i]=xt[len-1-i]=temp;
}
cout<<"\n The reverse of the string is:"<<xt;
}

/*Output 
Enter the string:NEW DELHI
Given string is:NEW DELHI
String in reverse is:IHLED WEN
/*

