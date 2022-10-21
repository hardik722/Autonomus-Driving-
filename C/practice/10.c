#include<stdio.h>
void main()
{
	int n1,n2,n3;
	printf("enter n1,n2 and n3\n");
	scanf("%d%d%d",&n1,&n2,&n3);

	if(n1>n2)
	{
		if(n1>n3)
			printf("%d is big\n",n1);
		else
			printf("%d is big\n",n3);
	}
	else
	{
		if(n2>n3)
			printf("%d is big\n",n2);
		else
			printf("%d is big\n",n3);
	}
}
