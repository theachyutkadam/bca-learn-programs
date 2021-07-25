#include<stdio.h>
#include<stdlib.h>
 
 struct node {
 	int data;
 	struct node *link;
 };
    int main() 
  {
     struct node *ptr;
     struct node *add_beg(struct node *head, int d);
 	
 	struct node *head = malloc(sizeof(struct node));
 	head->data = 44;
 	printf("%d\n",head->data);
 	head->link = NULL;

 	struct node *head1 = malloc(sizeof(struct node));
 	head1->data = 55;
 	printf("%d\n", head1->data);
 	head1->link = NULL;
 	head->link = head1;

 	struct node *head2 = malloc(sizeof(struct node));
 	head2->data = 66;
 	printf("%d\n", head2->data);
 	head1->link = head2;
 	head2->link = NULL;


 	head->link = ptr; 
 	int d = 3;

 	head = add_beg(head,d);
 	ptr = head;
 	while(ptr != NULL){
 		printf("%d",ptr->data);
 		ptr = ptr->link;
 	}
 	return (0);
  }
     struct node *add_beg(struct node *head, int info)
     {
    	struct node *ptr = malloc(sizeof(struct node));
    	ptr->data = info;
    	// ptr->link = NULL;

    	ptr->link = head;
    	head = ptr;
    	return head;
     }
