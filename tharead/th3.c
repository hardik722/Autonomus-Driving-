#include"header.h"


void* write_thread(void *p1)
{
printf("write thread id=%d\n",*(int*)p1);

FILE *fp=fopen("data","w");

struct sembuf v1;
v1.sem_num=1;
v1.sem_op=0;
v1.sem_flg=0;

semop(*(int*)p1,&v1,1);
semctl(*(int*)p1,1,SETVAL,10);
for(int i=20;i<40;i++)
{
fprintf(fp,"%d ",i);
sleep(1);
}
fclose(fp);
semctl(*(int*)p1,1,SETVAL,0);
int val=semctl(*(int*)p1,1,GETVAL);
printf("after write val=%d\n",val);
pthread_exit(0);
}




void* read_thread(void *p2)
{
int val=semctl(*(int*)p2,1,GETVAL);
printf("before read val=%d\n",val);

FILE *fd=fopen("data","r");

struct sembuf v2;
v2.sem_num=1;
v2.sem_op=0;
v2.sem_flg=0;

int num;

semop(*(int*)p2,&v2,1);
for(int i=20;i<40;i++,sleep(1))
{
fscanf(fd,"%d",&num);
printf("%d ",num);
}
printf("\n");

semctl(*(int*)p2,1,SETVAL,0);
val=semctl(*(int*)p2,1,GETVAL);
printf("after read val=%d\n",val);
pthread_exit(0);
}



void main()
{
pthread_t t1,t2;

int id=semget(4,3,IPC_CREAT|0644);
if(id<0)
{
perror("id");
return;
}
printf("id=%d\n",id);
pthread_create(&t1,0,write_thread,&id);
pthread_create(&t2,0,read_thread,&id);

pthread_exit(0);

}
