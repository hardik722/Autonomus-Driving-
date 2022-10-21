#include<stdio.h>
void main()
{
char ch='a';
int i=10;
float f=23.4;
void *p;
printf("ch=%c\n",*(char*)p);
printf("i=%d\n",*(int*)p);
printf("f=%g\n",*(float*)p);
p=0;
}
