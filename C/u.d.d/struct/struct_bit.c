#include<stdio.h>
struct one
{
int i;
char ch;
float f;
unsigned int m:3;
};
void main()
{
struct one o1;
o1.m=4;
//int c=0;
//for(o1.m=1;o1.m!=0;o1.m=o1.m<<1)
//c++;
printf("%d\n",o1.m);
}
