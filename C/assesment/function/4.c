#include<stdio.h>
void my_rev(char*);
void main()
{
	char s[20];
	printf("enter str...\n");
	scanf("%[^\n]",s);
	my_rev(s);
}
void my_rev(char *p)
{
	int i,l;
	for(i=0;p[i];i++);
	l=i;
	printf("str len =%d\n",l);
	for(i=l-1;i>=0;i--)
	{
		if(p[i]==' ')
		{
			p[i]='\0';
			printf("%s",&p[i+1]);
			printf(" ");
		}
	}
	printf("%s\n",p);
}

