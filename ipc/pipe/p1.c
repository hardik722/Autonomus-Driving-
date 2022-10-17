#include"header.h"
void main()
{
	int p[2];
	if(pipe(p)<0)
		perror("pipe");


	if(fork()==0)
	{
		sleep(2);
		char s[10];
		bzero(s,sizeof(s));
		read(p[0],s,5);
		printf("child %s\n",s);
		sleep(4);
		bzero(s,sizeof(s));
		read(p[0],s,5);
		printf("after 5 sec %s\n",s);

	}
	else
	{

		char m[10];
		printf("enter data..\n");
		scanf("%[^\n]",m);
		write(p[1],m,strlen(m)+1);
		sleep(10);
	}


}
