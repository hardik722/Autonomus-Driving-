#include<stdio.h>
void main()
{
int a[3]={10,20,30};
char *cp=(char*)a;
int i;
for(i=0;i<3;i++)
{
printf("%d ",*cp);
cp=cp+4;
}
printf("\n");
}
