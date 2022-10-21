#include<stdio.h>
void main()
{
	int r,c;
	printf("enter square matrix row..\n");
	scanf("%d",&r);
	printf("enter square marix col..\n");
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
	printf("enter b ele...\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int (*p)[c];
	p=a;
	printf("a ele...\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	printf("b ele...\n");
	int (*p1)[c];
	p1=b;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",p1[i][j]);
		}
		printf("\n");
	}
	int d[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=p[i][j]+p1[i][j];
		}
	}
	printf("sum of two matrix are...\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}

}





