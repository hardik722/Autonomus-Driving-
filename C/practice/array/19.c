#include<stdio.h>
void main()
{
	int n;
	printf("enter n...\n");
	scanf("%d",&n);
	int a[n],b[n],c[2*n],i;
	printf("enter a ele \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter b ele..\n");
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		c[2*i]=a[i];
		c[2*i+1]=b[i];
	}
	for(i=0;i<(2*n);i++)
		printf("%d ",c[i]);
	printf("\n");
}
