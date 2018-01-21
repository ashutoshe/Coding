#include <stdio.h>


void vampire(int x)
{
	int a[4],y[16],i,j,c=0;
	
	a[0]=x/1000;
	a[1]=x/100-10*a[0];
	a[2]=x/10-(10*a[1])-(100*a[0]);
	a[3]=x-(10*a[2])-(100*a[1])-(1000*a[0]);
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			if (i!=j)
			{
				y[c]=10*a[i] + a[j] ;
				c++;
			}
		}
	}
	
	for(i=0;i<=c;i++)
	{
		for(j=0;j<=c;j++)
		{
			if (i!=j && (y[i]*y[j]==x))
			{
				printf("Vampire");
			}
		}
	}
}

void main()
{
	int x;
	printf("Enter a Number : ");
	scanf("%d",&x);
	vampire(x);
}