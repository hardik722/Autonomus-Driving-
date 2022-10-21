#include<stdio.h>
void main()
{
	float f=23.7;
	char *ch;
	int pos,i;
	ch=(char*)&f;
	ch=ch+3;
	for(i=4;i>0;i--)
	{
		for(pos=7;pos>=0;pos--)
		{
			printf("%d",*ch>>pos&1);
		}	
		ch=ch-1;
		
	}
	printf("\n");
}
