#include<stdio.h>
void main()
{
	int l,r,m;

	printf("enter l=");
	scanf("%d",&l);
	printf("enter r=");
	scanf("%d",&r);

	while(l<=r)
	{
		m=(l*l);
		if(m<=r)
			printf("%d ",m);
		else
			break;

		l++;

	}
printf("\n");
}
