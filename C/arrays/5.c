#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50},i;
char *cp;
cp=(char*)a;
for(i=0;i<5;i++)
{
printf("%d ",*cp);
cp=cp+4;
}
printf("\n");

}
