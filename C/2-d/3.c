#include<stdio.h>
#include<string.h>
void main()
{
	char s[5][10],t[10];
	int i,j;
	printf("enter string ele..\n");
	for(i=0;i<5;i++)
		scanf("%s",s[i]);
	printf("============\n");


	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(t,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],t);
			}
		}
	}
	for(i=0;i<5;i++)
		printf("%s\n",s[i]);
}
