#include<stdio.h>
void main(int argc,char** argv)
{
	if(argc!=2)
	{
		printf("usage:./a.out fname...\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	char ch;
	int c=0,c1=0;
	while((ch=fgetc(fp))!=-1)
	{
		c++;
		if(ch=='\n')
		{
			if(c>c1)
				c1=c;
			c=0;
		}
	}
	
	printf("bigest line length==%d\n",c1);
}
