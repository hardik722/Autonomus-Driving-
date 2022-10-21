#include<stdio.h>
void main()
{
int num,sum,r,i;
printf("enter the num=");
scanf(" %d",&num);

for(sum=0,i=num;i!=0;i=i/10)
{
r=i%10;
sum=(sum*10)+r;
}
printf("sum=%d\n",sum);

if(num==sum)
printf("pelandrom num\n");
else
printf("not pelandrom num\n");

}
