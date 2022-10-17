#include"header.h"
struct msgbuf
{
long mtype;
char data[20];
};
void main(int argc,char** argv)
{
if(argc<3)
{
printf("USAGE : ./snd mtype data\n");
return;
}
int id=msgget(5,IPC_CREAT|0664);

if(id<0)
{
perror("msgget");
return;
}

printf("id=%d\n",id);

struct msgbuf v;

v.mtype=atoi(argv[1]);
strcpy(v.data,argv[2]);

msgsnd(id,&v,strlen(argv[2])+1,0);
perror("msgsnd");

}
