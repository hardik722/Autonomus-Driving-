#include<stdio.h>
void main()
{
int num,rev,r,i,c;
//printf("enter num= ");
//scanf("%d",&num);
for(i=1,c=0;i<=1000;i++)
{
num=i;
	for(rev=0;num!=0;num=num/10)
	{	
	   r=num%10;
	   rev=(rev*10)+r;
	}   
if(rev==i)
{
printf("%d ",i);
c++;
}	
}
printf("\n");
}
