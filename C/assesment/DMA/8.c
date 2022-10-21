#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,j;
printf("enter array of pointer ele...\n");
scanf("%d",&n);
int *p[n],r,c;
/*printf("enter row...\n");
scanf("%d",&r);*/
printf("enter col...\n");
scanf("%d",&c);
for(i=0;i<n;i++)
p[i]=calloc(c,4);
printf("enter 2-d array ele...\n");
for(i=0;i<n;i++)
{
for(j=0;j<c;j++)
scanf("%d",&p[i][j]);
}
printf("array ele are...\n");
for(i=0;i<n;i++)
{
for(j=0;j<c;j++)
{
printf("%d",p[i][j]);
printf("\n");
}
}
}
