#include"header.h"
void main()
{
	ST *hptr=0;
	char op;
	int c1;
	do
	{
		add_end(&hptr);
		printf("enter op->y/Y for add new node...\n");
		scanf(" %c",&op);
	}
	while(op=='y'||op=='Y');
	
/*	printf("enter op->'p' for printing...\nenter op->'c' for count node..\n");
	scanf(" %c",&op);
	
	if(op=='p')*/
		print(hptr);
	
//	if(op=='c')
//	{
		c1=count(hptr);
		printf("no of node..=%d\n",c1);
//	}
}

}

void print(ST *p)
{
	while(p)
	{
		printf("%d %s %f\n",p->rollno,p->name,p->t_marks);
		p=p->next;
	}
}
int count(ST *p)
{
	int c=1;
	while(p)
	{
		p=p->next;
		if(p!=0)
			c++;
	}
	return c;
}


