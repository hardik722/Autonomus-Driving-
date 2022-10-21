#include<stdio.h>
void main()
{
int num;
printf("enter num...\n");
scanf("%d",&num);

num=~(num);
num=num+1;
printf("%d\n",num);
printf("%x\n",num);
printf("%o\n",num);
}
