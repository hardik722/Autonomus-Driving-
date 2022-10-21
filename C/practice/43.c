#include<stdio.h>
#define DIVISION_WITH_TEN 10
#define MIN_NUM 0
void main()
{
	int num;
	int sum;
	int index;
	int last_digit;
	int dummy_var;
	printf("enter any number...\n");
	scanf("%d",&num);
	for(sum=MIN_NUM,dummy_var=num;num;num=num/DIVISION_WITH_TEN)
	{
		last_digit=num % DIVISION_WITH_TEN;
		sum=sum*DIVISION_WITH_TEN+last_digit;
	}
	if(sum==dummy_var)
	{
		printf("this number is palendram number...\n");
	}
	else
	{
		printf("this number is not palendram number...\n");
	}
}
