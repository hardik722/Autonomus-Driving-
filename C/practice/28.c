#include<stdio.h>
void main()
{
	int num,sum,i,j;
	printf("enter num...\n");
	scanf("%d",&num);
	j=num;
	for(i=1,sum=0;i<=num;i++)
	{
		if(num%i==0)
		{
		printf("%d ",i);
		sum=sum+i;
		}
	}
	printf("\nsum=%d\n",sum);
	

	if(sum<2*j)
		printf("deficient..\n");
	else
		printf("not deficient...\n");


	printf("\n");

}
