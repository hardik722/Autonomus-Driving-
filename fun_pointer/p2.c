#include<stdio.h>
void print(int *p,int n)
{
	int i=0;
	while(i<n)
	{
		printf("%d ",p[i]);
		i++;
	}
	printf("\n");
}

void fun3(void(*ptr3)(int*,int),int *m,int n)
{
	(*ptr3)(m,n);

}

void fun2(void(*ptr2)(void (*)(int*,int),int*,int),int *m,int n)
{
	(*ptr2)(print,m,n);
}

void fun1(void(*ptr1)(void (*)(void(*)(int*,int),int*,int),int*,int ),int *m,int n)
{
	(*ptr1)(fun3,m,n);

}

void main()
{
	int a[3]={10,20,30};
	int ele=sizeof(a)/sizeof(a[0]);


	fun1(fun2,a,ele);
}
