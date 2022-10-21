#include<stdio.h>
void main()
{   int n;  
	printf("enter n..\n");
	scanf("%d",&n);
	int a[n],b[n],c[n];

	int i,j,k=0,l=0;

	printf("scan ele...\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{    
			if(a[i]==b[j])
			{
				break;
			}

		}
		if(j==k)
		{
			b[k]=a[i];
			k++;
		}
		else
		{

			c[l]=a[i];
			l++;
		}
	} 
	printf("\n");
	for(i=0;i<k;i++)
		printf("%d ",b[i]);

	printf("\n");
	for(i=0;i<l;i++)
		printf("%d ",c[i]);

	printf("\n");

}
