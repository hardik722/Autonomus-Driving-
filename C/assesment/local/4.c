#include<stdio.h>
void main()
{
	int num,sum,r,l,c=0,i;
	for(num=1;c<20;num++)
	{
		l=num;
		for(i=num,sum=0;i!=0;i=i/10)
		{
			r=i%10;
			sum=sum*10+r;
		}
		if(sum==l)
		{
			c++;
			printf("%d ",l);
		}
	}
printf("\n");
}
