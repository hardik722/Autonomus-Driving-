#include<stdio.h>
void main()
{
int a[5]={6,10,28,5,100};
int i,j,num,k,sum;
for(i=0;i<5;i++)
{
num=a[i];
for(j=1,sum=0;j<num;j++)
{
if(num%j==0)
sum=sum+j;
}
if(sum==num)
{
for(k=i;k<4;k++)
a[k]=a[k+1];
a[k]=0;
}
}
for(i=0;i<5;i++)
printf("%d ",a[i]);
printf("\n");
}
