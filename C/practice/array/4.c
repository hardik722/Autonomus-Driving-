#include<stdio.h>
void main()
{
	int n;
	printf("enter n...\n");
	scanf("%d",&n);
	int a[n],i,l,s;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=1;i<n;i++)
	{
		if(a[i]>l)
			l=a[i];
		if(a[i]<l)
			s=a[i];
	}
	printf("l=%d s=%d\n",l,s);

}
