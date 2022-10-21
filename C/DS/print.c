#include"header.h"
////////////////normal print /////////////////////
void print(ST *p)
{
	while(p)
	{
		printf("%d %s %f\n",p->rollno,p->name,p->t_marks);
		p=p->next;
	}
}

///////////// fwd print using recursion ///////////////
void fwd_print_rec(ST *p)
{
	if(p)
	{
		printf("%d %s %f\n",p->rollno,p->name,p->t_marks);
		fwd_print_rec(p->next);
	}
}

////////////// rev_print_rec ////////////////////
void rev_print_rec(ST *p)
{
	if(p)
	{
		rev_print_rec(p->next);
		printf("%d %s %f\n",p->rollno,p->name,p->t_marks);
	}
}

////////////////  fwd_print_aop //////////////////
void fwd_print_aop(ST *p)
{
	int c,i;
	c=count(p);

	ST **q;
	q=malloc(sizeof(ST*)*c);

	for(i=0;i<c;i++)
	{
		q[i]=p;
		printf("%d %s %f\n",q[i]->rollno,q[i]->name,q[i]->t_marks);
		p=p->next;
	}
}

//////////////reaverse print using aop /////////////////
void rev_print_aop(ST *p)
{
	int c,i;
	c=count(p);
	ST **q;
	q=malloc(sizeof(ST*)*c);

	for(i=0;i<c;i++)
	{
		q[i]=p;
		p=p->next;
	}

	for(i=c-1;i>=0;i--)
		printf("%d %s %f\n",q[i]->rollno,q[i]->name,q[i]->t_marks);

}

////////// reverse printing using temp variable ////////////////
void rev_print_temp(ST *p)
{
	int c,i,j;
	c=count(p);
	ST *temp;
	for(i=0;i<c;i++)
	{
		temp=p;
		for(j=0;j<c-1-i;j++)
			temp=temp->next;
		printf("%d %s %f\n",temp->rollno,temp->name,temp->t_marks);
	}
}

