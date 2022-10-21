#include<stdio.h>
void main()
{
int n1,n2,i,j;
printf("enter num..\n");
scanf("%d%d",&n1,&n2);

for(i=n1;i<=n2;i++)
{
for(j=1;j<=10;j++)
printf("%d*%d=%d\n",i,j,i*j);
printf("\n");
}

}
