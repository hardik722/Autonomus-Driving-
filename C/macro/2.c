#include<stdio.h>
#define sum(a,b) a+b
int sum(int ,int);
void main()
{
int z=sum(10,20);
printf("%d\n",z);
}
int sum(int m,int n)
{
return m+n;
}
