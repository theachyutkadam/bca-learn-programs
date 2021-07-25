#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node
{
	char data[10];
	struct node *link;

}NODE;
int main()
{
	NODE *newnode,*temp,*start;
	int i,n;
	start=NULL;
	printf("enter no.of nodes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)

{	newnode=malloc(sizeof(NODE));
	printf("\n enter data :");
	scanf("%s,&newnode->data");
	newnode->link==NULL;
	if(start==NULL)
{
	start=temp=newnode;
}
	else
{
	temp->link=newnode;
	temp=newnode;
}
}
for(temp=start;temp!=NULL;temp=temp->link)
{
	printf("%s %u",temp->data,temp->link);
}
return (0);
}