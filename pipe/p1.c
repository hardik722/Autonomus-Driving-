#include"header.h"
void main()
{
	int p[2];
	
	if(pipe(p)<0)
		perror("pipe");


	if(fork())
	{
	    printf("perent execution\n");
	    char m[20];
		printf("enter data..\n");
		scanf("%[^\n]",m);
		write(p[1],m,strlen(m)+1);		
	}
	else
	{
	    printf("child execution\n");
		char s[20];
		bzero(s,sizeof(s));
		read(p[0],s,sizeof(s));
		printf("reading by child : %s\n",s);
	}


}
