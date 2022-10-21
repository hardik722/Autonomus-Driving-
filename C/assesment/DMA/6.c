#include<stdio.h>
#include<stdlib.h>
char* upper(char *);
void main()
{
char *p;
p=calloc(20,1);
printf("enter str...\n");
scanf("%s",p);
p=upper(p);
printf("str=%s\n",p);
}
char* upper(char *q)
{
int i;
for(i=0;q[i];i++)
{
if(q[i]>='a' && q[i]<='z')
q[i]=q[i]&~(1<<5);
}
return q;
}
