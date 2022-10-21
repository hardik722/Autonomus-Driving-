#include<stdio.h>
void main()
{
int i,sum,num,r;

for(i=1;i<=1000;i++)
{
num=i;
for(sum=0;num!=0;num=num/10)
{
r=num%10;
sum=sum+(r*r*r);
}
if(sum==i)
printf("%d ",i);

}
printf("\n");
}

