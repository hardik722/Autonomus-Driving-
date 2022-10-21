#include<stdio.h>
void main()
{
 int i,j,n1,n2,sum,c;
printf(" n1= ");
scanf("%d",&n1);
printf(" n1= ");
scanf("%d",&n2);

for(i=n1,c=0;i<=n2;i++)
{
  for(j=1,sum=0;j<i;j++)
  {
   if(i%j==0)
   sum=sum+j;
  }
if(sum==i)
{
printf("%d ",i);
c++;
}

}

printf("c=%d\n",c);

}
