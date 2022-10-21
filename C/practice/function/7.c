#include<stdio.h>
void strong(int);
void main()
{
int num;
	printf("enter num1 and num2..\n");
	scanf("%d",&num);
	strong(num);

}
void strong(int n)
{
	int num1,sum,fect,r;
	num1=n;
	for(sum=0;num1!=0;num1=num1/10)
	{
		r=num1%10;
		for(fect=1;r>0;r--)
			fect=fect*r;
		sum=sum+fect;
	}
	printf("sum=%d\n",sum);
	if(sum==n)
		printf("strong..\n");
	else
		printf("not strong..\n");

}
