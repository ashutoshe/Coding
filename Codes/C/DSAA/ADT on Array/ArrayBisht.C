#include<stdio.h>
#include<conio.h>
void insert(int a[],int *n,int ele,int pos);
void create(int a[],int *n);
void printlist(int a[],int *n);
void del(int a[],int *n,int pos);
void diskele(int a[],int pos);
int isempty(int *n);
void makeempty(int *n);
int find(int a[],int *n,int ele);

void insert(int a[],int *n,int ele,int pos)
{

	int i = 0;
	*n = *n+1;
	if(pos >= *n)
		a[pos-1] = ele;

	else
	{
		for( i = *n-1; i >= pos-1; i--)
		a[i+1] = a[i];
		a[pos-1] = ele;
	}

}
void create(int a[],int *n)
{
	int i;
	printf("Enter no. of Elements = ");
	scanf("%d",&(*n));
	for(i=0;i<*n;i++)
	{
		printf("Enter number = ");
		scanf("%d",&a[i]);
	}
}
void printlist(int a[],int *n)
{
	int i;
	if(*n==0)
	printf("Array is empty");
	else
	{
		printf("\nArray is\n\n");
		for(i=0;i<*n;i++)
		{
			printf("%d\t",a[i]);
		}
	}
}
int isempty(int *n)
{
	if(*n==0)
	return 1;
	else
	return 0;
}
void makeempty(int *n)
{
	*n=0;
}
void diskele(int a[],int pos)
{
	printf("\nElement at position %d is = %d\n",pos,a[pos-1]);
}
int find(int a[],int *n,int ele)
{
	int i;
	for(i=0;i<*n;i++)
		if(a[i]==ele)
			return i;
	return -1;
}
void del(int a[],int *n,int pos)
{
	int i = 0;
	if(*n==0)
	printf("Array Empty");
	else
	{
		for( i = pos-1; i < *n-1; i++)
		a[i] = a[i+1];
	}
	*n=*n-1;
}
void main()
{
	int a[100],ch,ele,pos,t;
	int *n;
	char choi = 'Y' ;
	*n = 0;
	clrscr();
	do
	{
		printf("\nMenu\n1. Is Empty\n2. Make Empty\n3. Create\n4. Find\n5. Printlist\n6. Insert\n7. Delete\n8. Find element at position k\n9. Exit\n");
		printf(“\nEnter your choice = ”);
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
		t=isempty(&n);
		if(t==0)
		printf("\nArray is Not Empty\n");
		else
		printf("\nArray is Empty\n");
		break;
		case 2:
		makeempty(&n);
		printlist(a,&n);
		break;
		case 3:
		create(a,&n);
		printlist(a,&n);
		break;
		case 4:
		printf("\nEnter Element to be Searched = ");
		scanf("%d",&ele);
		t = find(a,&n,ele);
		if(t == -1)
		printf("\nElement Not found");
		else
		printf("\nElement Postion  = %d", t+1 );
		break;
		case 5:
		printlist(a,&n);
		break;
		case 6:
		printf("\nEnter position and element to be inserted = \n");
		scanf("%d%d",&pos,&ele);
		insert(a,&n,ele,pos);
		break;
		case 7:
		printf("\nEnter position to be deleted = \n");
		scanf("%d",&pos);
		del(a,&n,pos);
		break;
		case 8: printf("\nEnter position = \n");
		scanf("%d",&pos);
		diskele(a,pos);
		break;
		case 9:
		choi = 'n';
		break;
		default:
		printf("Wrong Input\n");
		break;
	}
	}while(choi == 'Y');
	getch();
}
