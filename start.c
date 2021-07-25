#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
int main()
 {
   struct node *head = NULL;
   int i;
   for(i=0;i<10;i++)
   {
	printf("enter the data :");
	struct node *head = malloc(sizeof(struct node));
	scanf("%d",&head->data);
	printf("data is :");
	printf("%d\n",head->data);
	head->next = head;
	printf("address is :");
	printf("%d\n",head->next);
   }
   head->next = NULL;
   return(0);
 }
