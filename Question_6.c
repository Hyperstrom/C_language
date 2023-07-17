// Write a C program to store information of n number of students using structure.
#include<stdio.h>
struct info{
	char name[10];
	char section;
	int roll;
};
int main()
{
	struct info student[10];
	int i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Name[%d]: ",i+1);
		scanf("%s",student[i].name);
		printf("Enter section[%d]: ",i+1);
		scanf("%s",&student[i].section);
		printf("Enter Roll[%d]: ",i+1);
		scanf("%d",&student[i].roll);
		printf("\n");
	}
	printf("Student Details...\n");
	printf("Name\tSec\tRoll\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%c\t%d\n", student[i].name, student[i].section, student[i].roll);
	}
	return 0;
}

