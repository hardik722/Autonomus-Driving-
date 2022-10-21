#include<stdio.h>
void main()
{
int num=0x1234,r1,r2;

r1=num&0xff00;
r1=r1>>8;
r2=num&0x00ff;
r2=r2<<8;

num=r1|r2;
printf("num=%x\n",num);

}
