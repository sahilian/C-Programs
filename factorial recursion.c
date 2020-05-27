/*To compute the factorial of an positive integer*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	printf("The factorial is %d",fact(n));
}
int fact(int a)
{
	if (a==0)
	{
		return 1;
	}
	else
	{
		return (a*fact(a-1));
	}
}
