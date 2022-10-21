#include<stdio.h>
void main(int argc,char**argv)
{
	if(argc!=2)
	{
		printf("usage:./a.out fname...\n");
		return;
	}
	FILE *fp;

	fp=fopen(argv[1],"r");

	if(fp==0)
	{
		printf("file does not exist...\n");
		return;
	}
/////////////////////////////////////////////
	int c=0,c1=0;
	char ch;

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
	printf("bigest line len=%d\n",c1);
///////////////////////////////////////////////	
	char s[c1+1];
	int n1,n2,n3;

	rewind(fp);
	
	while(fgets(s,c1+1,fp)!=0)
    c++;
	
	n1=c;
	c=0;
///////////////////////////////////////////////
	rewind(fp);
	
	while(fscanf(fp,"%s",s)!=-1)
		c++;
	
	n2=c;
	c=0;
	rewind(fp);
///////////////////////////////////////////////
    	
	while((ch=fgetc(fp))!=-1)
		c++;
	
	n3=c;
	c=0;
	rewind(fp);
///////////////////////////////////////////////
	printf("  %d %d %d %s\n",n1,n2,n3,argv[1]);
}
