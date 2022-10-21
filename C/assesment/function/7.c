#include<stdio.h>
void print(char*);
void main()
{
char s[10]="abcde";
print(s);
printf("\n");
}
void print(char *p)
{
if(*p!='\0')
{
print(p+1);
printf("%c",*p);
}
}
