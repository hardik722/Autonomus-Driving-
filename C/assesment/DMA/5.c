#include<stdio.h>
#include<stdlib.h>
void main()
{
char *p[3];
int i;
for(i=0;i<3;i++)
p[i]=calloc(10,1);

for(i=0;i<3;i++)
{
printf(" %dth str...\n",i);
scanf("%s",p[i]);
}

printf("*****str..**********\n");
for(i=0;i<3;i++)
printf("%s\n",p[i]);

printf("***rev str...********\n");
for(i=2;i>=0;i--)
printf("%s\n",p[i]);
}
