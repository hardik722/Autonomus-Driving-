#include<stdio.h>
void main()
{
	int a[10]={2,4,5,2,1,3,4,6,5};
	int b[10],m=0,c[10],n=0;
	int i,j;

	for(i=0;i<10;i++)
	{
		b[i]=a[i];
		
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
				c[n]=a[j];
				if(n<n+1)
				n++;
			    
			}
		}
	}

for(i=0;i<10;i++)
printf("%d ",b[i]);
printf("\n");

for(i=0;i<10;i++)
printf("%d ",c[i]);
printf("\n");


}

