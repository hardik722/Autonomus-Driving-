#include<stdio.h>
void main()
{

int i,n;
printf("enter ele...n..\n");
scanf("%d",&n);

int a[n],b[n];
printf("enter ele for a...\n");

for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("enter ele for b...\n");

for(i=0;i<n;i++)
scanf("%d",&b[i]);

int *p,*p1,t;
p=a;
p1=b;
for(i=0;i<n;i++)
{
t=p[i];
p[i]=p1[i];
p1[i]=t;
}
printf("\n a array...\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\nb array...\n");
for(i=0;i<n;i++)
printf("%d ",b[i]);
printf("\n");
}
