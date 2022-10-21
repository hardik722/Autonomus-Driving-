#include<stdio.h>
void main()
{
int i,j,k,r;
printf("enter row..\n");
scanf("%d",&r);
for(i=0;i<r;i++)
{
for(j=0;j<r-1-i;j++)
printf(" ");
for(k=0;k<i+1;k++)
printf("* ");
printf("\n");
}
}
