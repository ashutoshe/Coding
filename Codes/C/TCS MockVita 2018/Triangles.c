#include <stdlib.h>
#include <stdio.h>

struct data
{
	int count;
	int value;
};

int facto(int x)
{
	int i,fac=1;
	
	if(x<0)
		return 0;
	if(x==0 || x==1)
		return 1;
	for(i=x;i>1;i--)
	{
		fac=fac*i;
	}
	return fac;
}

int main()
{
	int n,count=0,flag=0;
	int i,j,temp;
	int res=0;
	int r1,r2,r3;
	int par=0,nonpar=0;
	struct data dataset[50];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		for(j=0;j<count;j++)
		{
			if(dataset[j].value==temp)
			{
				dataset[j].count++;
				break;
			}
		}
		dataset[count].value=temp;
		dataset[count++].count=1;
	}

	for(i=0;i<count;i++)
	{
		if(dataset[i].count==1)
			nonpar++;
		else
		{
			par+=dataset[i].count;
			nonpar++;
		}
	}
	
	if(nonpar-par-3>=0)
	{
		r1=facto(nonpar-par);
		r2=facto(nonpar-par-2);
		r3=facto(nonpar-par-3);
		res+=r1/(6*r3)+r1/(2*r2)*par;
	}

	printf("%d",res);
	
	return 0;
}