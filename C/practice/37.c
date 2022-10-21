#include<stdio.h>
int* fun1(void);
void main()
{
	int *p=fun1();
	printf("%d\n",*p);

}
int* fun1(void)
{
	int j=10;
	//static int j=10;
	return &j;
}
