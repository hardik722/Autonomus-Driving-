// magic no..or not ?

#include<stdio.h>
void main()
{
	int num,num1,num2,sum,rev,r;
	printf("enter the num=");
	scanf("%d",&num);
	num1=num;

	for(sum=0;num1!=0;num1=num1/10)
	{
		r=num1%10;
		sum=sum+r;
	}
	printf("sum=%d\n",sum);
	num2=sum;

	for(rev=0;num2!=0;num2=num2/10)
	{
		r=num2%10;
		rev=(rev*10)+r;
	}
	printf("rev=%d\n",rev);

	if((sum*rev)==num)
		printf("megic num\n");
	else
		printf("not megic num\n");


}
