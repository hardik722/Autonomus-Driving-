#include<stdio.h>
void main()
{
	char s[50],ch,re;
	printf("enter str...\n");
	scanf("%[^\n]",s);
	printf("enter char to replace..\n");
	scanf(" %c",&ch);
	printf("enter char replace with..\n");
	scanf(" %c",&re);
   int i;
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			s[i]=re;
		}
	}
	printf("s=%s\n",s);

}
