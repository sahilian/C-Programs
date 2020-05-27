/*PROGRAM TO CALCULATE MATRIX MULTIPLICATION AND ADDITION*/
//TO PERFORM BOTH PRODUCT AND SUM SIMULTANEOUSLY YOU MUST ENTER TWO SQUARE MATRICES
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int **arr1,**arr2,**product;
	int i,j,k,m,n,o,p,sum=0;
	
	printf("Enter the number of rows and columns for matrix A:\n");
	scanf("%d%d",&m,&n);
	
	printf("Enter the number of rows and columns for matrix B:\n");
	scanf("%d%d",&o,&p);
	
	arr1=(int**)malloc(sizeof(int*)*m);
	arr2=(int**)malloc(sizeof(int*)*o);
	product=(int**)malloc(sizeof(int*)*m);
		
	for (i=0;i<m;i++)
	{
		arr1[i]=(int*)malloc(sizeof(int)*n);
	}
	for (i=0;i<o;i++)
	{
		arr2[i]=(int*)malloc(sizeof(int)*p);
	}	
	for (i=0;i<m;i++)
	{
		product[i]=(int*)malloc(sizeof(int)*p);
	}	
	printf("Enter the data for matrix A:\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("A[%d][%d]:",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
		
	printf("\nEnter the data for matrix B:\n");
	for (i=0;i<o;i++)
	{
		for (j=0;j<p;j++)
		{
			printf("B[%d][%d]:",i+1,j+1);
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}

	if (m!=o||n!=p)
	{
		printf("The matrix addition cannot be performed as their order is not same!\n");
	}
	else
	{
		printf("Sum of A and B is:\n");
		for (i=0;i<m;i++)
		{
			for (j=0;j<n;j++)
			{
				printf("%d\t",arr1[i][j]+arr2[i][j]);
			}
			printf("\n");
		}
	}
	
	if (n!=o)
	{
		printf("The matrix multiplication is not possible as 'n != o'");
	}
	else
	{
		printf("Product of A and B is:\n");
		for (i=0;i<m;i++)
		{
			for (j=0;j<p;j++)
			{
				for (k=0;k<o;k++)
				{
					sum+=arr1[i][k]*arr2[k][j];
				}
				product[i][j]=sum;
				sum=0;
			}
		}
	}
		
	for (i=0;i<m;i++)
	{
		for (j=0;j<p;j++)
		{
			printf("%d\t",product[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
