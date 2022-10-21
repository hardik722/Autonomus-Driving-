#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p;
p=malloc(sizeof(int));
printf("enter int...\n");
scanf("%d",p);
printf("int=%d\n",*p);
}
