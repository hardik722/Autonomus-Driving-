#include<stdio.h>
void main()
{
	char s1[100],s2[100];
	int i,l;
	printf("enter str...\n");
	scanf("%[^\n]",s1);

	for(i=0;s1[i];i++);
	l=i;
	printf("l=%d\n",l);

	for(i=l-1;i>0;i--)
	{
		if(s1[i]==' ')
		{
			s1[i]='\0';
		
		printf("%s ",&(s1[i+1]));
		}
		
	}
printf("%s\n",s1);
}





