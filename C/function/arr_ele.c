#include<stdio.h>
void arr_ele(int*,int);

void main()
{
	int a[ ]={10,200,30,400,5,600,4},ele;
	ele=sizeof(a)/sizeof(a[0]);
	arr_ele(a,ele);
}
void arr_ele(int *ip,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",*ip++);
	}
	printf("\n");
}
