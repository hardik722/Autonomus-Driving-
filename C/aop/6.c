//print 2-d int ary using array of pointer.

#include<stdio.h>
void main()
{
int a[2][3]={{10,20,30},{40,50,60}};
int *p[2]={a[0],a[1]};
int i,j;

for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	printf("%d ",p[i][j]);
printf("\n");
}
}
