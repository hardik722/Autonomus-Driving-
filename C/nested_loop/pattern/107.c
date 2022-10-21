//8.

#include<stdio.h>
void main()
{
	int i,j,n;
	
	for(i=1;i<=5;i++)
	{
		n=i;
		for(j=1;j<i+1;j++)
		{
				printf("%d ",n);
				n=n+(5-j);
		}
		printf("\n");

	}
}
