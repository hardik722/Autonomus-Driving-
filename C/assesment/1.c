// swap 1st and 3rd byte of integer using char pointer...
#include<stdio.h>
void main()
{
	int i=12,temp,temp1,pos;
	char *cp;
	cp=(char *)&i;
	for(pos=31;pos>=0;pos--)
		printf("%d",i>>pos&1);
	printf("\n");
	temp=*cp;
	cp=cp+2;
	temp1=*cp;
	*cp=temp;
	cp=cp-2;
	*cp=temp1;
	for(pos=31;pos>=0;pos--)
		printf("%d",i>>pos&1);
	printf("\n");
}
