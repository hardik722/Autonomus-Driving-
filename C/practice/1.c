#include<stdio.h>
void main()
{
int i,num,fect;
printf("enter num..");
scanf("%d",&num);
for(i=num,fect=1;i>0;i--)
fect=fect*i;
printf("fect=%d\n",fect);

}
