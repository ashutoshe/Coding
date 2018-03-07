#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>			//for Sleep

struct producer
{
	int pid,priority,status;
	bool leader;
};

int main()
{
	int n,i,j,pcrash,prun,pstart,lead,flag,elestart;
	struct producer p[10];
	for(i=0;i<n;i++)
	{
		p[i].pid=i+1;
		p[i].status=1;								//status
		p[i].leader=false;
	}
	struct producer temp;

	printf("\nLow Number is High Priority");
	printf("\n\nEnter number of Processes : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter Priority of Process %d : ",p[i].pid);
		scanf("%d",&p[i].priority);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(p[j].priority<p[j+1].priority)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	p[n-1].leader==true;
	printf("\nThe Leader is process %d",p[n-1].pid);
	lead=n-1;
	
	while(1)
	{
		do
			pcrash=floor(rand()*n/(RAND_MAX));
		while(p[pcrash].status==0);
		printf("\nThe Process %d has Crashed",p[pcrash].pid);
		p[pcrash].status=0;
		
		if(p[pcrash].leader==true)
		{
			printf("\nProcess %d was the Leading Process",p[pcrash].pid);
		}
		
		Sleep(2000);
		
		pstart=floor(rand()*n/(RAND_MAX));
		if(p[pstart].status==0)
		{
			p[pstart].status=1;
			printf("\nProcess %d has Restarted",p[pstart].pid);
		}
		
		Sleep(2000);

		do
			prun=floor(rand()*n/(RAND_MAX));
		while(p[prun].status==0);
		
		if(p[lead].status==0)
		{
			printf("\nProcess %d has Noticed that Leader is Down",p[prun].pid);
			printf("\nIt has started Election");
		}
		else
		{
			Sleep(2000);
			continue;
		}
		
		elestart=pstart;
		while(flag)
		{
			flag=0;
			for(i=elestart+1;i<n;i++)
				printf("\nProcess %d has sent Election Message to Process %d ",p[elestart].pid,p[i].pid);

			Sleep(1000);
			
			for(i=elestart+1;i<n;i++)
				if(p[i].status==true)
					printf("\nProcess %d replies to Process %d",p[i].pid,p[elestart].pid);

			Sleep(1000);	
				
			for(i=elestart+1;i<n;i++)
				if(flag==0 && p[i].status==true)
				{
					printf("\nProcess %d is now the new Election Candidate",p[i].pid);
					elestart=i;
					flag=1;
					break;
				}
		}
		Sleep(1000);
		
		printf("\nThe Winner of this Election is Process %d",p[elestart].pid);
		lead=elestart;
		p[elestart].leader=true;
		p[elestart].leader=true;
		Sleep(10000);
	}
	return 0;
}