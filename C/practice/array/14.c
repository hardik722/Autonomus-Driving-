#include<stdio.h>
void main()
{
	int n;
	printf("enter n...\n");
	scanf("%d",&n);
	int a[n],i,sum,m=1;

	printf("\n");

	for(i=0,sum=0;i<n;i++)
	{
		a[i]=(m*m);
		m++;
		sum=sum+a[i];
	}

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	
	printf("\nsum=%d",sum);
	printf("\n");


}
