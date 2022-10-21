#include<stdio.h>
#include<stdlib.h>
void main()
{
char **p;
int i,n;
printf("enter n...\n");
scanf("%d",&n);

p=malloc(sizeof(char*)*n);

printf("enter str...\n");
for(i=0;i<n;i++)
p[i]=calloc(10,1);


for(i=0;i<n;i++)
scanf("%s",p[i]);

printf("str...\n");

for(i=0;i<n;i++)
printf("%s\n",p[i]);
}
