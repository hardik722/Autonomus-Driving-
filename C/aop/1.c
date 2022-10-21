#include<stdio.h>
void main()
{
int *p[5];
int i=10,j=20,k=30;
p[0]=&i;
p[1]=&j;
p[2]=&k;
printf("&p=%u &p+1%u\n",&p,&p+1);
printf("p=%u p+1=%u\n",p,p+1);
printf("*p=%u *p+1=%u\n",*p,*p+1);
printf("&p[0]=%u &p[0]+1=%u\n",&p[0],&p[0]+1);
printf("p[0]=%u p[0]+1=%u\n",p[0],p[0]+1);

printf("**p=%u *(*(p+1))=%u\n",**p,*(*(p+1)));
//printf("%u %u %u\n",*p[0],*p[1],*p[2]);
}
