#include<stdio.h>
void swap_num(int,int);
void main()
{
	int num1,num2;
	printf("enter num..\n");
	scanf("%d%d",&num1,&num2);
	printf("num1=%d num2=%d\n",num1,num2);
	swap_num(num1,num2);
}
void swap_num(int n1,int n2)
{
	int t;
	t=n1;
	n1=n2;
	n2=t;
	printf("num1=%d num2=%d\n",n1,n2);
}
