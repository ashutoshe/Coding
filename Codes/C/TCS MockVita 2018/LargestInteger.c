#include <stdio.h>
#include <string.h>

struct chute
{
	int l[50];
	int last;
};

int main()
{
	int m,n;
	long int res;
	struct chute c[20];
	int i=0,j=0,k=0,flag=1;
	char temp;
	int largest,larloc;
	
	scanf("%d,%d",&m,&n);
	
	for(i=0;i<m;i++)
	{
		c[i].last=n-1;
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d%c",&c[i].l[j],&temp);
			if(temp=='\n')
				break;
		}
	}
	// for(i=0;i<m;i++)
	// {
		// for(j=0;j<n;j++)
		// {
			// printf("%d ",c[i].l[j]);
		// }
		// printf("\n");
	// }
	
	while(flag)
	{
		flag=0;
		for(i=0;i<m;i++)
		{
			if(c[i].last>=0)
			{
				largest=c[i].l[c[i].last];
				larloc=i;
				break;
			}
		}

		for(i=i+1;i<m;i++)
		{
			if(c[i].l[c[i].last]>largest)
			{
				largest=c[i].l[c[i].last];
				larloc=i;
			}
			else if(c[i].l[c[i].last]==largest)
			{
				j=c[i].last;
				k=c[larloc].last;
				while(j >=0 && k>=0)
				{
					if(c[i].l[j]==c[larloc].l[k])
					{
						j--;
						k--;
					}
					else if(c[i].l[j]>c[larloc].l[k])
					{
						larloc=c[i].last;
						break;
					}
					if(k==0)
					{
						larloc=c[i].last;
					}
				}
			}
		}
		// printf("%d",largest);
		c[larloc].last--;
		res=res*10+largest;
		// printf("%d",res);
		
		for(i=0;i<m;i++)
			if(c[i].last>=0)
				flag=1;
	}
	
	printf("%d",res);
	
	return 0;
}