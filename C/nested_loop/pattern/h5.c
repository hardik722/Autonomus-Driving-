#include<stdio.h>
int sum_digit(int);
void main()
{
	int num,m;
	printf("enter num...=");
	scanf("%d",&num);
	m=sum_digit(num);
	printf("sum=%d\n",m);
}
int sum_digit(int n)
{
	int sum,r,sum1;
	for(sum=0;n!=0;n=n/10)
	{
		r=n%10;
		sum=sum+r;
	}

while(sum>9)
{
sum_digit(sum);
}
return sum;
}

