#include<stdio.h>
void main()
{
char s[10];
int i;
printf("enter string\n");
scanf("%s",s);
printf("s=%s\n--------\n",s);

for(i=0;s[i]!='\0';i++)
printf("%c",s[i]);
printf("\n");
}

