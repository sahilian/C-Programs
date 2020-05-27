#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp1;
	char a;
	int chara=0,line=1;
	fp1=fopen("C:\\Users\\termi\\Desktop\\file.txt","r");
	if(fp1!=NULL)
	{
		a=getc(fp1);
		while(a!=EOF)
		{
			if(a!='\n')
			{
				if(a!=' ')
				{
					chara++;
				}
			}
			else
			{
				line++;
			}
			a=getc(fp1);
		}
		fclose(fp1);
		printf("The number of characters is: %d",chara);
		printf("\nThe number of lines is: %d",line);
	}
	else
	{
		printf("\nFile not found!");
	}
	
}
