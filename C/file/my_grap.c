#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("usage:./a.out data string...\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is not present...\n");
		return;
	}
	char s[50];
	while(fgets(s,50,fp)!=0)
	{
		if(strstr(s,argv[2]))
			printf("%s",s);
	}

}

