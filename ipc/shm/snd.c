#include"header.h"
void main(int argc,char **argv)
{
if(argc<2)
{
printf("USAGE : ./snd data \n");
return;
}
int id;
id=shmget(6,50,IPC_CREAT|0664);
if(id<0)
{
perror("shmget");
return;
}
printf("id=%d\n",id);

char *p;
p=shmat(id, 0,O_RDONLY);
//p=argv[1];
strcpy(p,argv[1]);



}
