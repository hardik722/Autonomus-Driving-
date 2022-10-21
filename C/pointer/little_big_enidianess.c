#include<stdio.h>
void main()
{
int i=10;
char *c;
c=(char*)&i;
printf("*c=%d\n",*c);

if(*c==0)
printf("big enidianess\n");
else
printf("little enidianess\n");


}
