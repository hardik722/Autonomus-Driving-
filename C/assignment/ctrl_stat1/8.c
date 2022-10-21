#include<stdio.h>
void main()
{
int num,i,k;
printf("enter num= ");
scanf("%d",&num);
for(i=31;i>=0;i--)
{
k=(num>>i)&1;
printf("%d",k);
}
printf("\n");
}
