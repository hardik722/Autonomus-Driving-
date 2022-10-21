#include<stdio.h>
void main()
{
int i,j;
printf("enter the number i=");
scanf("%d",&i);
printf("enter the number j=");
scanf("%d",&j);
printf("before swaping i=%d,j=%d\n",i,j);
i=i+j;
j=i-j;
i=i-j;
printf("after swaping i=%d,j=%d\n",i,j);
}

