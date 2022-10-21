#include<stdio.h>
void main()
{
unsigned int num,fect;
printf("enter the num=");
scanf("%d",&num);
for (fect=1;num>0;num--)
{
fect=fect*num;
}
printf("fect=%d\n",fect);

}
