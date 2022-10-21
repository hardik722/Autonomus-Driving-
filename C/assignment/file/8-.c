#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
if(argc!=4)
{
printf("usage:./a.out fname old_word new_word...\n");
return;
}
FILE *fp,*ft;
fp=fopen(argv[1],"r");
ft=fopen("t_file","w");
int l;
char s[20],ch;
while(fscanf(fp,"%s",s)!=-1)
{

}


}
