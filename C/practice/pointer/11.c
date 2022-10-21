#include<stdio.h>
void main()
{
	int r,c;
	printf("enter square matrix row...\n");
	scanf("%d",&r);
	printf("enter square matrix col...\n");
	scanf("%d",&c);

	int a[r][c],b[r][c];
	int i,j;
	printf("enter a ele...\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter b ele..\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("matrix of a is...\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("matrix of b is...\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	int d[r][c],l,sum; 
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=0;
			for(l=0;l<c;l++)
				sum=sum+(a[i][l]*b[l][j]);
			d[i][j]=sum;
		}
	}
	printf("mul.. is...\n"); 
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}

}
