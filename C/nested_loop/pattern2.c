#include<stdio.h>
void main ()
{
int num,num1,i,j,k,num4,num3;

 for(i=0;i<6;i++)
{
for(j=0,num=1,num1=2;j<=i;j++)
{

k=i&1;
if(k==0)
{

printf("%d ",num);
num=num+2;	

}
else
{

printf("%d ",num1);
num1=num1+2;
}
}
printf("\n");