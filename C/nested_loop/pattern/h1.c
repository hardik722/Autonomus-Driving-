#include<stdio.h>
void main()
{
	int i,j;

	for(i=1;i<=6;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(j>=i && j<=12-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}


	for(i=5;i>=1;i--)
	{
		for(j=1;i<=11;j++)
		{
			if(j>=i && j<=12-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

}

