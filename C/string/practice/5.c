#include<stdio.h>
void main()
{
char s[10],ch;
int i,c;

printf("enter string=");
scanf("%s",s);
printf("s=%s\n",s);

printf("enter char= ");
scanf(" %c",&ch);

for(i=0,c=0;s[i]!='\0';i++)
{
if(ch==s[i])
{
c++;
}

}

printf("c=%d\n",c);

}
