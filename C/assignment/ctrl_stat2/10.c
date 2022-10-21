// WAP to check the given num is deficient num or not ?

#include<stdio.h>
void main()
{
	int num,sum=0,i;

	printf("enter num=");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
			sum=sum+i;
		}
	}
	printf("sum=%d\n",sum);

if(sum<(num*2))
printf("deficient num\n");
else
printf("not deficient num\n");

}





