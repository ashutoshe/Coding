#include<stdio.h>
#include<stdlib.h>

#define size 5

void insert(int queue[size],int *front,int *rear,int item)
{
 if((*front==0 && *rear==size-1) || (*front==*rear+1))
 printf("\n\nQueue is full.");
 else
 {
 printf("\n\nEnter ITEM: ");
 scanf("%d", &item);

 if(*rear == -1)
 {
 *rear = 0;
 *front = 0;
 }
 else if(*rear == size-1)
 *rear = 0;
 else
 (*rear)++;

 queue[*rear] = item;
 printf("\n\nItem inserted: %d\n", item);
 }
}
void delet(int queue[size],int *front,int *rear)
{
	int item;
if(*front == -1)
 printf("\n\nQueue is empty.\n");
 else
 {
 item = queue[*front];

 if(*front == *rear)
 {
 *front = -1;
 *rear = -1;
 }
 else if(*front == size-1)
 *front = 0;
 else
 (*front)++;

 printf("\n\nITEM deleted: %d", item);
 }
}

void display(int queue[size],int *front,int *rear)
{
 int i;

 if((*front == -1) || (*front==*rear+1))
 printf("\n\nQueue is empty.\n");
 else
 {
 printf("\n\n");

 for(i=*front; i<=*rear; i++)
 printf("%d ",queue[i]);
 }
} 


void main()
{
int ch;
int queue[size], rear=-1, front=-1, item;
 do
 {
	system("cls");
 printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
 printf("\nEnter your choice: ");
 scanf("%d", &ch);

 switch(ch)
 {
 case 1:
 insert(queue,&front,&rear,item);
 break;
 case 2:
 delet(queue,&front,&rear);
 fflush(stdin);
 getchar();
break;
 case 3:
 display(queue,&front,&rear);
 fflush(stdin);
 getchar();
 break;
 case 4:
 exit(0);

 default:
 printf("\n\nInvalid choice. Pleasr try again...\n");
 }
 } while(1);
}