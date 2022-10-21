#include<stdio.h>
void main()
{
int num,rev,r;
printf("num= ");
scanf("%d",&num);


for(num,rev=0;num>0;num=num/10)
{
r=num%10;
rev=(rev*10)+r;
}
printf("sum=%d\n",rev);

}
