#include<stdio.h>
void print(int,int,char (*)[]);
void main()
{
char s[3][10]={"abcd","efgh","mnop"};
int r,c;
r=3;
c=10;
print(r,c,s);
}
void print(int r,int c,char (*p)[c])
{
int i;
for(i=0;i<r;i++)
printf("%s\n",p[i]);
}
