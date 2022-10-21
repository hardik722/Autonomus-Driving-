// HCF

#include<stdio.h>
void main()
{
int n1,n2,i,min,HCF;
printf("enter n1 and n2=\n");
scanf("%d%d",&n1,&n2);
min=n1<n2?n1:n2;

for(i=1;i<=min;i++)
{
if(n1%i==0 && n2%i==0)
HCF=i;
}
printf("HCF=%d\n",HCF);

}
