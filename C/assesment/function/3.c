#include<stdio.h>
void my_delete(char *p,char ch)
{
	int i,j;
	for(i=0;p[i];i++)
	{
		if(p[i]==ch)
		{
			for(j=i;p[j];j++)
				p[j]=p[j+1];

			i--;
		}
	}
}
void main()
{
	char s[10],ch;
	printf("enter str...\n");
	scanf("%s",s);
	printf("enter char ...\n");
	scanf(" %c",&ch);
	my_delete(s,ch);
	printf("s=%s\n",s);
}
