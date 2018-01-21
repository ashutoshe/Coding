#include<stdio.h>
#include<stdlib.h>

#define MaxSizeOfArray 5

int count=0;

void insert(int queue[MaxSizeOfArray],int *rear,int *front)
{
	int item;
	if((*front==0 && *rear==MaxSizeOfArray-1) || (*rear==*front-1))
    {
        printf("\nOverflow\n");
		fflush(stdin);
		getchar();
    }
	else
	{
		if(*rear==MaxSizeOfArray-1)
			*rear=0;
		else
			(*rear)++;
		
		if(*front==-1)
			*front=0;
		
		printf("Enter a Value : ");
		scanf("%d",&item);
		queue[*rear]=item;
		count++;
	}
}

void del(int queue[MaxSizeOfArray],int *rear,int *front)
{
	if(*front==-1)
	{
		printf("\nNo Element to Delete");
		fflush(stdin);
		getchar();
	}
	else 
	{
		if(*front==*rear)
			(*front)=(*rear)=-1;
		else
		{
			if(*front==MaxSizeOfArray-1)
				*front=0;
			else
				(*front)++;
		}	
		count--;
	}	
}

void disp(int queue[MaxSizeOfArray],int *rear,int *front)
{
	printf("\n");
    	int i,c=1;
	
	if(*front<=*rear && *front!=-1)
	{
		for(i=*front;i<=*rear;i++)
		{
			printf("%d---%d\n",c,queue[i]);
			c++;
		}
	}

	else if(*front>*rear)
	{
		for(i=*front;i<MaxSizeOfArray;i++)
		{
			printf("%d---%d\n",c,queue[i]);
			c++;
		}	
		for(i=0;i<=*rear;i++)
		{
			printf("%d---%d\n",c,queue[i]);
			c++;
		}
	}
}

void delete(int queue[MaxSizeOfArray],int *rear,int *front)
{
    *front=*rear=-1;
}

void find(int queue[MaxSizeOfArray],int *rear,int *front,int item)
{
	int i,c=1;
	
	if(*front<=*rear && (*front)!=-1)
	{
		for(i=*front;i<=*rear;i++)
		{
			if(queue[i]==item)
			{
				printf("%d was found at Location %d\n",queue[i],c);
			}
			c++;
		}
	}

	else if(*front>*rear)
	{
		for(i=*front;i<MaxSizeOfArray;i++)
		{
			if(queue[i]==item)
			{
				printf("%d was found at Location %d\n",queue[i],c);
			}
			c++;
		}	
		for(i=0;i<=*rear;i++)
		{
			if(queue[i]==item)
			{
				printf("%d was found at Location %d\n",queue[i],c);
			}
			c++;
		}
	}
	if(c==1)
	{
		printf("\nElement not Found");
	}
}

void main()
{
	int queue[MaxSizeOfArray];
	int rear=-1,front=-1;
    	int ch=0,temp;
    while(ch!=4)
    {
        system("cls");
        printf("The Maximum Size of Queue is %d\n",MaxSizeOfArray);
		disp(queue,&rear,&front);
        printf("\n1.Queue");
        printf("\n2.DeQueue");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\n5.Make Empty");
		printf("\n6.Check Empty");
		printf("\n7.Find");
		printf("\n8.Find at Location");
		printf("\n\nEnter Your Choice : ");
		scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert(queue,&rear,&front);
                break;
            case 2:
                del(queue,&rear,&front);
                break;
            case 3:
                disp(queue,&rear,&front);
			fflush(stdin);
			getchar();
                break;
            case 4:
                break;
            case 5:
                delete(queue,&rear,&front);
                break;
			case 6:
                if(front==rear && front==-1)
				printf("\nEmpty");
				else
				printf("\nNot Empty");
				break;
            case 7:
				printf("\nEnter Item to be Found : ");
				scanf("%d",&temp);
				find(queue,&rear,&front,temp);
				fflush(stdin);
				getchar();
                break;
            case 8:
				printf("\nEnter Location : ");
				scanf("%d",&temp);
				if(!(temp>0 && temp<=count))
				{
					printf("\nLocation not in Stack");
					fflush(stdin);
					getchar();
					break;
				}
				printf("\nThe Value at Location %d is %d",temp,queue[temp-1]);
				fflush(stdin);
				getchar();
                break;
			default:
				printf("\nInvalid Choice");
				break;
	
        }
    }
}
