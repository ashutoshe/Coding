#include <stdio.h>

int empty(int);
void makeempty(int *) ;
int create (int a[],int *);
void insert(int a[],int *,int);
int find(int a[],int *,int,int *);
void displaylist(int a[],int *) ;
void deleteitem(int a[],int *,int) ;
int kelement (int a[],int);

void main()
{	
	int ch,item,pos,l,n=-1,a[100],start ;
	do
	{ 
		printf("\n\n Enter 1 to create list \n Enter 2 to insert an element \n Enter 3 to find an element \n Enter 4 to display list \n Enter 5 to delete an element \n Enter 6 to find kth element \n Enter 7 to make the list empty \n Enter 8 to exit\n") ;
		scanf("%d",&ch);

		switch (ch)
		{
			case 1: n=create(a,&n);
					break;

			case 2: printf("Enter Element ");
					scanf("%d",&item) ;
					insert(a,&n,item);
					break;

			case 3: start=0 ;
					printf("Enter element to be found ");
					scanf("%d",&item);
					while(1)
					{
						l=find(a,&n,item,&start);
						if (l==-1)
							{	
								printf("\nEnd of Search") ;
								break ;                    
							}
						else
							printf("\nFound at %d",l+1);
					}
					break;

			case 4: displaylist(a,&n);
					break;

			case 5: printf("Enter element to be deleted ");
					scanf("%d",&item);
					deleteitem(a,&n,item);
					break;

			case 6: printf("Enter position ");
					scanf("%d",&pos);
					l=kelement(a,pos);
					printf("Element at given position = %d",l);
					break ;

			case 7: makeempty(&n);
		}
	}while(ch!=8); 
}

int isempty(int *n)
{
	if (*n==-1)
		return 1;
	else
		return 0;
}

void makeempty(int *n)
{
	*n=-1 ;
}

int create (int a[],int *n)
{ 
	int i=1 ;
	if (*n!=-1)
	{
		printf("\nCareful!!! Data will be Overwritten.....Enter 0 to Cancel ");
		scanf("%d",&i) ;
	}
	if(i==1)
	{
		printf("\nEnter the number of Elements ");
		scanf("%d",n);
 
		for(i=0;i<*n;i++)
		{
			printf("Enter Element no %d : ",i+1);
			scanf("%d",&a[i]) ;
		}			
	}
	return *n ;
}

void insert(int a[],int *n,int item)
{
	*n=*n+1 ;
	a[*n-1]=item;
}

void displaylist(int a[],int *n)
{
	int i;
	for(i=0;i<*n;i++)
		printf("%d ",a[i]);
}

void deleteitem (int a[],int *n,int item)
{
	int i,j,x;
	printf("\nEnter 1 to delete only First entry or Other Value to delete all ");
	scanf("%d",&x) ;
	for(i=0;i<*n;i++)
		if(a[i]==item)
		{
			printf("\nItem Deleted at Position %d",i+1)  ;
			for(j=i;j<(*n)-1;j++)
				a[j]=a[j+1];
			*n=*n-1 ;
			i--;
			if(x==1)
				break;
		}	

}

int find (int a[],int *n,int item,int *start)
{
	int i;
	for (i=*start;i<*n;i++)
		if(a[i]==item)
		{
			*start=i+1;
			return i;
		}
		
	return -1 ;
}

int kelement (int a[],int pos)
{
	return a[pos-1] ;
}
