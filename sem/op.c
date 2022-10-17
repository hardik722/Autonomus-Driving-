#include"header.h"
void main()
{

	int id;
	id=semget(7,4,IPC_CREAT|0644);
	if(id<0)
	{
		perror("semget");
		return;
	}
	printf("id=%d\n",id);

	/******************************************/
	struct sembuf v;
	v.sem_num=1;
	v.sem_op=0; //-ve ,0,+ve waiting for 0
	v.sem_flg=0;

	printf("before..\n");
	semop(id,&v,1);
	printf("critical section..\n");

}
