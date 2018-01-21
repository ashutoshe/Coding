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
	int done;
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
	int x=0,n,time=0,count=0,k=0,ext=0;
	struct process p[10],pt[10];
	printf("Enter no of Processes : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		p[i]=createprocess(i+1);
		p[i].done=0;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<(n-i-1);j++)
		{			
			if (p[j].bt>p[j+1].bt)
			{
				struct process temp;
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	
	while(true)
	{
		for(int i=0;i<n;i++)
		{
			if((p[i].at<=time) && (p[i].done==0))
			{
				pt[count]=p[i];
				count++;
				p[i].done=1;
				break;
			}
		}
		time+=pt[k].bt;
		k++;
		
		ext=0;
		for(int i=0;i<n;i++)
		{
			ext+=p[i].done;
		}
		
		if(ext==n)
			break;
	}
	
	for(int i=0;i<n;i++)
	{
		calculate(pt,&pt[i],i);
	}
	
	printf("\nName	Burst Time	Arrival Time	Waiting Time	Turn Around Time");
	for(int i=0;i<n;i++)
	{
		printf("\n%s		%d		%d		%d		%d",pt[i].name,pt[i].bt,x+pt[i].at,pt[i].wt,pt[i].tat);
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}