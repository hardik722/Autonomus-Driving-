#include<stdio.h>
void main()
{
int a[3]={10,20,30},i;
int b[3]={1,2,3},t;

for(i=0;i<3;i++)
{
t=a[i];
a[i]=b[i];
b[i]=t;
}
for(i=0;i<3;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<3;i++)
printf("%d ",b[i]);

printf("\n");


}
