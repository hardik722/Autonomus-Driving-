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
int id=semget(6,3,IPC_CREAT|0644);
if(id<0)
{
perror("semget");
return;
}

struct sembuf v;
v.sem_num=2;
v.sem_op=0;
v.sem_flg=0;




printf("1 is start..\n");
int i,val;
for(i=11;i<20;i++)
{
semop(id,&v,1);
semctl(id,1,SETVAL,1);
fprintf(fd,"%d ",i);
semctl(id,2,SETVAL,1);
semctl(id,1,SETVAL,0);

}

printf("1 is complete..\n");


}

