#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{		
		for(j=1;j<=10;j++)
		{
			k=j;
			if(k>5)
				k=11-j;
			if(j<=i || j>=11-i)
				printf("%d",k);
			else
				printf(" ");
		}
		printf("\n");
	}
}
