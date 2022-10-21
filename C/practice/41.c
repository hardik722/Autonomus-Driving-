#include<stdio.h>
void main()
{
float f1=23.7;
int *p=(int*)&f1;
for(int i=31;i>=0;i--)
printf("%d",*p>>i&1);
}
