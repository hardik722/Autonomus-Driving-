#include<stdio.h>
struct st
{
int i;
char ch;
float f;
};

struct st return_struct(void);
void main()
{
struct st o2,*p;
o2=return_struct();
printf("%d %c %g\n",o2.i,o2.ch,o2.f);
}
struct st return_struct(void)
{
struct st o1={10,'m',23.5};
return o1;
}
