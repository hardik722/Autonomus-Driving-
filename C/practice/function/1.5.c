#include<stdio.h>
void delete(char *,char);
void main()
{
	int n;
	printf("enter string size...\n");
	scanf("%d",&n);

	char s[n],ch;
	printf("enter str...\n");
	scanf("%s",s);

	printf("enter char ...\n");
	scanf(" %c",&ch);

	delete(s,ch);
	printf("%s\n",s);
}

void delete(char *p,char ch)
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

