#include<stdio.h>
void main()
{
int num,pos,m,n,i,j;
printf("enter the num= ");
scanf("%d",&num);
for(pos=7;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");

for(i=0,j=7;i<4;i++,j--)
{
  m=num>>i&1;
  n=num>>j&1;

        if(m!=n)
	{
	num=num^1<<i;
	num=num^1<<j;
	}
}

for(pos=7;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");

printf("after reversing bit=%d\n",num);


}

