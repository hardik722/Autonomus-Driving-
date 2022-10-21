//perfect square...

#include<stdio.h>
void main()
{
	int n1,n2,i,m;
	printf("Enter n1=\n");
	scanf("%d",&n1);
	printf("Enter n2=\n");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{
		m=i*i;
		if(m<=n2)
			printf("%d ",m);
		else
			break;
	}
	printf("\n");
}
