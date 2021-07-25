#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
int main()
{
	struct node *head ;
	head = (struct node *)malloc(sizeof(struct node));
	printf("enter the data ");
	scanf("%d", &head->data);
	printf("data is : ");
	printf("%d \n",head->data);
	printf("Address is :"  );
	printf("%d", head->link);
	return 0;
}
