#include<stdio.h>
void my_strcpy(char*,char*);
void main()
{
char s[10]="abcd",d[10];
my_strcpy(s,d);
printf("d=%s\n",d);
}
void my_strcpy(char *p,char *q)
{
if(*p)
{
*q=*p;
my_strcpy(p+1,q+1);
}
else
*q=*p;
}
