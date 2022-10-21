#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p,i;
p=calloc(5,4);
for(i=0;i<5;i++)
scanf("%d",&p[i]);

for(i=0;p[i];i++)
printf("%d ",p[i]);
}
