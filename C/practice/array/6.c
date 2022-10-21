#include<stdio.h>
void main()
{
	int n;
	printf("enter n...\n");
	scanf("%d",&n);
	int a[n],b[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
		b[i]=a[i];
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",b[i]);

}
