/*To read a file and display it in reverse order*/
#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h> 
main() 
{ 
         FILE *fp; 
         char ch; 
         int i,pos; 
         fp=fopen("C:\\Users\\termi\\Desktop\\file.txt","r+"); 
         fseek(fp,1,SEEK_END); 
         pos=ftell(fp); 
         i=0; 
         while(i<=pos) 
         { 
                  ch=fgetc(fp); 
                  printf("%c",ch); 
                  fseek(fp,-i,SEEK_END); 
                  i++; 
         } 
getch(); 
} 

