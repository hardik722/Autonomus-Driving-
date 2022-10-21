#include"header.h"
////////////// count node  ////////////////
int count(ST *p)
{
	int c=0;
	while(p)
	{
		c++;
		p=p->next;
	}
	return c;
}

