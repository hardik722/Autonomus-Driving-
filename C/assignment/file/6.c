#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=2)
{
		printf("usage: ./a.out f_name...\n");
	    return;
}
	signed int fs;
	FILE *fp;
	fp=fopen(argv[1],"r"); 
	fseek(fp,0,SEEK_END); // find file size...
	fs=ftell(fp);

	fseek(fp,0,SEEK_SET); // rewind f_pointer...

	signed char *p,ch,t;
	p=malloc(fs+1);         // allocate dynamic mem...
	signed int i=0,j,k,c;
	while((ch=fgetc(fp))!=-1)  // copy containt into dynamic ...
	{
		p[i]=ch;
		i++;
	}
	p[i]='\0';

	for(i=0,c=-1;p[i];i++)  
	{
		c++;                       //increment counter untill space or new line...
		if(p[i]==' '||p[i]=='\n')
		{
			for(j=i-c,k=i-1;j<k;j++,k--)   // swaping that word by taaking tamp. char variable..
			{
				t=p[j];
				p[j]=p[k];
				p[k]=t;
			}
			c=-1;
		}

	}
	rewind(fp);
	fp=fopen(argv[1],"w");  // reopen that file write mode...
	for(i=0;p[i];i++)       
		fputc(p[i],fp);
}














