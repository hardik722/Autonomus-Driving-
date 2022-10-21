#include<stdio.h>
void main()
{   int n;  
	printf("enter n..\n");
	scanf("%d",&n);
	int a[n];

	int i,j,c;
	
	printf("scan ele...\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

printf("\n");

	for(i=0;i<n;i++)
	{ 
	c=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)	
				if(a[i]==a[j])
				c++;
		}
		if(c==1)
			printf("%d ",a[i]);
	}
printf("\n");
}


