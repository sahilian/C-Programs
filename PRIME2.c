#include <stdio.h>
#include <conio.h>

/*Yo program le number of factors count garchha ra dui wota factor jasko hunchha teslai prime vanera
print garinchha*/
int main()
{
	int i,j,count;
	for (i=1;i<=100;i++)
	{
		count=0;
		for (j=1;j<=i;j++)
		{
			if (i%j==0)
			count++;
		}
		if (count==2)
		printf("%d ",i);	
	}
	return 0;
}
