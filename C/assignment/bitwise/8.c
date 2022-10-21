#include<stdio.h>
void main()
{
char ch;
printf("enter ch= ");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
{
ch=ch&~(1<<5);
printf("ch=%c\n",ch);
}
else if (ch>='A' && ch<='Z')
{
ch=ch|1<<5;
printf("ch=%c\n",ch);
}
else
printf("wrong input\n");



}
