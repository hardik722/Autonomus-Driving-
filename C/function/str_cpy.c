#include<stdio.h>
void str_cpy(char *,char *);
void main()
{
char s[50],d[50];
printf("enter string..\n");
scanf("%[^\n]",s);
str_cpy(s,d);
printf("d=%s\n",d);
}
void str_cpy(char *cp,char *cq)
{
int i;
for(i=0;cp[i]!='\0';i++)
cq[i]=cp[i];
cq[i]='\0';
}
