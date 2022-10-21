#include<stdio.h>
void main()
{
int *p[2];
int i=10,j=20,m;
p[0]=&i;
p[1]=&j;
printf("----before swaping add...\n");
for(m=0;m<2;m++)
{
printf("%d ",*(p[m]));
printf("\n");
}
int *q;
q=p[0];
p[0]=p[1];
p[1]=q;
printf("----after swaping add...\n");
for(m=0;m<2;m++)
{
printf("%d ",*(p[m]));
printf("\n");
}
}
