#include<stdio.h>
void main()
{
	char s[10],d[10],i;
	printf("enter string\n");
	scanf("%s",s);
	printf("s=%s\n",s);

	for(i=0;s[i]!='\0';i++)
	{
		d[i]=s[i];
	}

	d[i]='\0';

	printf("d=%s\n",d);

}

