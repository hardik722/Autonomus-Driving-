#include<stdio.h>
void main()
{
int i,c,j;
//printf("enter num..\n");
//scanf("%d",&num);
for(j=1,c=0;c!=100;j++)
{
for(i=2;i<j;i++)
{

if(j%i==0)
break;
}
if(j==i)
{
printf("%d ",j);
c++;
}

}
printf("\n");
}
