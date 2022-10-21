#include<stdio.h>
void main()
{
	int num,m,pos,r;
	printf("enter num...\n");
	scanf("%d",&num);
	for(pos=7;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");
	/////////////////////////////
	printf("num of rotation...\n");
	scanf("%d",&r);
	while(r!=0)
	{
		m=num>>7&1;
		num=num<<1;
		if(m==1)
			num=num|(1<<0);
		r--;
	}
	for(pos=7;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");

}












