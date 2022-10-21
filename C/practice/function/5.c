#include<stdio.h>
int prime(int);
int armstrong(int);
int perfect(int);

void main()
{
	int num,r1,r2,r3;
	printf("enter num...\n");
	scanf("%d",&num);
	r1= prime(num);
	if(r1==1)
		printf("prime...\n");
	else
		printf("not prime....\n");
	r2= armstrong(num);
	if(r2==1)
		printf("armstrong..\n");
	else
		printf("not armstrong..\n");
	r3= perfect(num);
	if(r3==1)
		printf("perfect..\n");
	else
		printf("not perfect...\n");
}

int prime(int n)
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
int armstrong(int n)
{
	int num1,sum,m;
	num1=n;
	for(sum=0;num1!=0;num1=num1/10)
	{
		m=num1%10;
		sum=sum+(m*m*m);
	}
	if(sum==n)
		return 1;
	else
		return 0;
}
int perfect(int n)
{
	int i,sum;
	for(i=1,sum=0;i<n;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(sum==n)
		return 1;
	else
		return 0;
}
