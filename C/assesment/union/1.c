#include<stdio.h>
union one
{
int i;
char ch;
float f;
};
void main()
{
union one o1;
printf("o1.i=%u o1.ch=%u o1.f=%u\n",&o1.i,&o1.ch,&o1.f);
printf("enter o1.i..\n");
scanf("%d",&o1.i);
printf("%d %d\n",o1.i,o1.ch);
}
