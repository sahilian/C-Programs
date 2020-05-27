/*Write a program to read a text file and copy all contents in the new file.
Open the newly copied file and print the content into screen.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp1,*fp2;
	char a,b;
	fp1=fopen("C:\\Users\\termi\\Desktop\\file.txt","r");
	fp2=fopen("C:\\Users\\termi\\Desktop\\file2.txt","w");
	if(fp1==NULL)
	{
		printf("\nFile not found!");
	}
	else if(fp2==NULL)
	{
		printf("\nFile cannot be written!");
	}
	else
	{
		a=getc(fp1);
		while(a!=EOF)
		{
			putc(a,fp2);
			a=getc(fp1);
		}
		fclose(fp1);
		fclose(fp2);
	printf("\nThe copied file is:");
	fp2=fopen("C:\\Users\\termi\\Desktop\\file2.txt","r");
	b=getc(fp2);
	while(b!=EOF)
	{
		putchar(b);
		b=getc(fp2);
	}
	fclose(fp2);
	}
	getch();
	return 0;
}
