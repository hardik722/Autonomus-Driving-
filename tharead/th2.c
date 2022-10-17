#include"header.h"
pthread_mutex_t mtx;
int cnt;
void* thread_1(void *p1)
{

	//pthread_mutex_lock(&mtx);													
	FILE *fp=fopen("data1","w");
	for(int i=201;i<211;i++)
	{
		fprintf(fp,"%d ",i);
		sleep(1);
	}
	fputc('\n',fp);
	fclose(fp);

pthread_exit("100");													
	//pthread_mutex_unlock(&mtx);
}
void* thread_2(void *p2)
{


	//pthread_mutex_lock(&mtx);
	FILE *fp=fopen("data1","a");
	for(int i=251;i<261;i++)
	{
		fprintf(fp,"%d ",i);
		sleep(1);
	}
	fputc('\n',fp);
	fclose(fp);		
	//pthread_mutex_unlock(&mtx);
pthread_exit("200");
}

void main()
{
	pthread_mutex_init(&mtx , 0);

	pthread_t t1,t2;
void *p1,*p2;
	pthread_create(&t1,0,thread_1,0);
	pthread_create(&t2,0,thread_2,0);
	pthread_join(t1,&p1);
printf("*p1=%s\n",(char*)p1);
	pthread_join(t2,&p2);
printf("*p2=%s\n",(char*)p2);
	pthread_exit(0);


}
