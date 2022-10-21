#include<stdio.h>
void delete(char *,char *);
void main()
{

	int n;
	printf("enter string size...\n");
	scanf("%d",&n);

	char s[n];
	printf("enter str...\n");
	scanf("%s",s);

	delete(s+5,s+2);
	printf("%s\n",s);
}

void delete(char *p,char *q)
{
	while(*p)
	{
		*q=*p;
		*p='\0';
		p++;
		q++;
	}
}



