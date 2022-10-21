#include<stdio.h>
char* my_strrev(char *);
void main()
{
char s[10],*p;
printf("enter str...\n");
scanf("%s",s);
printf("original str...=%s\n",s);
p=my_strrev(s);
printf("after swap..=%s\n",p);
}
char* my_strrev(char *p)
{
int i,l,j;
char t;
for(i=0;p[i];i++);
l=i;
for(i=0,j=l-1;i<j;i++,j--)
{
t=p[i];
p[i]=p[j];
p[j]=t;
}
return p;
}
