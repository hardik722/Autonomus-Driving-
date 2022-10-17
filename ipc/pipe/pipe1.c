#include"header.h"
void convert(char *p)
{
int i;
for(i=0;i<20;i++)
p[i]=p[i]&~(1<<5);
}
void main()
{
int p[2],q[2];
pipe(p);
pipe(q);

if(fork())
{
char s[20],s2[20];
printf("write end %d read %d\n",p[1],q[1]);
printf("enter string data..\n");
scanf("%s",s);
write(p[1],s,strlen(s)+1);
read(q[0],s2,sizeof(s));
printf("in p read converted data %s\n",s2);
}
else
{
char s1[20];
printf("read end %d write %d\n",p[0],q[0]);
read(p[0],s1,sizeof(s1));
printf("before convert - %s\n",s1);
convert(s1);
printf("after convert -%s\n",s1);
write(q[1],s1,strlen(s1)+1);
}
printf("end..\n");
}

