#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m[10][10],sumin,sumout,n,v,i,j;
	printf("\n enter no. of vertices : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)

 { 
  m[i][j]=0;
 
 	if(i!=j)
 
   printf("\n is there an edge between %d and %d ,i+1,j+1");
   scanf("%d",&m[i][j]);
 }
 printf("\n vertex indegree outdegree ");
 for(v=0;v<n;v++)
 {
    sumin=sumout=0;
    for(i=0;i<n;i++)
    {
       sumin=sumin=m[v][i];
       sumout=sumout=m[v][i];
       printf("%d \t %d \t %d \t %d,v+1,sumin,sumout,sumin+sumout");
    }
    return(0);
 }
}
    