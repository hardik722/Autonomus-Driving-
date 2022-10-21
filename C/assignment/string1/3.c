#include<stdio.h>
void main()
{
	char s[100],ch;
	printf("enter str...\n");
	scanf("%s",s);

	printf("enter char...\n");
	scanf(" %c",&ch);
	int i,c;
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
			c++;
	}
	printf("c=%d\n",c);

}

