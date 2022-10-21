#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("usage:./a.out fname...\n");
		return;
	}
	FILE *fp,*ft;
	fp=fopen(argv[1],"r");  // open file in read mode..
	int fs,i=0,l,j;
	fseek(fp,0,SEEK_END);  // find file size..
	fs=ftell(fp);

	char *p,ch,t;
	p=malloc(fs+1);   // allocate dynamic mem..

	fseek(fp,0,SEEK_SET);   
	while((ch=fgetc(fp))!=-1)  // copy containt into dynamic memory..
	{
		p[i]=ch;
		i++;
	}
	p[i]='\0';

	for(i=0;p[i];i++);  // find the string length...(l)
	l=i;
	printf("l=%d\n",l);

	for(i=0,j=l-2;i<j;i++,j--)  // keep i in staring and j in last second because(like:m n o p \n '\0')...
	{                           // swaping that string..    
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}


	ft=fopen(argv[1],"w");  // reopen that file in write mode and put it into the file...
	fputs(p,ft);

}







