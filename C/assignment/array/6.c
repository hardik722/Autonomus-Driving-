#include<stdio.h>
void main()
{
	int i,j,k,ele,pos,n;
	printf("enter n...\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	/////////////////////////////////////

	printf("enter pos..\n");
	scanf("%d",&pos);

	/////////////////////////////////////

	for(i=pos;i<n;i++)
		a[i]=a[i+1];
	a[n-1]=0;
	/////////////////////////////////////

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
