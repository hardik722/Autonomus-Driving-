#include<stdio.h>
void main()
{
int num,i,sum;
printf("enter the num=");
scanf("%d",&num);
for(i=1,sum=0;i<num;i++)
{
	if(num%i==0)
	{
	printf(" %d",i);
	sum=sum+i;
	}
}
printf("\n");
	if(sum==num)
	printf("num is perfect\n");
	else
	printf("num is not perfect\n");


}
