#include<stdio.h>
void main()
{
	char s[50],ch;
	printf("enter str...\n");
	scanf("%s",s);
	printf("\nenter char...\n");
	scanf(" %c",&ch);
	int i,j;
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
		
		i--;
        }
	}
	printf("s=%s\n",s);

}
