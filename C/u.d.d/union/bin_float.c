#include<stdio.h>
union st
{
int i;
float f;
};
void main()
{
union st u1;
u1.f=20.5;
int pos;
for(pos=31;pos>=0;pos--)
printf("%d",u1.i>>pos&1);
printf("\n");
}
