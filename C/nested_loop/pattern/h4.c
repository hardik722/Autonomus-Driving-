//13.
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		k=0;		
		for(j=1;j<=9;j++)
		{  
		k=j;
	    if(j>5)
		k=10-j;	
	
			if(j<i+1 || j>9-i) 
				printf("%d",k);
			else
				printf(" ");
		}
		printf("\n");
	}
}
