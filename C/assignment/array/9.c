#include<stdio.h>
void main()
{   int n;  
	printf("enter n..\n");
	scanf("%d",&n);
	int a[n], b[n];

	int i,j,c,k,l;

	printf("scan ele...\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("\n");

	for(i=0,k=0;i<n;i++)
	{
		c=1;
		for(j=0;j<n;j++)
		{	
			if(a[i]==a[j] && i!=j)
				c++;
		}
		if(c>1){
			for(l=0; l<k; l++){
				if(b[l] == a[i])
					break;
			}
			if(l==k){
				printf("%d--%d times\n",a[i],c);
				b[k] = a[i];
				k++;
			}
	}
}
}














