#include<stdio.h>
void print(char (*)[10],int);
void main()
{
char s[][10]={"abcd","efgh","ijkl"};
print(s,3);
}
void print(char (*p)[10],int n)
{
int i;
for(i=0;i<n;i++)
printf("%s\n",p[i]);
}
