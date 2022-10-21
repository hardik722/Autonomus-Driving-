#include<stdio.h>
#include<string.h>
void main(int argc,char** argv)
{
	if(argc!=3)
	{
		printf("uasge:./a.out fname...\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	char s[50];
	while(fgets(s,50,fp)!=0)
	{
		if(strstr(s,argv[2])!=0)
			printf("%s",s);
	}
}
