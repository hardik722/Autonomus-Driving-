#include<stdio.h>
void main()
{
	char s[100];
	char *cp;
	int i,l;
	
	printf("enter string...\n");
	scanf("%s",s);
	
	cp=&s;
	
	for(i=0;cp[i];i++);
	l=i;
	
	printf("l=%d\n",l);

}
