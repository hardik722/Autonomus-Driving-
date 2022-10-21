#include<stdio.h>
void main()
{
	char s[100];
	int i,c1=0,c2=0,c3=0;
	printf("enter string..\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
			c1++;
		else if(s[i]>='0' && s[i]<='9')
			c2++;
		else
			c3++;
	}

	printf("char=%d\n",c1);
	printf("digit=%d\n",c2);
	printf("special symbol=%d\n",c3);
}
