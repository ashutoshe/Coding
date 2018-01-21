#include <stdio.h>
#include <stdlib.h>

#define max 100

void DFS(char nodes[max],int adjmat[max][max],int visited[max],int n,int i)
{
	int j;
    char c=nodes[i];
    printf("%c ",c);
    visited[i]=1;
    
    for(j=0;j<n;j++)
		if(!visited[j]&&adjmat[i][j]==1)
            DFS(nodes,adjmat,visited,n,j);
		
	for(j=0;j<n;j++)
		if(!visited[j])
            DFS(nodes,adjmat,visited,n,j);
}

void main()
{
	int n,e,i,j,a,b;
	int adjmat[max][max];
	char nodes[max];
	int visited[max];
	
	printf("\nEnter the number of nodes : ");
	scanf("%d",&n);	

	printf("\nThe Nodes are :");	
	for(i=0;i<n;i++)
	{
		nodes[i]=(65+i);
		printf(" %c",nodes[i]);
	}
	
	printf("\n\nEnter the number of edges : ");
	scanf("%d",&e);
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			adjmat[i][j]=0;
	
	for(i=1;i<=e;i++)
	{
		printf("Edge no %d is between node no ___ and ___ : ",i);
		scanf("%d %d",&a,&b);
		
		adjmat[a-1][b-1]=adjmat[b-1][a-1]=1;
	}
	
	printf("\n\nThe Edge Matrix is \n");
	for(i=0;i<n;i++)
	{	for(j=0;j<n;j++)
			printf("%d ",adjmat[i][j]);
		printf("\n");
	}
	printf("\n");
	
	printf("\nThe Path Traversed is : ");
	DFS(nodes,adjmat,visited,n,0);
	
	fflush(stdin);
	getchar();
}