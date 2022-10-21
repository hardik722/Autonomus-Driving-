#include<stdio.h>
void main()
{
int a[5]={25,10,27,15,5};
int i,j,ele,t;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele-1;i++)
{
for(j=i+1;j<ele;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
}
