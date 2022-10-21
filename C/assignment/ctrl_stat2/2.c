#include<stdio.h>
void main()
{
	int i=1234,password,c=0;
l1:
	printf("enter the password= ");
	scanf("%d",&password);
	if(password==i)
	{
		printf("correct password\n");
	}
	else 
	{
		printf("wrong password\n");
		c++;

		if(c<4)
		{
			if(c==3)
				printf("enter correct password,for last chance\n");
			goto l1;
		}
		else
			printf("try again later\n");
	}	   	  	 
	printf("thank you\n");

}


