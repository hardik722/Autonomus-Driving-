#include<stdio.h>
void main()
{
int i=10,j;
int *p=&i;


printf("p=%p\n",p);

printf("*p=%d\n",*p);

j=*p++3;
printf("------------\n");
printf("*p=%d\n",*p);
printf("\ni=%d\n",i);
printf("j=%d\n",j);


printf("\np=%p\n",p);


}
