#include"header.h"

void main()
{

printf("before open..\n");
int fd1=open("f1",O_WRONLY);
printf("after open..\n");

char s[20];

printf("enter string..\n");
scanf("%s",s);

write(fd1,s,strlen(s)+1);

char s1[20];

int fd2=open("f2",O_RDONLY);

read(fd2,s1,sizeof(s1));

printf("converted=%s\n",s1);

}
