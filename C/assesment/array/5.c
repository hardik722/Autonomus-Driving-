#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50};
int b[5]={60,70,80,90,100};
int c[10];
int i;
for(i=0;i<5;i++)
{
c[2*i]=a[i];
c[2*i+1]=b[i];
}
for(i=0;i<10;i++)
printf("%d ",c[i]);
printf("\n");
}
