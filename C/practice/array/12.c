#include<stdio.h>
void main()
{
	int n;
	printf("enter n...\n");
	scanf("%d",&n);

	int a[n],i,j,k;

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

//	for(i=0;i<n;i++)
//		printf("%d ",a[i]);

	printf("\n");
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			for(k=j;k<n;k++)
			    {
				a[k]=a[k+1];
				}
			n--;
			j--;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
/////////////////////////////////////////////////////////
/*#include<stdio.h>
void main()
{   int n;  
	printf("enter n..\n");
	scanf("%d",&n);
	int a[n];

	int i,j,k;

	printf("scan ele...\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("\n");

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
					{
					a[k]=a[k+1];
					}
			n--;
			j--;
			
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}*/
