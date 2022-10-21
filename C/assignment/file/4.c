#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("usage: ./a.out fname...\n");
		return;
	}
	
	FILE *fp;
	fp=fopen(argv[1],"r+");
int fs;	
fseek(fp,0,SEEK_END); // find size of file...
fs=ftell(fp);

fseek(fp,0,SEEK_SET); // reset f_pointer... 

char *p,ch;
p=malloc(fs+1); // allocate dynamic mem...

int i=0;

while((ch=fgetc(fp))!=-1) // putting file containt into dynamic mem..one by one...
{
p[i]=ch;
i++;
}
p[i]='\0';

p[0]=p[0]&~(1<<5);        //first char make as a capital...   

for(i=1;p[i];i++)        
{
if(p[i]==' ' || p[i]=='\n') // if space and new line will come than next char make as a capitalize..
{
p[i+1]=p[i+1]&~(1<<5);
}
}

rewind(fp);

fp=fopen(argv[1],"w");  // reopen the file in write mode...

fputs(p,fp);
}







