#include<stdio.h>
void main()
{
int num,sum;
printf("enter num..=");
scanf("%d",&num);

for(sum=0;num!=0;num=num/10)
{
sum=sum+(num%10);
}
printf(" total sum =%d\n",sum);
}
