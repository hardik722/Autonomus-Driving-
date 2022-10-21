#include<stdio.h>
void main()
{
	int n;
	printf("enter n...\n");
	scanf("%d",&n);
	char s[n];
	printf("enter str...\n");
	scanf(" %[^\n]",s);
	int i,j;
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
		}
	}
	printf("after space removing...\n");
	printf("%s\n",s);
}

