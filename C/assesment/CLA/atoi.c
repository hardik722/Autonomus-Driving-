#include<stdio.h>
#include<stdlib.h>
int my_atoi(char *);
void main()
{
char s[10]="-12.34";
int l,l1;
l=atoi(s);
printf("predefined=%d\n",l);
l1=my_atoi(s);
printf("u.d=%d\n",l1);
}
int my_atoi(char *p)
{
int i,num;
if(p[0]=='+' || p[0]=='-')
i=1;
else
i=0;

for(num=0;p[i];i++)
{
if(p[i]>='0' && p[i]<='9')
num=num*10+p[i]-48;
else
break;
}
if(p[0]=='-')
num=-num;

return num;
}

