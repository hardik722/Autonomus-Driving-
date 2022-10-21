#include<stdio.h>
void main()
{
int a[8]={10,20,30,40,50};
int *ip,i,t;

ip=a;
for(i=2;i<7;i++)
{
t=*ip;
ip=ip+2;
a[i]=t;
}
printf("\n");
for(i=0;i<8;i++)
printf("%d ",a[i]);

printf("\n");

}
