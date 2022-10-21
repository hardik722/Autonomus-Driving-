#include<stdio.h>
int my_strlen(char*);
void main()
{
	char s[10]="abcd";
	int l;
	l=my_strlen(s);
	printf("l=%d\n",l);
}
int my_strlen(char *p)
{
	if(*p)
	{
		return 1+my_strlen(p+1);
	}
}


