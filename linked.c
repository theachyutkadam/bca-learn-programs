#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int info;
	struct node *next;
};
int main() {
	int n,i,choice,data,item;
	struct node *start = NULL;
  struct node *temp;
  struct node *p;
  int pos;
 
	while(1) {
		printf("----------------\n");
		printf("1. create linked list\n");
		printf("2. display linked list\n");
		printf("3. add at the beginning\n");
		printf("4. add at the end\n");
		printf("5. insertion after a node\n");
		printf("enter your choice : \n");
		printf("----------------\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1: 
				printf("creating linked list\n");
				break;
			case 2:
				printf("displaying linked list\n");
				struct node *p;
				if (start==NULL) {
					printf("list is empty");
				}
				p = start;
				while(p!=NULL) {
					printf("%d\n", p->info);
					p = p->next;
				}
				printf("\n\n");
				break;
			case 3:
			  printf("enter data to add\n");
			  scanf("%d",&data);
			  printf("entered data is :");
			  printf("%d\n", data);
			  temp = malloc(sizeof(struct node));
			  temp->info = data;
			  temp->next = start;
			  start = temp;
			  break;
			case 4:
			  printf("enter data at end\n");
			  scanf("%d",&data);
			  printf("entered data is :");
			  printf("%d\n\n", data);
			  temp = malloc(sizeof(struct node));
			  temp->info = data;
			  p = start;
			  while(p->next!=NULL)
			  	p = p->next;
			    p->next = temp;
			    temp->next = NULL;
			  break;
			case 5:
			{
			printf("enter the data at position\n");
			scanf("%d",&pos);
			printf("enter the data :");
			scanf("%d\n", &item);
			printf("entered data is :");
			printf("%d\n", item);
		  }
			p = start;
			while(p!=NULL) {
				if(p->info == item)
				{
					temp = malloc(sizeof(struct node));
					temp->info = data;
					temp->next = p->next;
					p->next = temp;
					return start;
				}
				p = p->next;
			}  
			printf("%d not present in the list \n",item);
			return start;
			break;
			case 12:
				printf("Bye bye.\n");
				exit(1);
			default:
				printf("invalid choice\n");
		}
	}
}
