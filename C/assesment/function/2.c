#include<stdio.h>
char* my_strchr(char*,char);
void main()
{
	char s[20],*p,ch;
	printf("enter str...\n");
	scanf("%s",s);
	printf("enter char ...\n");
	scanf(" %c",&ch);
	p=my_strchr(s,ch);
	printf("char prasent @%u %u\n",p,p+1);
}
char* my_strchr(char *q,char ch)
{
	int i;
	for(i=0;q[i];i++)
	{
		if(q[i]==ch)
			break;
	}
	return &q[i];
}
