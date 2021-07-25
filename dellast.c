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
      int i;

    for(i=0;i<3;i++){
	printf("enter the info :");
	struct node *head = malloc(sizeof(struct node));
	scanf("%d",&head->info);
	printf("info is :");
	printf("%d\n",head->info);
	head->link = head;
	printf("address is :");
	printf("%d\n",head->link);
  }

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
  	struct node *temp = NULL;
  	struct node *last = NULL;
  	printf("deleted element is :%d",head->info);
  	if(head->link == NULL)
  	{
  		free(head);
  		head = last = NULL;
  	}
  	else
  	{
  		temp = head = last;
  		while(temp->link != NULL){
  			temp = temp->link;
  		}
  		temp->link = NULL;
  		free(last);
  		last = temp;
  	}
  	return(head);
  }