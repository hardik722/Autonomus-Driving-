#include<stdio.h>
union one 
{
int i;
float f;
};
void main()
{
union one o1;
int pos;
o1.f=23.7;
for(pos=31;pos>=0;pos--)
printf("%d",o1.i>>pos&1);
printf("\n");
}
