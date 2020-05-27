#include <stdio.h>
#include <stdlib.h>
void main()
{
int a[]={10,20,30,40,50};
int i,*ptr;
ptr=&a[0];
printf("\n Arrays and pointer equivalent");
printf("\n  a[i]\t\t&a[i]\t\t\t*ptr\tptr+i\t\t\t*(a+i)\ta+i\ti[a]");
printf("\n====================================================================================");
for(i=0;i<5;i++)
printf("\n a[%d]=%d:\t%p\t%d\t%p\t %d\t%d\t%d",i,a[i],&a[i],*ptr,ptr+i,*(a+i),a+i,i[a]);
getch();
}
