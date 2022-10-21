#include<stdio.h>
void main()
{
char s[10],ch='e';
int i,j,l,t;
printf("enter string..\n");
scanf("%s",s);
printf("%s\n",s);

for(i=0;s[i]!='\0';i++);
l=i;
printf("l=%d\n",l);

for(i=0;s[i]!='\0';i++)
{
 if(s[i]==ch)
	{
	for(j=i;s[j]!='\0';j++)
	s[j]=s[j+1];
	i--;
	}
}
printf("s=%s\n",s);

}
