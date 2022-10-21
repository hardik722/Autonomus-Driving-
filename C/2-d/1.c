#include<stdio.h>
void main()
{
int b[2][3]={{10,20,30},{40,50,60}};
/*r=sizeof(b)/sizeof(b[0]);
printf("r=%d\n",r);
c=sizeof(b[0])/sizeof(b[0][0]);
printf("c=%d\n",c);*/

printf("&b=%u &b+1=%u\n",&b,&b+1);
printf("b=%u b+1=%u\n",b,b+1);
printf("&b[0]=%u,&b[0]+1=%u\n",&b[0],&b[0]+1);
printf("b[0]=%u b[0]+1=%u\n",b[0],b[0]+1);
printf("b=%u b+1=%u\n",b,b+1);
printf("*b=%u *b+1=%u\n",*b,*b+1);
printf("**b=%u *(*b+1)=%u\n",**b,*(*b+1));
printf(" *(*(b+1))=%u *(b[0]+3)=%u\n",*(*(b+1)),*(b[0]+3));



}
