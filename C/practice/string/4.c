#include<stdio.h>
void main()
{
	char s[100];
	int i;
	printf("enter string...\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
	{   
		if(s[i]>='a' && s[i]<='z')
		{
		s[i]=s[i]&~(1<<5);
		}
		else if(s[i]>='A' && s[i]<='Z')
		{
		s[i]=s[i]|(1<<5);
		}
		
	}

	printf("\n");
printf("%s\n",s);
}



