#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;
};
    int main()
  {     
  	     struct node *add_last(struct node *head, int info);
  	     int info;
  	     struct node *p;
  	     struct node *ptr;

  	struct node *head = malloc(sizeof(struct node));
  	printf("enter the data to first node\n");
  	scanf("%d", &head->data);
  	printf("data is :");
  	printf("%d\n",head->data);
 	head->link = NULL;

 	struct node *head1 = malloc(sizeof(struct node));
 	printf("enter the data for the sec node\n");
 	scanf("%d", &head1->data);
 	printf("data is :");
 	printf("%d\n",head1->data);
 	head->link = head1;
 	head1->link = NULL;

 	struct node *head2 = malloc(sizeof(struct node));
 	printf("enter the data for third node\n");
 	scanf("%d",&head2->data);
 	printf("data is :");
 	printf("%d\n", head2->data);
 	head1->link = head2;
 	head2->link = NULL;

 	head = add_last(head,info);
 	ptr = head;
 	while(ptr!=NULL){
 		printf("%d\n", ptr->data);
 		ptr = ptr->link;
 	}
 	return(0);
  }  
     struct node *add_last(struct node *head, int info)
     {  
     	struct node *ptr;
     	struct node *p = malloc(sizeof(struct node));
     	p->data = info;

     	ptr = head;
     	while(ptr!=NULL){
     		ptr = ptr->link;
     	}
     	ptr->link = p;
     	p->link = NULL;
     	return(head);
     }
    
