#include<stdio.h>
void main()
{
	int n;
	printf("enter n...\n");
	scanf("%d",&n);
	int a[n],i,j;
	printf("enter n ele...\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
					break;
			}
		}
		if(j==n)
			printf("%d ",a[i]);
	}
	printf("\n");
}
