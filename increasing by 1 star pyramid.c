#include <stdio.h>
int main()
{
	int n,r,p,s;
	int count=1;
	printf("Enter rows:");
	scanf("%d",&n);
	for (r=1;r<=n;r++)
	{
		for (s=n-r;s>=1;s--)
		{
			printf(" ");
		}
		for (p=1;p<=r;p++)
		{
			printf("%d ",count++);
		}
		printf("\n");
	}
	return 0;
}
