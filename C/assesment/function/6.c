#include<stdio.h>
void print(int);
void main()
{
int num=10;
print(num);
printf("\n");
print(num);
printf("\n");
}
void print(int n)
{
static int pos=0;
if(pos<=31)
{
printf("%d",n>>pos&1);
pos++;
print(n);
}
else
pos=0;
}
