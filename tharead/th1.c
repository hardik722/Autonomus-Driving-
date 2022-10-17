#include"header.h"
void* thread_1(void *p)
{
printf("thread_1 hello..\n");
sleep(5);
printf("thread_1 byee..\n");
int num=10;
pthread_exit("51367");
}

void main()
{
pthread_t t1;
void *p1;
pthread_create(&t1,0,thread_1,0);

printf("in main..\n");
pthread_join(t1,&p1);
printf("in main byye..== %s\n",(char*)p1);
pthread_exit(0);


}
