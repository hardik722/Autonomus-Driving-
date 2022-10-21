#include<stdio.h>
void main()
{
	int i=1234,password,c=0;
l1:
	printf("enter password...\n");
	scanf("%d",&password);

	if(password==i)
		printf("correct password..\n");
	else 
	{
		c++;
		if(c<4)
		{
			printf("incorrect password..and try again...\n");
			if(c==3)
				printf("last chance...\n");

			goto l1;

		}



	}
	printf("try again latter...\n");

}
