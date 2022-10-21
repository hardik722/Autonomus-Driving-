#include<stdio.h>
void main()
{
	long int i,j,sum,c;

	for(i=1,c=0;c<5;i++)
	{
		for(j=1,sum=0;j<i;j++)
		{
			if(i%j==0)
				sum=sum+j;
		}
		if(sum==i)
		{
			printf("%ld ",i);
			c++;
		}

	}
printf("\n");
}
