#include<stdio.h>
void main()
{
	int num,sum,r;
	printf("enter the num= ");
	scanf("%d",&num);

	while(sum!=1 && sum!=4)
	{
		sum=0;
		while(num!=0)
		{
			r=num%10;
			sum=sum+(r*r);
			num=num/10;
		}
		num=sum;
	}
	
	if(sum==1)
		printf("happy num\n");
	else
		printf("not happy num\n");

}

