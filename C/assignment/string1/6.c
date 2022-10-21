#include<stdio.h>
void main()
{
	char s[100],t;
	printf("enter str..\n");
	scanf("%s",s);
	int i,j,l;
	for(i=0;s[i];i++);
	l=i;
	printf("l=%d\n",l);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	printf("str=%s\n",s);

}
