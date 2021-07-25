#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}; 
struct node* del_first(struct node *head);
int main() {
	struct node *head = NULL;
    struct node *ptr=NULL;
	head = malloc(sizeof(struct node));
	printf("enter the data of first node :\n");
	scanf("%d", &head->data);
	printf("data of first node is :");
	printf("%d\n", head->data);
	head->link = NULL;
	printf("address is :");
	printf("%d\n", head);
	printf("_________________\n");
    
    struct node *head1 = NULL;
	head1 = malloc(sizeof(struct node));
	printf("enter the data of second node :\n");
	scanf("%d", &head1->data);
	printf("data of second node is :");
	printf("%d\n", head1->data);
	head1->link = NULL;
	head->link = head1;
	printf("address is :");
	printf("%d\n", head1);
	printf("___________________\n");

	struct node *head2 = NULL;
	head2 = malloc(sizeof(struct node));
	printf("enter the data of third node :\n");
	scanf("%d", &head2->data);
	printf("data of the third node is :");
	printf("%d\n", head2->data);
	head2->link = NULL;
	head1->link = head2;
	printf("address is :");
	printf("%d\n", head2->link);
	printf("____________________\n");

  head = del_first(head);
  ptr = head;
  while(ptr != NULL) {
  	printf("%d\n", ptr->link);
  	ptr = ptr->link;
  }
	return(0);
}
    struct node* del_first(struct node *head)
{
	if(head == NULL)
		printf("List is already empty\n");
	else
	{
		struct node *temp = head;
		head = head->link;
		free(temp);
	}
	return head;
}