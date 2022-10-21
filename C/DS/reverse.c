#include"header.h"
#include<string.h>
void rev_data(ST *ptr)
{
	int c=count(ptr),i,j;
	ST **p,*q=ptr,o1;
	p=malloc(sizeof(ST*)*c);
	for(i=0;i<c;i++)
	{
		p[i]=q;
		q=q->next;
	}
	for(i=0,j=c-1;i<j;i++,j--)
	{
		o1.rollno=p[i]->rollno;
		strcpy(o1.name,p[i]->name);
		o1.t_marks=p[i]->t_marks;

		p[i]->rollno=p[j]->rollno;
		strcpy(p[i]->name,p[j]->name);
		p[i]->t_marks=p[j]->t_marks;

		p[j]->rollno=o1.rollno;
		strcpy(p[j]->name,o1.name);
		p[j]->t_marks=o1.t_marks;
	}
}
