#include"header.h"
struct msgbuf
{
	long mtype;
	char data[20];
};
void main(int argc,char** argv)
{
	if(argc<2)
	{
		printf("USAGE : ./snd mtype\n");
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

	if(msgrcv(id,&v,sizeof(v),atoi(argv[1]),IPC_NOWAIT)<0)
	{
		perror("msgrcv");
		return;
	}
	printf("v.data = %s\n",v.data);
}
