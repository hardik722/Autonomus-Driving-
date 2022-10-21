#include<stdio.h>
void main()
{

int num,pow,pow1,i;
printf("enter num=");
scanf(" %d",&num);
printf("enter pow=");
scanf(" %d",&pow);

for (i=1,pow1=1;i<=pow;i++)
pow1=pow1*num;

printf("   pow1=%d\n",pow1);


}
