#include <stdio.h>

void main()
{
	printf("this is the testing program.\n");
  char first_name, last_name, job_title, full_name;
	printf("Enter First Name:- ");
	scanf("%s", &first_name);
	printf("\nEnter Last Name:- ");
	scanf("%s", &last_name);
	printf("\nEnter Job Title:- ");
	scanf("%s", &job_title);
  full_name = first_name + last_name;
	printf("You Full Name Is:- %c", &full_name);
}