#include<stdio.h>
void main()
{
	long int in,i,k,sum=0;
	printf("enter in= ");
	scanf("%ld",&in);
	for(i=10;in>0;in--)
	{
		k=i;
		k=k-1;
		printf("%ld+",k);
		sum=sum+k;
		i=i*10;
	}
	printf("\nsum=%ld\n",sum);

}
