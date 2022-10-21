#include<stdio.h>
void str_rev(char*);
int str_len(char*);
void main()
{
	char s[10];
	printf("enter string..\n");
	scanf("%s",s);
	str_rev(s);
	printf("s=%s\n",s);
}
void str_rev(char *p)
{
	char *s1,t;
	int l;
	l=str_len(p);
	s1=p+l-1;
	while(p<s1)
	{
		t=*p;
		*p=*s1;
		*s1=t;
		p++;
		s1--;
	}
}
	int str_len(char *cp)
	{
		int i;
		for(i=0;cp[i]!='\0';i++);
		return i;
	}
