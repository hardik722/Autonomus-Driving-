#include<stdio.h>
void main()
{
	int num,sum,r,i;
//printf("enter num..\n");
//scanf("%d",&num);

for(num=1;num<=1000;num++)
{

for(i=num,sum=0;i!=0;i=i/10)
{
r=i%10;
sum=sum*10+r;
}
if(num==sum)
printf("%d ",num);

}
printf("\n");
}
