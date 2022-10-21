#include<stdio.h>
void main()
{
	int num,n,sum,r;

	for(num=1;num<=500;num++)
	{
		n=num;
		sum=0;
		while(n!=0)
		{ 
			r=n%10;
			sum=sum+(r*r*r);
			n=n/10;
		}

		if(sum==num)
			printf("%d ",num);

	}
	printf("\n");

}
