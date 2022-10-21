#include<stdio.h>
void main()
{
int i,num,r;
printf("enter num= ");
scanf("%d",&num);
for(i=7;i>=0;i--)
{
r=num>>i&1;
printf("%d",r);
}
num=~(num);
num=num+1;

printf("\n--------\n");
for(i=7;i>=0;i--)
{
r=num>>i&1;
printf("%d",r);
}
printf("\n-----\nnum=%d\n",num);

}

