#include<stdio.h>
#include<string.h>
void main()
{
char s[5][10],t[10];
int i;
for(i=0;i<5;i++)
scanf("%s",s[i]);
printf("=======================\n");
strcpy(t,s[0]);
strcpy(s[0],s[1]);
strcpy(s[1],t);

for(i=0;i<5;i++)
printf("%s\n",s[i]);



}
