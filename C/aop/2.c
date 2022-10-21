#include<stdio.h>
void print(int (*)[3]);
void main()
{
int a[2][3]={{10,20,30},{40,50,60}};
print(a);
/*printf("&p=%u p=%u\n",&p,p);
printf("p=%u p+1=%u\n",p,p+1);
printf("&p[0]=%u &p[0]+1=%u\n",&p[0],&p[0]+1);
printf("p[0]=%u p[0]+1=%u p[0]+2=%u\n",p[0],p[0]+1,p[0]+2);
printf("*p=%u *p+1=%u\n",*p,*p+1);
printf("**p=%u *(*p+1)=%u\n",**p,*(*p+1));
printf(" *(*(p+1)+1)=%u\n",*(*(p+1)+1));*/
}
void print(int (*p)[3])
{
int i,j;
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",p[i][j]);
}
printf("\n");
}

}




