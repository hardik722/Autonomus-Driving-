#include<stdio.h>
void main()
{
	int i,num,sum;
	printf("enter num=");
	scanf("%d",&num);

		for(i=1,sum=0;i<num;i++)
		{
			if(num%i==0)
			{
				printf("%d ",i);
				sum=sum+i;
			}
		}
			printf("\nsum=%d\n",sum);
	
	if(sum>num)
		printf("abudent num\n");
	else
		printf("not abudent num\n");

}

