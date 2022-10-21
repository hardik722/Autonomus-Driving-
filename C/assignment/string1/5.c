#include<stdio.h>
void main()
{
	char s1[10],s2[10];
	int i;
	printf("enter string s1= ");
	scanf("%s",s1);
	printf("enter string s2= ");
	scanf("%s",s2);

	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
			break;
	}
	if(s1[i]==s2[i])
		printf("same string\n");
	else
		printf("not same string\n");

}

