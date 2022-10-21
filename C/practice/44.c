#include<stdio.h>
#define size 20
#define MIN_NUM 0
#define MAX_NUM 1
char* reverse_string(char*);
void main()
{
	char string[size];
	printf("enter string..\n");
	scanf("%s",string);
	char *catch=reverse_string(string);
	printf("reverse string=%s\n",catch);
}

char* reverse_string(char *temp_buff)
{
	int length;
	int biggin_index;
	int last_index;
	char temp_BUFF;
	for(biggin_index=MIN_NUM;temp_buff[biggin_index];biggin_index++);
	length=biggin_index;

	for(biggin_index=MIN_NUM,last_index=length-MAX_NUM;biggin_index<last_index;biggin_index++,last_index--)
	{
		temp_BUFF=temp_buff[biggin_index];
		temp_buff[biggin_index]=temp_buff[last_index];
		temp_buff[last_index]=temp_BUFF;
	}
	return temp_buff;
}



