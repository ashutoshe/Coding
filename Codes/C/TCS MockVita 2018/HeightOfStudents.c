#include <stdio.h>
#include <string.h>

int main()
{
	int n,k,flag=1;
	char list[10][26];
	int i=0,j=0,l=0;
	char temp,x;
	char res[26];
	int count=0;
	
	scanf("%d,%d",&n,&k);
	
	for(i=0;i<k;i++)
	{
		scanf("%s",&list[i]);
		while(list[i][j]!='\0')
		{
			if(list[i][j]==',')
			{
				for(l=j;l<strlen(list[i]);l++)
					list[i][l]=list[i][l+1];
				j--;
			}
			j++;
		}
		j=0;
	}
	// for(i=0;i<k;i++)
	// {
		// printf("%s\n",&list[i]);
	// }
	
	for(x='A';x<(n+'A');x++)
	{
		for(i=0;i<k;i++)
		{
			for(j=0;j<strlen(list[i]);j++)
			{
				if(list[i][j]==x)
				{
					flag=0;
					break;
				}
				else
				{
					flag=1;
				}
			}
			if(flag==0)
			{
				break;
			}
		}
		if(flag==1)
		{
			res[count++]=x;
			res[count++]=',';
		}
		flag=1;
	}
	if(strlen(res)==0)
		strcpy(res,"N/A");
	
	printf("%s",res);
	
	return 0;
}