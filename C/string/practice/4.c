#include<stdio.h>
void main()
{
char s[10];
int i,m;

printf("enter string=");
scanf("%s",s);
printf("s=%s\n",s);

for(i=0;s[i]!='\0';i++)
{
m=s[i]>>5&1;
if(m!=0)
{
s[i]=s[i]&~(1<<5);
}
}
printf("s=%s\n",s);

}
