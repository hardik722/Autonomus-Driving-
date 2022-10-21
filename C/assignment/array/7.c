#include<stdio.h>
void main()
{
	
	int i,pos,ele,num,n;

	//ele=sizeof(a)/sizeof(a[0]);
	printf("\nenter n..\n");
	scanf("%d",&n);
	int a[n+1];
	printf("enter ele..\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	printf("enter pos..\n");
	scanf("%d",&pos);

	printf("enter num..\n");
	scanf("%d",&num);


	for(i=n;i>=pos;i--)
		a[i+1]=a[i];

	a[pos]=a[pos-1];
	a[pos-1]=num;
	for(i=0;i<n+1;i++)
		printf("%d ",a[i]);

	printf("\n");
}

