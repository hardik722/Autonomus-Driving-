#include<stdio.h>
#include<string.h>
void main(int argc,char** argv)
{
	if(argc!=2)
	{
		printf("usage:./a.out fname...\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	char s[50];
	int c=0,c1=0;
	while(fgets(s,50,fp)!=0)
	{
		c=strlen(s);
		if(c>c1)
		{
			c1=c;
			c=0;
		}
	}
	printf("bigest line...=%d\n",c1);
}
