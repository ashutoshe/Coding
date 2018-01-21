#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define max 100

void main()
{
	int i,sc=-1,c=-1,t,temp,s[max];
	char a[max];

	printf("\nEnter a Post-Fix Equation for Evaluation : ");
	gets(a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			s[++sc]=(int) a[i];
			s[sc]-=48;
		}
		
		else if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='^' || a[i]=='%')
		{
			temp=s[sc--];

			if(a[i]=='+')
				s[sc]=s[sc]+temp;
			if(a[i]=='-')
				s[sc]=s[sc]-temp;
			if(a[i]=='*')
				s[sc]=s[sc]*temp;
			if(a[i]=='/')
				s[sc]=s[sc]/temp;
			if(a[i]=='^')
				s[sc]=pow(s[sc],temp);
			if(a[i]=='%')
				s[sc]=s[sc]%temp;
		}
		
		else if(a[i]=='(')
		{
			t=i;
			s[++sc]=0;
			while(a[t]!=')' && t<strlen(a))
			{
				c++;
				t++;
			}
			if(a[t]==')')
			{
				while(c>=0)
				{
					c--;
					s[sc]=(s[sc])+(((a[++i])-48)*((int) pow(10,c)));
				}
			}
			else
				sc--;
		}
	}
		if(sc==0)
			printf("\nThe Answer is : %d\n",s[sc]);
		else
			printf("\nEnter Postfix Expression is Incorrect");
	
		fflush(stdin);
		getchar();
}
