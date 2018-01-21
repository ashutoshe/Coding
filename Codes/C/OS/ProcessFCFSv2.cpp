#include <stdio.h>
#include <string.h>

struct process
{
	char name[10];
	int bt;
	int at;
	int wt;
	int tat;
};

struct process createprocess(int i)
{
	struct process p;
	char n[10];int burst,art ;
	
	printf("\nEnter Name of Process %d : ",i);
	scanf("%s",&n);
	printf("Enter Burst Time of Process %d : ",i);
	scanf("%d",&burst);
	printf("Enter Arrival Time of Process %d : ",i);
	scanf("%d",&art);
	
	strcpy(p.name,n);
	p.bt=burst;
	p.at=art;
	return p;
}

void calculate(struct process p[10],struct process *pr,int n)
{
	pr->wt=0;
	for(int i=0;i<n;i++)
	{
		pr->wt=pr->wt+p[i].bt;
	}
	pr->wt=pr->wt - pr->at;
	
	pr->tat=pr->bt + pr->wt;
}

int main()
{
	int x=0,n;
	struct process p[10];
	printf("Enter no of Processes : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		p[i]=createprocess(i+1);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if (p[j].at>p[j+1].at)
			{
				struct process temp;
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	
	if(p[0].at!=0)
	{
		x=p[0].at;
		for(int i=0;i<n;i++)
		{
			p[i].at-=x;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		calculate(p,&p[i],i);
	}
	
	while(true)
	{
		printf("\nName	Burst Time	Arrival Time	Waiting Time	Turn Around Time");
		
		for(int i=0;i<n;i++)
		{
			printf("\n%s		%d		%d		%d		%d",p[i].name,p[i].bt,x+p[i].at,p[i].wt,p[i].tat);
		}
		
		printf("\n\nAdd new Process ? y/n :");
		char c;
		scanf(" %c",&c);
		fflush(stdin);
		
		if(c=='y')
		{
			p[n]=createprocess(n+1);
			n++;
			
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<(n-i-1);j++)
				{
					if (p[j].at>p[j+1].at)
					{
						struct process temp;
						temp=p[j];
						p[j]=p[j+1];
						p[j+1]=temp;
					}
				}
			}
			
			for(int i=0;i<n;i++)
			{
				calculate(p,&p[i],i);
			}
			
		}
		else
			break;
	}
	
	return 0;
}