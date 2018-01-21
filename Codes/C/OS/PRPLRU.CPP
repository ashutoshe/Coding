#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,k;
	int ps,t=0,hit=0,miss=0,replace=0;
	char str[100];
	char ram[10];
	char stack[50];int top=-1;char temp;int flag;
	char op[10][100];

	printf("\nEnter the Page Size of RAM : ");
	scanf("%d",&ps);

	printf("Enter the String of pages : ");
	scanf("%s",&str);

	for(i=0;i<ps;i++)
	{
		ram[i]=0;
	}
	
	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<=top;j++)
		{
			if(stack[j]==str[i])
				break;
		}
		if(j==(top+1))
		{
			top++;
			stack[top]=str[i];
		}
	}

	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<ps;j++)
		{
			if(str[i]==ram[j])
			{
				hit++;
				break;
			}
		}
		if(j==ps)
		{
			miss++;
			ram[replace]=str[i];  
		}
		
		for(j=0;j<=top;j++)
		{
			if(stack[j]==str[i])
			{
				temp=stack[j];
				for(k=j;k<top;k++)
				{
					stack[k]=stack[k+1];
				}
				stack[top]=temp;
				break;
			}
		}
		
		for(j=0;j<=top;j++)
		{
			for(k=0;k<ps;k++)
			{
				if((ram[k]==stack[j]) || (ram[k]==0))
				{
					replace=k;
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				flag=0;
				break;
			}
		}
		if(j==(top+1))
		{
			replace=(replace+1)%ps;
		}
		
		for(j=0;j<ps;j++)
		{
			op[j][i]=ram[j];
		}
	}
	
	printf("\n");
	for(j=0;j<ps;j++)
	{
		printf("| ");
		for(i=0;i<strlen(str);i++)
		{
			printf("%c | ",op[j][i]);
		}
		printf("\n");
	}
	printf("\nHits = %d\nMiss = %d\n",hit,miss);
	return 0;
}