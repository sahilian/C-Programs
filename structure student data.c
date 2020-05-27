#include <stdio.h>
#include <conio.h>
#define max 10
struct student
{
	char fname[20];
	char lname[20];
	int roll;
	char address[20];
	int mobile;
};
void main()
{
	struct student s[10];
	int i;
	for (i=1;i<=max;i++)
	{
		printf("Enter first name:");
		scanf("%s",s[i].fname);
		printf("Enter last name:");
		scanf("%s",s[i].lname);
		printf("Enter roll number:");
		scanf("%d",&s[i].roll);
		printf("Enter address:");
		scanf("%s",s[i].address);
		printf("Enter mobile:");
		scanf("%d",&s[i].mobile);
		printf("\n");
	}
	for (i=1;i<=max;i++)
	{
		printf("Data of student %d\n",i);
		printf("First name: %s\n",s[i].fname);
		printf("Last name: %s\n",s[i].lname);
		printf("Roll number: %d\n",s[i].roll);
		printf("Address: %s\n",s[i].address);
		printf("Mobile: %d\n",s[i].mobile);
		printf("\n");
	}
}
