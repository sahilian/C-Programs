#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b;
	printf("Enter any two numbers:");
	scanf("%d%d",&a,&b);
	printf("The HCF is: %d",hcf(a,b));
}
int hcf(int x, int y)
{
	if(x==0)
	{
		return y;
	}
	hcf(y%x,x);
}
