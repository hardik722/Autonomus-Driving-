#include<stdio.h>
int prime_num(int);
void main()
{
	int num,m;
	printf("enter num...\n");
	scanf("%d",&num);
	m=prime_num(num);
	if(m==1)
		printf("prime num..\n");
	else
		printf("not prime..\n");
}
int prime_num(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			break;
	}
	if(n==i)
		return 1;
	else
		return 0;
}

