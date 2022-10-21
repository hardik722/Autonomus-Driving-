//7.
#include<stdio.h>
void main()
{
	int i,j,n;

	for(i=1;i<=4;i++)
	{	if(i%2==0)
			n=2;
		else
			n=1;

		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n=n+2;
		}
		printf("\n");
	}

}

