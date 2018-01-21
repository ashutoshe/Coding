#include<stdio.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int count=0;

struct queue{
int info;
struct queue *link;
};
typedef struct queue * que;

void push(que *front,que *rear,int n)
{
que newnode;
newnode=(struct queue*)malloc(sizeof(struct queue));
newnode->info=n;
newnode->link=NULL;
if(count==0)
*front=newnode;
else
    (*rear)->link=newnode;
    *rear=newnode;
    (*rear)->link=*front;
count++;
}


int pop(que *front,que *rear)
{
int n;
que temp;
if(count==0)
return (-1);
count--;
    if(*front==*rear)
    {
        n=(*front)->info;
        free(*front);
        *front=NULL;
        *rear=NULL;
    }else
    {
            temp= *front ;
            n = temp-> info ;
            *front = (*front) -> link ;
            (*rear) -> link = *front ;
            free ( temp ) ;
    }
return n;
}


void display(que *front,que *rear)
{
que temp;
int i;
if(count==0)
pf("Empty");
else
{
temp=*front;
for(i=0;i<count;i++)
{
pf("%d ",temp->info);
temp=temp->link;
}
}
pf("\n");
}


int size()
{
return count;
}

void main()
{
que front=NULL,rear=NULL;
int n,ch=10;
while(ch!=0)
{
	system("cls");
pf("1.Push\n");
pf("2.Pop\n");
pf("3.SizeOfQueue\n");
pf("4.Display\n");
pf("0.EXIT\n");
sf("%d",&ch);
switch(ch)
{
case 1:
{
pf("Enter the Number \n");
sf("%d",&n);
push(&front,&rear,n);
break;
}
case 2:
{
n=pop(&front,&rear);
if(n==-1)
pf("Queue is empty\n");
else
pf("Number poped from queue is %d\n",n);
fflush(stdin);
getchar();
break;
}
case 3:
{
n=size();
pf("Size of queue is %d\n",n);
fflush(stdin);
getchar();
break;
}
case 4:
{
pf("Queue is -->> ");
display(&front,&rear);
fflush(stdin);
getchar();
}
case 0:
break;
default:
pf("Wrong Choice\n");
fflush(stdin);
getchar();
break;
}
}
}