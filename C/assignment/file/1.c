#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("usage:./a.out f_name...\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r+");
    signed char ch;
		while((ch=fgetc(fp))!=-1)
		{
				if(ch>='a' && ch<='z')
				{
					ch=ch&~(1<<5);
					fseek(fp,-1,SEEK_CUR);
					fputc(ch,fp);
				}
				else if(ch>='A' && ch<='Z')
				{
					ch=ch|(1<<5);
					fseek(fp,-1,SEEK_CUR);
					fputc(ch,fp);
				}

		}

}


