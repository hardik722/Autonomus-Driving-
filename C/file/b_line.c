#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	fp=fopen("data","r");
	if(fp==0)
	{
		printf("file does not exist...\n");
		return;
	}
	int c,c1=0;
	char s[50];
	while(fgets(s,30,fp)!=0)
	{
		c=strlen(s);
		if(c>c1)
		{
			c1=c;
			c=0;
		}
	}
printf("c1=%d\n",c1);
}
