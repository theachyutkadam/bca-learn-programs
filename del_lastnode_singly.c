#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node {
	int info;
	struct node *link;
};

int main()
{   
	  struct node *del_last(struct node *head);
	  struct node *head = NULL;
    struct node *ptr = NULL;

	head = malloc(sizeof(struct node));
	head->link = NULL;
	printf("enter the info of first node :\n");
	scanf("%d", &head->info);
	printf("info of first node is :");
	printf("%d\n", head->info);
	printf("address is :");
	printf("%d\n", head);
	printf("_________________\n");
    
    struct node *head1 = NULL;
	head1 = malloc(sizeof(struct node));
	printf("enter the info of second node :\n");
	scanf("%d", &head1->info);
	printf("info of second node is :");
	printf("%d\n", head1->info);
	head1->link = NULL;
	head->link = head1;
	printf("address is :");
	printf("%d\n", head1);
	printf("___________________\n");

	struct node *head2 = NULL;
	head2 = malloc(sizeof(struct node));
	printf("enter the info of third node :\n");
	scanf("%d", &head2->info);
	printf("info of the third node is :");
	printf("%d\n", head2->info);
	head2->link = NULL;
	head1->link = head2;
	printf("address is :");
	printf("%d\n", head2->link);
	printf("____________________\n");


	head = del_last(head);
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d\n", ptr->info);
		ptr = ptr->link;
	}
	return(0);
}

  struct node* del_last(struct node *head)
 {
   if (head == NULL)
  {  	
	 printf("list is already empty\n");
  }
 else if(head->link == NULL)
  {
	 free(head);
	 head = NULL;
  }
  else
  {
	 struct node *temp = head;
	 struct node *temp2 = head;
	 while(temp->link != NULL)
	{
		temp2 = temp;
		temp = temp->link;
	}
	temp2->link = NULL;
	free(temp);
	temp = NULL;
 }
return head;
}
