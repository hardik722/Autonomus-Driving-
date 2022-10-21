#include<stdio.h>
void main()
{
	char s[10],t;
	int i,j,l;

	scanf("%s",s);
	printf("s=%s\n",s);

	for(i=0;s[i]!='\0';i++);
	l=i;

	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	s[l]='\0';
	printf("rev=%s\n",s);
}
