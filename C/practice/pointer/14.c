#include<stdio.h>
void main()
{
	int n;
	printf("enter size of str ...n..\n");
	scanf("%d",&n);
	char s[n],s1[n];
	printf("enter string...\n");
	scanf("%s",s);
	printf("enter str 1...\n");
	scanf("%s",s1);
	int i,l,j;
	for(i=0;s[i];i++);
	l=i;
	s[i]=' ';
	char *p;
	p=s;
	for(i=l+1,j=0;s1[j];i++,j++)
	{
		p[i]=s1[j];
	}

	p[i]='\0';

	printf("\n");

	printf("concatinated str..%s\n",p);

}
