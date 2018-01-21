#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int i,j;
	int ps,t=0,hit=0,miss=0,replace=0;
	char str[100];
	char ram[10];
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