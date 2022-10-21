#include"header.h"
//////////////// save data into file //////////////
void save(ST *p)
{
	FILE *fp;
	fp=fopen("data","w");
	while(p)
	{
		fprintf(fp,"%d %s %f\n",p->rollno,p->name,p->t_marks);
		p=p->next;
	}
}

