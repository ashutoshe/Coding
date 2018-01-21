#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *ptr;
};

typedef struct node * queueptr;

int count = 0;
 
void create(queueptr *front,queueptr *rear)
{
    *front = *rear = NULL;
}
 
void queuesize(queueptr *front,queueptr *rear)
{
    printf("Queue size : %d", count);
}
 
void enq(queueptr *front,queueptr *rear,int data)
{
	queueptr temp;
    if (*rear == NULL)
    {
        *rear = (queueptr) malloc(sizeof(struct node));
        (*rear)->ptr = NULL;
        (*rear)->info = data;
        *front = *rear;
    }
    else
    {
        temp=(queueptr)malloc(1*sizeof(struct node));
        (*rear)->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
 
        *rear = temp;
    }
    count++;
}
 
void display(queueptr *front,queueptr *rear)
{
	queueptr front1 = *front;
 
    if ((front1 == NULL) && (*rear == NULL))
    {
        printf("Queue is empty\n\n");
        return;
    }
	
	printf("Front ---> ");
    while (front1 != *rear)
    {
        printf("%d --- ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == *rear)
        printf("%d ", front1->info);
	
	printf("<--- Rear\n\n");
}
 
void deq(queueptr *front,queueptr *rear)
{
    queueptr front1 = *front;
 
    if (front1 == NULL)
    {
        printf("\nNo Element to Delete");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("Dequed value : %d", (*front)->info);
            free(*front);
            *front = front1;
        }
        else
        {
            printf("Dequed value : %d", (*front)->info);
            free(*front);
            *front = NULL;
            *rear = NULL;
        }
        count--;
}
 
int frontelement(queueptr *front,queueptr *rear)
{
    if ((*front != NULL) && (*rear != NULL))
        return((*front)->info);
    else
        return 0;
}
 
void empty(queueptr *front,queueptr *rear)
{
     if ((*front == NULL) && (*rear == NULL))
        printf("\nQueue empty");
    else
       printf("\nQueue not empty");
}
 
void main()
{
    queueptr front,rear;
    int no, ch, e;
 
    create(&front,&rear);
    while (1)
    {
		system("cls");
		display(&front,&rear);
		printf("1.Enque");
		printf("\n2.Deque");
		printf("\n3.Front element");
		printf("\n4.Check Empty");
		printf("\n5.Exit");
		printf("\n6.Display");
		printf("\n7.Queue size");
		printf("\n7.Make Empty\n");
		printf("\nEnter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            enq(&front,&rear,no);
            break;
        case 2:
            deq(&front,&rear);
			getche();
            break;
        case 3:
            e = frontelement(&front,&rear);
            if (e != 0)
                printf("\nFront element : %d", e);
            else
                printf("\nNo Front Element in Queue as Queue is Empty");
			getche();
            break;
        case 4:
            empty(&front,&rear);
			getche();
            break;
        case 5:
            exit(0);
        case 6:
            display(&front,&rear);
			printf("\n");
			getche();
            break;
        case 7:
            queuesize(&front,&rear);
			getche();
            break;
	case 8:
	    if(front==NULL)
		printf("Empty");
	    else
		printf("Not Empty");
        default:
            printf("Wrong choice, Please enter correct choice  ");
			getche();
            break;
        }
    }
}
