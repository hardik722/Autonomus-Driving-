#include<stdio.h>
void main()
{
 char a[4]={10,20,30,50};
char i=200;

printf("i=%d &i=%d \n",i,&i);

printf("a=%d &a=%d\n",a,&a);


printf("a=%d\n",a);

printf("a+1=%d &a+1=%d\n",a+1,&a+1);
}

