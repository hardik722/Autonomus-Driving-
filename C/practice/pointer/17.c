#include<stdio.h>
void my_sortary(int *);
void main()
{
int a[5],i;
printf("enter 5 ele...\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
my_sortary(a);
}
void my_sortary(int *p)
{
int i,j,t;
for(i=0;i<4;i++)
{
for(j=0;j<4-i;j++)
{
if(p[j]>p[j+1])
{
t=p[j];
p[j]=p[j+1];
p[j+1]=t;
}
}
}
for(i=0;i<5;i++)
printf("%d ",p[i]);

}
