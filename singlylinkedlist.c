#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link; 
};
 int main()
 
 {
 	struct node *head;
 	head = malloc(sizeof(struct node));
 	printf("enter the data for first node :");
 	scanf("%d", &head->data);
 	printf("data is :");
 	printf("%d\n", head->data );
 	head->link=NULL;

 	 struct node *head1;
 	head1 = malloc(sizeof(struct node));
 	printf("enter the data for second node:");
 	scanf("%d", &head1->data);
 	printf("data is :");
 	printf("%d\n", head1->data );
 	head1->link=NULL;
 	head->link = head1;

 	 struct node *head2;
 	head2 = malloc(sizeof(struct node));
 	printf("enter the data for third node:");
 	scanf("%d", &head2->data);
 	printf("data is :");
 	printf("%d\n", head2->data );
 	head2->link=NULL;
 	head1->link = head2;

 	return(0);

 }