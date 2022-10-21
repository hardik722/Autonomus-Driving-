#include<stdio.h>
#include<stdlib.h>
void main()
{
char *p=calloc(10,1);
p="abcd";
p[2]='d';
printf("%s\n",p);
}
