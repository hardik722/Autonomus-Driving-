#include<stdio.h>
void main()
{
	char s[100],d[100];
	int i;
	
	printf("enter source...\n");
	scanf("%s",s);

	for(i=0;s[i];i++)
	{
		d[i]=s[i];
	}
	
	s[i]='\0';
	
	printf("d=%s\n",d);

}
