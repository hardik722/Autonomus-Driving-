#include<stdio.h>
void print(int (*)[3]);
void main()
{
int a[][3]={{10,20,30},{40,50,60},{70,80,90}};
print(a);
}
void print(int (*p)[3])
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",p[i][j]);
}
printf("\n");
}
}

