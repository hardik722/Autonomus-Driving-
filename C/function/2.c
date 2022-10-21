#include<stdio.h>
int bit_set(int);
void main()
{
	int num,c;
	printf("enter num...\n");
	scanf("%d",&num);
	c=bit_set(num);
	printf("c=%d\n",c);
}
int bit_set(int n)
{
	int pos,c=0;
	for(pos=31;pos>=0;pos--)
	{
		if((n>>pos&1)==1)
			c++;
	}
	return c;
}

