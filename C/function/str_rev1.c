#include<stdio.h>
void str_rev(char*,char*);
void main()
{
	char s[10];
	printf("enter string..\n");
	scanf("%s",s);
	str_rev(s+1,s+4);
	printf("rev=%s\n",s);
}
void str_rev(char *p,char *q)
{
	int t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;

	}



}

