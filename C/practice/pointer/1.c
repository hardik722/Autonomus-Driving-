#include<stdio.h>
void main()
{
int i=10;
int *p=&i;
printf("p=%lu i=%d *p=%d\n",p,i,*p);
++*p;
printf("p=%lu i=%d *p=%d\n",p,i,*p);
}
