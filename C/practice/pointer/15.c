#include<stdio.h>
int my_strcmp(char*,char*);
void main()
{
char s1[10],s2[10];
int l;
printf("enter str1...\n");
scanf("%s",s1);
printf("enter sre2...\n");
scanf("%s",s2);
l=my_strcmp(s1,s2);
if(l==1)
printf(" s1 is big...\n");
else if(l==-1)
printf(" s2 is big...\n");
else
printf("both are same...\n");
}
int my_strcmp(char *p,char *q)
{
int i;
for(i=0;p[i],q[i];i++)
{
if(p[i]!=q[i])
break;
}
if(p[i]>q[i])
return 1;
else if(p[i]<q[i])
return -1;
else
return 0;
}
