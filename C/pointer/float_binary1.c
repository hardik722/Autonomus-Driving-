#include<stdio.h>
void main()
{
	float f=23.7;
	char *cp=(char*)&f;
	int pos,i;
        cp=cp+3;
	for(i=4;i>0;i--)
	{
		for(pos=7;pos>=0;pos--)
		{
			printf("%d",*cp>>pos&1);
		}

        cp=cp-1;
	
	}
printf("\n");
}
