#include<stdio.h>
void main()
{
	char s[50],ch;
	printf("enter str...\n");
	scanf("%s",s);
	printf("\nenter char...\n");
	scanf(" %c",&ch);
	int i,j,k,l;
	for(i=0;s[i];i++);
	l=i;
	for(i=l-1;i>=0;i--)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			break;
		}
		
	}
	printf("s=%s\n",s);

}
