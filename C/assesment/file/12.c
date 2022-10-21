#include<stdio.h>
void main(int argc,char** argv)
{
	if(argc!=2)
	{
		printf("usage: ./a.out fname...\n");
		return;
	}
	FILE *fp;
	char s[10];
	printf("enter str...\n");
	scanf("%s",s);
	fp=fopen(argv[1],"w+");
	fprintf(fp,"%s\n",s);
rewind(fp);
fscanf(fp,"%s",s);
printf("s=%s\n",s);
}

