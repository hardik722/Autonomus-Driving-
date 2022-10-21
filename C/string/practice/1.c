#include<stdio.h>
void main()
{
char s[10];
int i;
printf("enter string= ");
scanf("%s",s);

for(i=0;s[i]!='\0';i++)
printf("%c",s[i]);

printf("\nl=%d\n",i);

}
