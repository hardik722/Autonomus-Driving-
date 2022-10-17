#include"header.h"
void* thread_1(void *p1)
{
    printf("thread_1 \n");
}

void* thread_2(void *p1)
{
    printf("thread_2 \n");
}

void main()
{
    pthread_t t1,t2;

    printf("in main..\n");
    pthread_create(&t1,0,thread_1,0);
    pthread_create(&t2,0,thread_2,0);
    pthread_exit(0);


}
