#include<stdio.h>
void main()
{
	char s1[100],s2[100],t;
	int i,j,l;

	printf("enter str..\n");
	scanf("%s",s1);

	for(i=0;s1[i];i++)
		s2[i]=s1[i];

	s2[i]='\0';

	for(i=0;s2[i];i++);
	l=i;
	printf("l=%d\n",l);

	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=s2[i];
		s2[i]=s2[j];
		s2[j]=t;
	}
	
	printf("s2=%s\n",s2);

	for(i=0;s1[i];i++)
	{
		if(s1[i]!=s2[i])
			break;
	}
	if(i==l)
		printf("pal..\n");
	else
		printf("not pal..\n");

}






