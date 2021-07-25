#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int info;
	struct node *next;
};
int main()
{
	struct node *newnode,*temp,*start;
	int i,n;
	start=NULL;
	printf("enter no.of nodes :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
 {		
    newnode=malloc(sizeof(struct node));
	printf("\n enter data :");
	scanf("%d,&newnode->info");
	newnode->next = NULL;
	if(start==NULL)
	{		
	    start=temp=newnode;
    }
	else 
    {
	    temp->next=newnode;
	    temp=newnode;
    for(temp=start;temp!=NULL;temp=temp->next)
     {
	   printf("%d %u",temp->info,temp->next);
     }
    } 
 }
return 0;
}