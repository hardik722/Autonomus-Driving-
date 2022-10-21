#include<stdio.h>
void main()
{
	int n;
	printf("enter n...\n");
	scanf("%d",&n);
	int a[n],i,j,c;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	c=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{   
			if(a[i]==a[j])
			{
			c++;
			printf("%d ",a[j]);
			break;
			}			
		}
	}
printf("duplicate ele..%d\n",c);
}
