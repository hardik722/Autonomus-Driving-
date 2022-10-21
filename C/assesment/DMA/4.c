#include<stdio.h>
#include<stdlib.h>
void main()
{
char *p;
//p=malloc(sizeof(char)*10);
p=calloc(10,1);
printf("enter str/...\n");
scanf("%s",p);
printf("p=%s\n",p);
}
