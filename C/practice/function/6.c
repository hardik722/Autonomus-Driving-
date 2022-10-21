#include<stdio.h>
void print_prime(int ,int);
void main()
{
	int num1,num2;
	printf("enter n1 and n2...\n");
	scanf("%d%d",&num1,&num2);
	print_prime(num1,num2);
}
void print_prime(int n1,int n2)
{
	int i,j;
	for(i=n1;i<=n2;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
			printf("%d ",i);

	}
printf("\n");

}


