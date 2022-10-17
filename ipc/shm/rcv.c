#include"header.h"
void main()
{
int id;
id=shmget(6,50,IPC_CREAT|0664);
if(id<0)
{
perror("shmget");
return;
}
printf("id=%d\n",id);

char *s;
s=shmat(id, 0,0);

printf("data=%s\n",s);

shmctl(id,IPC_RMID,0);


}
