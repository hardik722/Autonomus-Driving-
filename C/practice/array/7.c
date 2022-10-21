#include<stdio.h>
void main()
{
	int n;
	printf("enter n...\n");
	scanf("%d",&n);
	int a[n],i,num,pos;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("enter pos..\n");
	scanf("%d",&pos);
	printf("\n");
	for(i=n-1;i>pos;i--)
		a[i]=a[i-1];
	printf("enter num..\n");
	scanf("%d",&num);
	a[pos]=num;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
printf("\n");
}
