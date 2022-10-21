#include<stdio.h>
void main()
{
int i,m,n1,n2,hcf;

printf("enter n1 and n2...\n");
scanf("%d%d",&n1,&n2);

m=n1<n2?n1:n2;
for(i=1;i<=m;i++)
{
if(n1%i==0 && n2%i==0)
hcf=i;
}
printf("hcf=%d\n",hcf);
}
