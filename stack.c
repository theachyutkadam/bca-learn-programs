#include<stdio.h>
#include<malloc.h>
#define max 10

struct stack
{
   int data[max];
   int top;
};
struct stack* push(struct stack *s)
struct stack* pop(struct stack *s)
int main()
int ele,ch;
{
	printf("1.push");
	printf("2.pop");
	printf("3.display");
    
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
    	case1:if(isfull(&s))
    	{
    	printf("stack is overflow\n");
        }
        else
        {
         printf("enter a element\n");
         scanf("%d",&ele);
         push(&s,ele);
        }
        break;

        case2:if(isempty(&s))
        {
          printf("stack is underflow\n");
        }
        else
        {
          ele=pop(&s);
          printf("pop element is %d\n",ele); 
        }
    }
}

int push(struct stack *s,int ele)
{
			s->top++;
		    s->data[s->top]=ele;
}