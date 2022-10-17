#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sum(int m,int n)
{
	printf("%d\n",m+n);
}

void(*fun(void))(int,int)
{
	return sum;
}

void main()
{
	void (*p)(int,int);
	p=fun();
	(*p)(10,20);

}
