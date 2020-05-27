#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i,n;
	float av,sum=0;
	int *a;
	printf("How many numbers do you want to calculate?:");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	printf("Enter numbers:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("The sum of the numbers is:%.2f",sum);
	av=sum/n;
	printf("\nThe average of the numbers is:%.2f",av);
	printf("\nYour entire array of is:\n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
