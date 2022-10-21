#include<stdio.h>
void print(char **,int);
void main()
{
char *p[3]={"mnop","abcd","pqrs"};
print(p,3);
}
void print(char **p,int n)
{
int i;
for(i=0;i<n;i++)
printf("%s\n",p[i]);
}
