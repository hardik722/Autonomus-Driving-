#include<stdio.h>
void main()
{
	int n;
	printf("enter n...\n");
	scanf("%d",&n);
	int a[n],f[n];
	printf("enter ele...\n");
	int i,j,c;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		f[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				f[j]=0;
			}
		}	
			if(f[i]!=0)
				f[i]=c;
		
	}
	printf("frquency of each ele...\n");
	for(i=0;i<n;i++)
	{
		if(f[i]!=0)
			printf("%d==>%d\n",a[i],f[i]);
	}
}
