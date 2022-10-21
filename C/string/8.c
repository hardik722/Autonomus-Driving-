#include<stdio.h>
void main()
{
	char s[10],ch;
	int i,j,l;
	printf("enter string= ");
	scanf("%s",s);
	printf("\ns=%s\n",s);
	printf("enter char=");
	scanf(" %c",&ch);

	for(i=0;s[i]!='\0';i++);
	l=i;
	printf("length=%d\n",l);

	for(i=0;s[i];i++)
	{
		if(ch==s[i])
		{
			for(j=i;j<l;j++)
			{
				s[j]=s[j+1];
			}

			i--;
		}
	}
	s[i]='\0';
	printf("s=%s\n",s);
}
