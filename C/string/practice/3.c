#include<stdio.h>
void main()
{
char s[10],t;
int i,j,l;
printf("enter string=");
scanf("%s",s);
printf("s=%s\n",s);

for(i=0;s[i]!='\0';i++);
l=i;
printf("length=%d\n",l);

for(i=0,j=l-1;i<j;i++,j--)
{
t=s[i];
s[i]=s[j];
s[j]=t;
}

printf("s=%s\n",s);

}
