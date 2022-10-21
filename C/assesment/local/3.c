#include<stdio.h>
void main()
{
int num,l;
printf("enter num...\n");
scanf("%d",&num);
l=num;
int sum,r,fect,i;
for(sum=0;num!=0;num=num/10)
{
r=num%10;
for(i=r,fect=1;i>0;i--)
fect=fect*i;

sum=sum+fect;
}
if(sum==l)
printf("strong num...\n");
else
printf("not a strong no...\n");
}
