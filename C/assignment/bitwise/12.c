#include<stdio.h>
void main()
{
int num=0x1234,i,r;
printf("num=%x\n",num);
r=num&0x00ff;
printf("r=%x\n",r);
i=num&0xff00;
printf("i=%x\n",i);
r=r<<8;
i=i>>8;
printf("num=%x\n",r|i);





}

