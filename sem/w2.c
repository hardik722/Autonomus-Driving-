#include"header.h"
void main()
{
FILE *fd=fopen("data","a");
if(fd<0)
{
perror("fopen");
return;
}

int id=semget(5,3,IPC_CREAT|0644);
if(id<0)
{
perror("semget");
return;
}

struct sembuf v;
v.sem_num=1;
v.sem_op=0;
v.sem_flg=0;


printf("before..\n");
semop(id,&v,1);

semctl(id,1,SETVAL,1);
printf("2 is start..\n");
int i;
for(i=11;i<20;i++)
{
fprintf(fd,"%d ",i);
sleep(2);
}

fprintf(fd,"   process 2 \n");
printf("process 2 complete\n");
semctl(id,1,SETVAL,0);
fclose(fd);
}

