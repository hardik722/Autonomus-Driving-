#include<stdio.h>
void print(int *p,int n)
{

	int i;
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	while(1);
}

void fun1(void(*p1)(int*,int),int *p3,int n)
{

	(*p1)(p3,n);

}

void main()
{
	int a[3]={10,20,30};
	int ele=sizeof(a)/sizeof(a[0]);

	fun1(print,a,ele);

}
