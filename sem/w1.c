#include"header.h"
void main()
{
FILE *fd=fopen("data","a");
if(fd<0)
{
perror("fopen");
return;
}
fputc('\n',fd);
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

semctl(id,1,SETVAL,0);

semop(id,&v,1);

semctl(id,1,SETVAL,1);
printf("1 is start..\n");
int i;
for(i=0;i<10;i++)
{
fprintf(fd,"%d ",i);
sleep(2);
}

fprintf(fd,"   1 is complete..\n");
printf("process 1 complete\n");
semctl(id,1,SETVAL,0);

}

