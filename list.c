#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node {
	int info;
	struct node *next;

}NODE;

NODE *newnode,*temp,*start;

NODE createlist(NODE *start) {
	int i,n;
	printf("enter no.of nodes\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		newnode=malloc(sizeof(NODE));
		printf("\n enter data");
	}
	
	scanf("%d,&newnode->info");
	newnode->next=NULL;
	if(start==NULL)
	{
	start=temp=newnode;
	}//if
	else
	{
	temp->next=newnode;
	temp=newnode;
	}
return(start);
}

void display(NODE *start)
{
	for(temp=start;temp!=NULL;temp=temp->next)
	{
	printf("%d %u,temp->info,temp->next");

	}
}
NODE *insertfirst(NODE *start)
{
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->next=NULL;
	printf("enter data \n");
	scanf("%d",&newnode->info);
	newnode->next=start;
	start=newnode;
	return start;
}
NODE *insertlast(NODE *start)
{
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->next=NULL;
	printf("enter data \n");
	scanf("%d",&newnode->info);
	for(temp=start;temp->next!=NULL;temp=temp->next);
	temp->next=newnode;
	return start;
}
NODE *insertbet(NODE *start)
{
	int pos,i;
	printf("enter position\n");
	scanf("%d",&pos);
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->next=NULL;
	printf("enter data \n");
	scanf("%d",&newnode->info);
	temp=start;
	for(i=1;i<pos-1;i++)
	{
	temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	return start;
}
int main()
{
	int ch;
	start=NULL;
	do
	{
	printf("1.create list\n");
	printf("2.dislay list\n");
	printf("3.insert at beginning\n");
	printf("4.insert at last\n");
	printf("5.insert in between");
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	start = createlist(start);
	break;
	case 2:
	display(start);
	display(start);
	break;
	case 3:
	start = insertfirst(start);
	display(start);
	break;
	case 4:
	start = insertlast(start);
	display(start);
	break;
	case 5:
	start = insertbet(start);
	display(start);
	break;
	}
	while(ch!=0);
	return(0);
}