#include<stdio.h>
void main()
{
	int num,pos,rotaion,m,n;
	printf("enter num...\n");
	scanf("%d",&num);
//	printf("enter rotation...\n");
//	scanf("%d",&rotaion);
	//////////////////////////////
	for(pos=7;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");
	//////////////////////////////
//	rotaion=rotaion-1;
	for(rotaion=2;rotaion!=0;rotaion--)
	{
		m=num>>7&1;
		n=num>>0&1;
		if(m==n)
			num=num>>1;
		else
		{
			num=num^(1<<7);
			num=num>>1;
		}

	}
	printf("\n");
	//////////////////////////////
m=num>>7&1;
n=num>>0&1;
if(m!=n)
num=num^1<<7;	


for(pos=7;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");




}
