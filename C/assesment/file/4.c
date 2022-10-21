#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc<3)
	{
		printf("usage: ./a.out sfile dfile <-- minimum 1 dest file...\n");
		return;
	}
	FILE *fp,*fd;
	fp=fopen(argv[1],"");
	char ch;
	int i;
	for(i=2;i<argc;i++)
	{
		fd=fopen(argv[i],"w");
		while((ch=fgetc(fp))!=-1)
			fputc(ch,fd);
		
		rewind(fp);
	}
}
