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

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(j>=6-i && j<=6+i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
