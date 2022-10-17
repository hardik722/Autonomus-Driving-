#include"header.h"
void* thread_1(void*);
void main()
{
pthread_t t1;
int num=100;
pthread_create(&t1,0,thread_1,"hello 100");
printf("in main thread..\n");
pthread_exit(0);

}
void* thread_1(void *p)
{
printf("in thread_1  %s\n",(char*)p);
}
