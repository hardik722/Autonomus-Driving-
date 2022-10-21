#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p,n,i;
printf("enter n...\n");
scanf("%d",&n);
p=calloc(n,4);
for(i=0;i<n;i++)
scanf("%d",&p[i]);

printf("ele are ...\n");
for(i=0;i<n;i++)
{
printf("%d ",p[i]);
printf("\n");
}
}
