//WAP to print multiplication table using FOR loop

#include<stdio.h>
void main()
{
int num,i;
printf("enter the num....\n");
scanf("%d",&num);

for( i=1;i<=10;i=i+1)
printf("%d*%d=%d\n",num,i,num*i);
printf("bye....\n");
}

