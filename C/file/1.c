#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("garden_176_144_qcif_444.yuv","r");
	fseek(fp,0,SEEK_END);

	signed int l=ftell(fp);
	rewind(fp);

	unsigned char ch,*p1;	
	p1=calloc(l,1);
	int i=0;
for(i=0;i<l;i++)
{
p1[i]=fgetc(fp);
printf("%d ",p1[i]);
}
	printf("l1=%d i=%d\n",l,i);	
}
