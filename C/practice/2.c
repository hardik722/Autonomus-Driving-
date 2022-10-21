#include<stdio.h>
void main()
{
char ch;
printf("enter char...\n");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
{
ch=ch&~(1<<5);
printf("ch=%c\n",ch);
}
if(ch>'A' && ch<='Z')
{
ch=ch|(1<<5);
printf("ch=%c\n",ch);
}
}
