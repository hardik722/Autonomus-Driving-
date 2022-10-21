#include<stdio.h>
void main()
{
int i=10,*p;
p=&i;
printf("&i=%p p=%p &p=%p *p=%d i=%d\n",&i,p,&p,*p,i);
*p=100;
printf("&i=%p p=%p &p=%p *p=%d i=%d\n",&i,p,&p,*p,i);
i=200;
printf("&i=%p p=%p &p=%p *p=%d i=%d\n",&i,p,&p,*p,i);


}


