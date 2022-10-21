#include<stdio.h>
void main()
{
int i,j,sum,r,c,n1,n2;
printf(" num n1=");
scanf("%d",&n1);
printf(" num n2=");
scanf("%d",&n2);
for(i=n1,c=0;i<=n2;i++)
{
 for(sum=0,j=i;j!=0;j=j/10)
  {
    r=j%10;
    sum=(sum*10)+r;
  }
if(sum==i)
{
printf("%d ",sum);
c++;
}

}

printf("c=%d\n",c);
}
