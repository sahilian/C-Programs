#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b;
	printf("Enter the base:");
	scanf("%d",&a);                                                    
	printf("Enter the power:");
	scanf("%d",&b);
	printf("output: %d",power(a,b));
}
int power(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
	return a*power(a,b-1);
}
