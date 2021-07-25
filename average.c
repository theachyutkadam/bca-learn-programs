#include<stdio.h>
#include<conio.h>

void main() {
	int n1,n2,n3,n4,n5, add, average;
	printf("Programe for average \n");
	printf("Enter the first number : ");
	scanf("%d", &n1);
	printf("Your first number is : %d \n", n1);

	printf("Enter the first number : ");
	scanf("%d", &n2);
	printf("Your first number is : %d \n", n2);
	
	printf("Enter the first number : ");
	scanf("%d", &n3);
	printf("Your first number is : %d \n", n3);
	
	printf("Enter the first number : ");
	scanf("%d", &n4);
	printf("Your first number is : %d \n", n4);
	
	printf("Enter the first number : ");
	scanf("%d", &n5);
	printf("Your first number is : %d \n", n5);

	add = n1 + n2 + n3 + n4 + n5;
	printf("Addition of all numbers : %d \n", add);

	average = add /5;

	printf("Average : %d\n", average);
}