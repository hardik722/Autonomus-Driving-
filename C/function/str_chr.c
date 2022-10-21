#include<stdio.h>
int str_chr(char*,char);
void main()
{
	char s[10],ch;
	int m;
	printf("enter string..\n");
	scanf("%s",s);
	printf("enter char...\n");
	scanf(" %c",&ch);
	m=str_chr(s,ch);
	if(m==0)
		printf("no char found..\n");
	else
		printf("on %d position char present..\n",m);
}
int str_chr(char *p,char ch)
{
   int i;
	for(i=0;p[i]!='\0';i++)
	{
		if(p[i]==ch)
			return i;
	}
	return 0;
}
