#include<stdio.h>
void main()
{
char s[100],d[100];
int i;
printf("enter source string...\n");
scanf("%s",s);

for(i=0;s[i];i++)
d[i]=s[i];
d[i]='\0';

printf("\nd=%s\n",d);
}
