#include<stdio.h>
void main()
{
	int i,num,r,pos;
	printf("enter num= ");
	scanf("%d",&num);
	for(i=7;i>=0;i--)
	{
		r=num>>i&1;
		printf("%d",r);
	}
	printf("\nnum=%d\n",num);
	printf("enter com bit pos= ");
	scanf("%d",&pos);

	num=num^(1<<pos);


	for(i=7;i>=0;i--)
	{
		r=num>>i&1;
		printf("%d",r);
	}
	printf("\nnum=%d\n",num);

}
