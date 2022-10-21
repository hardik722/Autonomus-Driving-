#include<stdio.h>
void main()
{
int num;
printf("enter num= ");
scanf("%d",&num);
if((num>>0&1)==0)
printf("num is even\n");
else
printf("num is odd\n");

}

