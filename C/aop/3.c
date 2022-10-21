#include<stdio.h>
void print(int (*)[3],int,int);
void main()
{
	int b[2][3]={{10,20,30},{40,50,60}};
	print(b,2,3);
}
void print(int (*p)[3],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
}
