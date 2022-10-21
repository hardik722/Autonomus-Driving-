#include<stdio.h>
int my_strlen(char *);
void main(int argc,char **argv)
{
int l;
if(argc!=2)
{
printf("usage: enter ./a.out string..\n");
printf("ex:./a.out abcd..\n");
return;
}

l=my_strlen(argv[1]);
printf("l=%d\n",l);
}
int my_strlen(char *p)
{
int i;
for(i=0;p[i];i++);
return i;
}
