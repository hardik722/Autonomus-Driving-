#include<stdio.h>
union st
{
int i;
char ch;
float f;
};
void main()
{
union st o1;
printf("%u %u %u\n",&o1.i,&o1.ch,&o1.f);
o1.f=23.5;
printf("%f\n",o1.i);
}
