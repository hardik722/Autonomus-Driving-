/*
*
*
*/
#include<stdio.h>
#define MAX_NUM 10
#define MIN_NUM 0
void print_fun(int);
void main()
{
	int index=MAX_NUM;
	print_fun(index);
}
void print_fun(int index_1)
{
	if(index_1>MIN_NUM)
	{
		printf("hello world...\n");
		index_1--;
		print_fun(index_1);
	}
}
