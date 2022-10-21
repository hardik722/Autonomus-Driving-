#include<stdio.h>
void main()
{
int a[5]={10,7,30,13,50};
int i,num,j,c=0;
for(i=0;i<5;i++)
{
num=a[i];
for(j=2;j<num;j++)
{
if(num%j==0)
break;
}
if(j==num)
{
c++;
printf("%d ",a[i]);
}
}
printf("c=%d\n",c);
}
