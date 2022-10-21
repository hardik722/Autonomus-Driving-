#include<stdio.h>
void main()
{
int num,ans;
printf("enter num= ");
scanf("%d",&num);
ans=num|8;

if((ans%8)==0)
printf("given num is divisible by 8\n");
else
printf("given num is not divisible by 8\n");

}
