#include<stdio.h>


int power(int ,int);
void main()
{
int num,pow,r;
printf("enter num...\n");
scanf("%d",&num);
printf("enter power...\n");
scanf("%d",&pow);
r=pow(num,pow);
printf("r=%d\n",r);
}

int pow(int n,int p)
{
if(p==0)

else
return(n,pow(n,p-1))
}
