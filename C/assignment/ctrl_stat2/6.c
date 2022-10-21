// LCM

#include<stdio.h>
void main()
{
int n1,n2,i,j,max;
printf("enter n1 and n2=\n");
scanf("%d%d",&n1,&n2);

max=n1>n2?n1:n2;
for(i=1;i<=max;i++)
{
j=m*i;
if(j%n1==0)
break;
}
printf("LCM=%d\n",j);

}
