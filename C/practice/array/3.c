#include<stdio.h>
void main()
{
int n;
printf("enter n...\n");
scanf("%d",&n);
int a[n],i,sum=0;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");

for(i=0;i<n;i++)
sum=sum+a[i];
printf("sum=%d\n",sum);
}
