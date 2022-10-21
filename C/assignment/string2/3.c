#include<stdio.h>
void main()
{
	char s[50],ch;
	printf("enter str...\n");
	scanf("%[^\n]",s);
	// printf("\nenter char...\n");
	// scanf(" %c",&ch);
	int i,j,k;
	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				for(k=j;s[k];k++)
					s[k]=s[k+1];
				j--;}
		}
	}
	printf("s=%s\n",s);
}

