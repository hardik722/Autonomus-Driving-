#include<stdio.h>
char* str_chr(char *,char);
void main()
{
int n;
printf("enter string size...\n");
scanf("%d",&n);

char s[n],ch,*p;
printf("enter s1 str...\n");
scanf("%s",s);
printf("enter char ...\n");
scanf(" %c",&ch);

p=str_chr(s,ch);
printf("p=%p\n",p);
}

char* str_chr(char *p,char ch)
{
	int i;
	while(*p)
	{
		if(*p==ch)
			return p;
		p++;
	}
	return 0;
}
