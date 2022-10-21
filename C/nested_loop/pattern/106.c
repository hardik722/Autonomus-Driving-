// 6.
#include<stdio.h>
void main()
{
	int i,j,n;

	for(i=0;i<=4;i++)
	{
		for(j=0;j<i+1;j++)
		{
			if(j%2==0)
			{
				n=1;
				printf("%d ",n);
			}
			else
			{
				n=0;
				printf("%d ",n);
			}
		}
		printf("\n");
	}

}
