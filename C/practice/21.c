#include<stdio.h>
void main()
{
int i,m,r,n1,n2,lcm;
printf("enter n1 and n2...\n");
scanf("%d%d",&n1,&n2);
m=n1>n2?n1:n2;
for(i=1;i<=m;i++)
{
r=m*i;
if(r%n1==0)
break;
}
printf("lcm=%d\n",r);
}


