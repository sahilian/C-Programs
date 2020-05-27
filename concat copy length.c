#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	char arr1[100],arr2[100],arr3[100];
	int i=0,j=0;
	printf("Enter first string: ");
	gets(arr1);
	printf("Enter second string: ");
	gets(arr2);
	
	while (arr1[i]!='\0')
	{
		i++;
	}
	printf("The length of first string is: %d\n",i);
	
	while (arr2[j]!='\0')
	{
		j++;         
	}
	printf("The length of second string is: %d\n",j);
	
	for (i=0;arr1[i]!='\0';i++)
	{
		arr3[i]=arr1[i];
	}
	arr3[i]='\0';
	printf("After copying first string to another string:\n");
	printf("First string is: %s\n",arr1);
	printf("Another string is: %s\n",arr3);
	
	i=0,j=0;
	while(arr1[i]!='\0')
	{
		i++;
	}
	while(arr2[j]!='\0')
	{
		arr1[i]=arr2[j];
		i++;
		j++;
	}
	arr1[i]='\0';
	printf("After concatinating first string with second string: %s\n",arr1);
	return 0;
}
