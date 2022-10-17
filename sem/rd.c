#include"header.h"
void main()
{

int id=semget(8,3,IPC_CREAT|0746);
if(id<0)
{
perror("semget");
return;
}
printf("id=%d\n",id);


FILE *fd=fopen("data1","r");
if(fd<0)
{
perror("fopen");
return;
}

struct sembuf v1;
v1.sem_num=0;
v1.sem_op=0;
v1.sem_flg=0;

char str[20];


printf("before..\n");

semop(id,&v1,1);
printf("reading starts..\n");
fscanf(fd,"%[^\n]",str);
sleep(10);
printf("str=%s\n",str);
semctl(id,0,SETVAL,0);
fclose(fd);
}




