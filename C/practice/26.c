#include<stdio.h>
void main()
{
	int i,j,n1,n2,sum,fect,r,c;
//	printf("enter n1 and n2\n");
//	scanf("%d%d",&n1,&n2);
	///////////////////////////////
	for(j=1,c=0;c<5;j++)
	{
		for(sum=0,i=j;i!=0;i=i/10)
		{
			r=i%10;

			for(fect=1;r!=0;r--)
				fect=fect*r;

			sum=sum+fect;
		}
		if(sum==j)
		{
		c++;
		printf("%d ",j);
		}
	}
printf("\n");
}
