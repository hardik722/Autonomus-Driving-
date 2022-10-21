#include<stdio.h>
void main()
{

int n;
printf("enter n...\n");
scanf("%d",&n);

int a[n],i,pos;
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");

printf("enter pos..\n");
scanf("%d",&pos);

for(i=pos;i<n;i++)
a[i]=a[i+1];
n--;
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
