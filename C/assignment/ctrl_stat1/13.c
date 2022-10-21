#include<stdio.h>
void main()
{
int num,pow,i,j;
printf("enter num= ");
scanf("%d",&num);
printf("enter pow= ");
scanf("%d",&pow);
for(j=1;pow>0;pow--)
{
  j=j*num;
}
printf("ans=%d\n",j);



}

