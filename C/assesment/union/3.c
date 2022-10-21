#include<stdio.h>
union one
{
int i;
char ch;
};
void main()
{
union one o1;
o1.i=10;
if(o1.ch==10)
printf("little eni...\n");
else
printf("big eni...\n");
}
