#include<stdio.h>
void main()
{
float f=23.7;
char *cp=(char*)&f;
cp=cp+3;
int i,pos,*ip=(int*)&f;
for(i=3;i>=0;i--,cp--)
{
for(pos=7;pos>=0;pos--)
printf("%d",*cp>>pos&1);
}
printf("\n");
for(pos=31;pos>=0;pos--)
printf("%d",*ip>>pos&1);
printf("\n");
}
