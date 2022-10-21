#include<stdio.h>
void main()
{
int i=10,j=20;
const int  *const p;
p=&i;
*p=j;
printf("i=%d *p=%d j=%d\n",i,*p,j);
}








