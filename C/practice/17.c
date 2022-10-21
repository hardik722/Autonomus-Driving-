#include<stdio.h>
void main()
{
int num,j;
printf("enter num...\n");
scanf("%d",&num);

j=num|8;
if(j%8==0)
printf("divisible by 8...\n");
else
printf("not divisible...\n");

}
