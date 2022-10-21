#include<stdio.h>
void str_rev(char*);
int str_len(char*);
void main()
{
	char s[10];
	int i,l;
	printf("enter string..\n");
	scanf("%s",s);
	str_rev(s);
}

void str_rev(char *p)
{
	int i,j,l,t;
	l=str_len(p);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}

printf("%s\n",p);

}
int str_len(char *q)
{
int i,l;
for(i=0;q[i]!='\0';i++);
l=i;
return l;
}
