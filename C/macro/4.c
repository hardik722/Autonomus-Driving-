#include<stdio.h>
void main()
{
int num;
scanf("%d",&num);
if((num&num-1)==0)
printf("power of two num...\n");
else
printf("not power of two num...\n");
}

