#include<stdio.h>
#include<stdlib.h>
void main(int argc,char** argv)
{
	if(argc!=4)
	{
		printf("usage:./a.out fname.char replacechar..\n");
		return;
	}
	FILE *fp=fopen(argv[1],"r");
	char ch;
	int c=0;
	while((ch=fgetc(fp))!=-1)
		c++;
	printf("file length=%d\n",c);

	char *p=calloc(c,1);
	rewind(fp);
	int i;
	for(i=0;i<c;i++)
	{
		ch=fgetc(fp);
		p[i]=ch;
	}
	p[i]='\0';
	printf("p=%s",p);

	for(i=0;p[i];i++)
	{
		if(p[i]==argv[2][0])
			p[i]=argv[3][0];
	}
	
	printf("%s",p);
	
	fp=fopen(argv[1],"w");
	
	for(i=0;p[i];i++)
		fputc(p[i],fp);
}





