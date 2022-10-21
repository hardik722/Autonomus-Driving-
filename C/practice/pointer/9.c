#include<stdio.h>
void main()
{
int r,c;
printf("enter row...\n");
scanf("%d",&r);
printf("enter col...\n");
scanf("%d",&c);
printf("enter ele...\n");

int a[r][c];
int i,j;
int (*p)[c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
p=a;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",p[i][j]);
}
printf("\n");
}

}

