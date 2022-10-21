#include<stdio.h>
void main()
{
int n;
printf("enter num n...\n");
scanf("%d",&n);

int a[n],i,j,squr=0,sum=0;

for(i=1,j=0;i<=n;i++,j++)
{
squr=i*i;
a[j]=squr;
sum=sum+a[j];
}

for(i=0;i<n;i++)
printf("%d ",a[i]);

printf("sum=%d\n",sum);

}


