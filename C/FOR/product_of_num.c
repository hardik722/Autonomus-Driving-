#include<stdio.h>
void main()
{
int num,i,product;
printf("enter the num=");
scanf(" %d",&num);

for(product=1;num!=0;num=num/10)
{
i=num%10;
product=product*i;
}

printf("product=%d\n",product);

}

