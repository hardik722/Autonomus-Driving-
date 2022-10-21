#include<stdio.h>
void print(int,int,int (*)[]);
void main()
{
	int b[2][3],r,c;
	r=sizeof(b)/sizeof(b[0]);
	c=sizeof(b[0])/sizeof(b[0][0]);
	printf("enter 6 array ele...\n");
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&b[i][j]);
	}

	print(r,c,b);
}
void print(int r,int c,int (*p)[c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	printf("%d",p[i][j]);
	printf("\n");
	}
	}
}
