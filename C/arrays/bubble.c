//WAP for bubble short.

#include<stdio.h>
void main()
{
	int a[5]={5,15,1,12,25},t,i,j;

	for(i=0;i<4;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	for(i=0;i<5;i++)
	printf("%d ",a[i]);
	
        printf("\n");

}
