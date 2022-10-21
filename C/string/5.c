#include<stdio.h>
void main()
{
	char s[10];
	int i,l,m;
	printf("enter string\n");
	scanf("%s",s);
	printf("\ns=%s\n---------\n",s);

	for(i=0;s[i]!='\0';i++);
	l=i;
	printf("l=%d\n-----------\n",l);

	for(i=0;i<l;i++)
	{
		m=s[i]>>5&1;
		if(m==1)
		{
			s[i]=s[i]&~(1<<5);
		}
	}
	s[l]='\0';
	printf("s=%s\n",s);
}



