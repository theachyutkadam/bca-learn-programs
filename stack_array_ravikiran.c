#include<stdio.h>
#include<stdlib.h>
#define max 10

void push(int item);
int pop();
int display();
int isfull();
int isempty();
int top = -1;
int stack_arr[max];

int main()
{
int ch,item;
{
 while(1)
  {
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.display\n");
	printf("enter your choice\n");
	scanf("%d",&ch);

	switch(ch)
	{
        case 1:      	
         printf("enter the element\n");
      	 scanf("%d",&item);
      	 push(item);
      	break;

      	case 2:
      	 item = pop();
      	 printf("item popped is:%d\n",item);
      	break;

      	case 3:
      	 display();
      	break;

      	default:
      	 printf("its wrong choice\n");
	}
   }
}	
void push(int item)
{ 
	   if(isfull())
      {
      	printf("stack is overflow\n");
      	return;
      }
      top = top + 1;
      stack_arr[top] = item;
}

int pop()
{
    int item;
	if(isempty())
		{
			printf("stack is underflow\n");
		}
			item = stack_arr[top];
			top = top-1;
			return item;
}

int isfull()
{
	if(top==max-1)
	return 1;
    else
	return 0;
}

int isempty()
{
	if(top==-1) 
	return 1;
	else
	return 0;
}

void display()
{
 int i;
 if(isempty())
  {
	printf("stack is empty\n");
	return;
  }
  printf("stack element are\n");
	for(i=top;i>=0;i--)
    printf("items are %d\n",stack_arr[i]);
}
}

