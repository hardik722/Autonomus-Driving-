#include"header.h"
void main()
{
	ST *hptr=0;
	int op;
	do
	{
		add_middle(&hptr);
		printf("op===1)add_begin.2)print...18)exit..\n");
		scanf("%d",&op);
	}	
	while(op==1);
	print(hptr);
}
void print(ST *p)
{
ST *temp;
temp=p;
	do
	{
		printf("%d %s %f\n",p->rollno,p->name,p->t_marks);
		p=p->next;
	}
	while(p!=temp);
}


void add_bigin(ST **ptr)
{
	ST *new;
    static ST *temp;
	new=malloc(sizeof(ST));
	printf("enter rollno.. name and marks...\n");
	scanf("%d%s%f",&new->rollno,new->name,&new->t_marks);
	if(*ptr==0)
	{
		*ptr=new;
		new->next=new;
		temp=new;
	}
	else
	{
		new->next=*ptr;
		temp->next=new;
		*ptr=new;
	}
}

void add_end(ST **ptr)
{
static ST *temp;
ST *new;
new=malloc(sizeof(ST));
printf("enter rollno...\n");
scanf("%d",&new->rollno);
printf("enter name...\n");
scanf("%s",new->name);
printf("enter t_marks...\n");
scanf("%f",&new->t_marks);
if(*ptr==0)
{
new->next=new;
*ptr=new;
temp=new;
}
else
{
temp->next=new;
temp=new;
temp->next=*ptr;
}
}

void add_middle(ST **ptr)
{
ST *new;
new=malloc(sizeof(ST));
printf("enter rollno...\n");
scanf("%d",&new->rollno);
printf("enter name...\n");
scanf("%s",new->name);
printf("enter t_marks...\n");
scanf("%f",&new->t_marks);
if(*ptr==0)
{
*ptr=new;
new->next=*ptr;
}
else if( 
