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


FILE *fd=fopen("data1","w");
if(fd<0)
{
perror("fopen");
return;
}

struct sembuf v1;
v1.sem_num=0;
v1.sem_op=0;
v1.sem_flg=0;
semctl(id,0,GETVAL);
int val=semctl(id,0,SETVAL,0);
printf("val=%d\n",val);

char str[20];
printf("enter string ..\n");
scanf("%[^\n]",str);

printf("before ..\n");

semop(id,&v1,1);
semctl(id,0,SETVAL,10);
printf("writing starts..\n");
fprintf(fd,"%s\n",str);
sleep(10);
printf("writing end..\n");

semctl(id,0,SETVAL,0);

fclose(fd);




















}
