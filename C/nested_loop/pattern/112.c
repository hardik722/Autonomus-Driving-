//11.
#include<stdio.h>
void main()
{
int i,j,n;
//printf("enter row=");
//scanf("%d",&row);

for(i=1;i<=6;i++)
{
n=i;
for(j=1;j<i+1;j++)
{
printf("%d ",n);
n=n+i;
}
printf("\n");
}
}
