#include<stdio.h>
void main()
{
int num,i,sum=0;

printf(" enter num= ");
scanf(" %d",&num);
i=1;
while(i<num)
{
	if(num%i==0)
	{
	printf(" %d",i);
	sum=sum+i;
        }
i++;

}
printf(" sum=%d\n",sum);
if(sum==num)
printf(" perfect num\n");
else 
printf(" not perfect num\n");

}
	 
