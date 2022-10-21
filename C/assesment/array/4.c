#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50};
int b[5],i,j;
for(i=4,j=0;i>=0;i--,j++)
b[j]=a[i];
printf("j=%d\n",j);
for(i=0;i<5;i++)
printf("%d ",b[i]);
printf("\n");
}
