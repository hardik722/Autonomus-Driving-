#include<stdio.h>
struct st
{
int i;
char ch;
float f;
};
void print(struct st);
void main()
{
struct st o1={10,'m',23.5};
print(o1);
}
void print(struct st o2)
{
printf("%d %c %g\n",o2.i,o2.ch,o2.f);
}

