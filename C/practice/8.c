#include<stdio.h>
void main()
{
int num,pow,result;
printf("enter num\n");
scanf("%d",&num);
printf("enter pow..\n");
scanf("%d",&pow);

for(pow,result=1;pow!=0;pow--)
{
result=result*num;
//printf("%d\n",result);
}

printf("result=%d\n",result);

}
