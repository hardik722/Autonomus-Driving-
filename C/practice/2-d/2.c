#include<stdio.h>
void main()
{
int r,c;
printf("enter row and col...\n");
scanf("%d%d",&r,&c);
	int a[r][c],i,j;
	printf("enter ele...\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("ele..\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("negative num is...\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			if(a[i][j]<0)
				printf("%d ",a[i][j]);
	}
printf("\n");
}
