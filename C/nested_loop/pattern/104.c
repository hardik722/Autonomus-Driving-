#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<=3;i++)
{
	for(j=0;j<4-i;j++)
	{
		printf(" ");
	}
	for(k=0;k<i+1;k++)
	{
		printf("* ");
	}
printf("\n");

}

for(i=0;i<=2;i++)
{
	for(j=0;j<i+1;j++)
	{
		printf(" ");
	}
	for(k=0;k<3-i;k++)
	{
		printf(" *");
	}
printf("\n");

}

}



