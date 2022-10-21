#include<stdio.h>
void main()
{
int j,i,c;
//printf("enter num= ");
//scanf("%d",&num);
for(j=0,c=0;c<100;j++)
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
