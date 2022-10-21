#include<stdio.h>
void main()
{
int num,i,m;
printf("enter num= ");
scanf("%d",&num);
printf("before shifting the bit\n");
//num=num>>3;
for(i=31;i>=0;i--)
{
m=num>>i&1;
printf("%d",m);
}
printf("\n num=%d\n",num);

printf("after shifting the bit\n");
num=num<<4;

for(i=31;i>=0;i--)
{
m=num>>i&1;
printf("%d",m);
}
printf("\n num=%d\n",num);

}
