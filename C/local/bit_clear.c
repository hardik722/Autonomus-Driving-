#include<stdio.h>
void main()
{
int i,pos;
printf("enter the num i=");
scanf("%d",&i);
printf("enter the pos=");
scanf("%d",&pos);
printf("befor the bit is clear i=%d\n",i);
i=i&~(1<<pos);
printf("after the bit is clear i=%d\n",i);
}
