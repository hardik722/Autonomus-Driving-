#include<stdio.h>
void main()
{
	int num,i,c=0,sum;
	for(num=1;c<4;num++)
	{
		for(i=1,sum=0;i<num;i++)
		{
			if(num%i==0)
				sum=sum+i;
		}
		if(sum==num)
		{
			c++;
			printf("%lld ",num);
		}
	}
printf("\n");
}


