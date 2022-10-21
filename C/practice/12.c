#include<stdio.h>
void main()
{
char ch='D';
int pos;
ch=ch|(1<<5);
for(pos=31;pos>=0;pos--)
printf("%d",ch>>pos&1);

printf("\n");
printf("%c\n",ch);
}
