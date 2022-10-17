#include"header.h"
void main()
{
	int p[2];
	pipe(p);
	
	if(fork())
	{
	int a[5],i;
	printf("write end %d\n",p[1]);
	printf("enter array...\n");
	//for(i=0;i<5;i++)
	//scanf("%d",&a[i]);
	//write(p[1],a,sizeof(a));	
	}
	else
	{
	int b[5],j;
	printf("read end %d\n",p[0]);
	read(p[0],b,sizeof(b));
	printf("after reading..\n");
	for(j=0;j<5;j++)
	printf("%d ",b[j]);
	}
	
	printf("end..\n");
}
