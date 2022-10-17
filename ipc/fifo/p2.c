#include"header.h"
void convert (char *p)
{
int i;
for(i=0;p[i];i++)
p[i]=p[i]&~(1<<5);
}
void main()
{


int fd1=open("f1",O_RDONLY);


char s[20];


read(fd1,s,sizeof(s));
printf("s=%s\n",s);

convert(s);
printf("after convert..\n");


int fd2=open("f2",O_WRONLY);

write(fd2,s,strlen(s)+1);




}
