#include<stdio.h>
int str_len(char*);
void main()
{
	char s[100];
	int l;
	printf("enter string..\n");
	scanf("%[^\n]",s);
	l=str_len(s);
	printf("length=%d\n",l);
}
int str_len(char *cp)
{
	int i,m;
	for(i=0;cp[i]!='\0';i++);
	m=i;
	return m;
}

