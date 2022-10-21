#include<stdio.h>
void main()
{
int num,last,first,sum;
printf("enter the num\n");
scanf("%d",&num);


last=num%10;
for(num;num!=0;num=num/10)
first=num;

sum=first+last;
printf("sum= %d\n",sum);
}
