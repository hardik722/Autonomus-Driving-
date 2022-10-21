#include<stdio.h>
void main()
{
int num;
printf("enter num...\n");
scanf("%d",&num);

if((num>>31&1)==0)
printf("positive num..\n");
else
printf("negetive num..\n");

}
