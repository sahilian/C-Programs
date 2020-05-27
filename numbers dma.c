/*Write a program to get input of n numbers in an array using dynamic memory allocation 
and print the array elements.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,*num,i;
	printf("How many numbers do you want to enter?\n");
	scanf("%d",&n);
	num=(int*)malloc(sizeof(int)*n);
	printf("\nEnter your numbers:\n");
	for(i=1;i<=n;i++)
	{
		printf("Number %d:",i);
		scanf("%d",&num[i]);
	}
	printf("\nYour entered numbers are:\n");
	for(i=1;i<=n;i++)
	{
		printf("Number %d:%d\n",i,num[i]);
	}
}
