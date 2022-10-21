#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("usage:./a.out num1 + num2\n");
		return;
	}
	float n1,n2;
	n1=atoi(argv[1]);
	n2=atoi(argv[3]);
	switch(argv[2][0])
	{
		case '+':printf("n3=%g\n",n1+n2);break;
		case '-':printf("n3=%g\n",n1-n2);break;
		case '*':printf("n3=%g\n",n1*n2);break;
		case '/':printf("n3=%g\n",n1/n2);break;
		default:printf("wrong input...\n");
	}

}
