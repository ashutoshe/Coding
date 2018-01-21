#include <stdio.h>
#include <string.h>
#include <cstdlib>

struct process
{
	char name[10];
	int bt;
	int at;
	int wt;
	int tat;
	int rem;
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
	p.rem=burst;
	p.at=art;
	p.wt=0;
	return p;
}

int main()
{
	int x=0,n,ts,count=0,k=0,ext=0,time=0,done=0;
	struct process p[10];
	printf("Enter no of Processes : ");
	scanf("%d",&n);
	printf("Enter Time Slice : ");
	scanf("%d",&ts);
	
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
	
	while(true)
	{	
		for(int i=0;i<n;i++)
		{
			if((p[i].rem>=ts) && (p[i].rem>0) && (p[i].at<=time))
			{
				p[i].rem-=ts;
				time+=ts;
				for(int j=0;j<n;j++)
				{
					if((i!=j) && (p[j].rem>0))
						p[j].wt+=ts;
				}
				done=1;
			}
			else if ((p[i].rem<ts) && (p[i].rem>0) && (p[i].at<=time))
			{
				int temp=p[i].rem;
				time+=temp;
				p[i].rem=0;
				for(int j=0;j<n;j++)
				{
					if((i!=j) && (p[j].rem>0))
						p[j].wt+=temp;
				}
				done=1;
			}
		}
		
		if(done==0)
		{
			for(int i=0;i<n;i++)
			{
				if((p[i].at>time) && (p[i].rem>0))
				{
					time=p[i].at;
					break;
				}
			}
		}
		else
			done=0;
			
		ext=0;
		for(int i=0;i<n;i++)
		{
			ext+=p[i].rem;
		}
		if(ext==0)
			break;
	}
	
	for(int i=0;i<n;i++)
	{
		p[i].wt-=x+p[i].at;
		p[i].tat=p[i].bt + p[i].wt;
	}
	
	printf("\nName	Burst Time	Arrival Time	Waiting Time	Turn Around Time");
	for(int i=0;i<n;i++)
	{
		printf("\n%s		%d		%d		%d		%d",p[i].name,p[i].bt,x+p[i].at,p[i].wt,p[i].tat);
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}