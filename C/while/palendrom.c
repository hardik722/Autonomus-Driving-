#include<stdio.h>
void main()
{
int num1,num,r,sum=0;
printf("enter the num= ");
scanf(" %d",&num);

num1=num;
while(num>0)
{
r=num%10;
sum=(sum*10)+r;
num=num/10;
}
printf(" sum=%d\n",sum);
if(sum==num1)
{
printf("num is palendrom\n");
}
else
{
printf("num is not palendrom\n");
}

}
