#include<stdio.h>
void print(char (*)[10],int);
void main()
{
char a[][10]={"mnop","ijkl","abcd"};
int r;
r=sizeof(a)/sizeof(a[0]);
print(a,r);
}
void print(char (*p)[10],int n)
{
int i;
for(i=0;i<n;i++)
printf("%s\n",p[i]);
}
