#include <stdio.h>
int a,b,c,rem,hcf;
main ()
{
	printf("Enter two integers:");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		rem=a%b;
		c=b;
	}
	else
	{
		rem=b%a;
		c=a;
	}
	if (rem==0)
	{
		printf("The HCF is: %d",c);
	}
	else
	{
		while (rem!=0)
		{
			rem=c%rem;
			c=rem;
		}
		printf("The HCF is: %d",c);
	}
	return 0;
}
