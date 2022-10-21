#include<stdio.h>
struct one 
{
int i;
char ch;
float f;
};
struct one return_struct(void);
void main()
{
struct one o1;
o1=return_struct();
printf("%d %c %g\n",o1.i,o1.ch,o1.f);
}
struct one return_struct(void)
{
struct one o1={10,'a',23.5};
return o1;
}
