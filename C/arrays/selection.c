//WAP for selection short.

#include<stdio.h>
void main()
{
	int a[5]={5,15,1,12,25},i,j,t;

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	printf("\n");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");

}
