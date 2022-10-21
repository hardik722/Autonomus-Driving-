#include<stdio.h>
int bit_set(int);
void main()
{
int num,c;
printf("enter num...");
scanf("%d",&num);

c=bit_set(num);
printf("%d\n",c);
}
int bit_set(int num)
{
int pos,c=0;
for(pos=31;pos>=0;pos--)
{
if(num>>pos&1)
c++;
}
return c;
}
