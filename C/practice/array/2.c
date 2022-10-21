#include<stdio.h>
void main()
{
int n;
printf("enter n...\n");
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
printf("negetive num..\n");
for(i=0;i<n;i++)
{
if(a[i]<0)
printf("%d ",a[i]);
}
printf("\n");





}
