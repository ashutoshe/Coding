#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
#define size 5
struct stack 
{
   int s[size];
   int top;
};
typedef struct stack stack;
 
int stfull(stack *st) 
{
   if ((*st).top >= size - 1)
      return 1;
   else
      return 0;
}
 
void push(stack *st,int item) 
{
   (*st).top++;
   (*st).s[(*st).top] = item;
}
 
int stempty(stack *st) 
{
   if ((*st).top == -1)
      return 1;
   else
      return 0;
}
 
int pop(stack *st) 
{
   int item;
   item = (*st).s[(*st).top];
   (*st).top--;
   return (item);
}
 
void display(stack *st) 
{
   int i;
   if (stempty((st)))
      printf("\nStack Is Empty!");
   else {
      for (i = (*st).top; i >= 0; i--)
         printf("\n%d", (*st).s[i]);
   }
}
 
void main() 
{
   int item, choice;
   char ans='Y';
   stack st;
   st.top=-1;
 
   printf("\n\tImplementation Of Stack");
   do {
	  system("cls") ;
      printf("0.Exit\n1.Push\n2.Pop\n3.Display\n");
      printf("\nEnter Your Choice : ");
      scanf("%d", &choice);
      switch (choice) {
	  case 0:
		 ans='N';
		 break;
      case 1:
         printf("\nEnter The item to be pushed : ");
         scanf("%d", &item);
         if (stfull(&st))
            printf("\nStack is Full!");
         else
            push(&st,item);
         break;
      case 2:
         if (stempty(&st))
            printf("\nEmpty stack!Underflow !!");
         else {
            item = pop(&st);
            printf("\nThe popped element is %d", item);
         }
		 fflush(stdin);
		 getchar();
         break;
      case 3:
         display(&st);
		 fflush(stdin);
		 getchar();
         break;
	  default:
		  printf("Wrong Input\nPress Enter to Continue");
		  fflush(stdin);
		  getchar();
		  break;
      }
   } while (ans == 'Y');
}