#include"header.h"
void add_bigin(ST **ptr)
{
	ST *new;
	new=malloc(sizeof(ST));

	printf("enter rollno...enter name...enter marks...\n");
	scanf("%d%s%f",&new->rollno,new->name,&new->t_marks);

	new->next=*ptr;
	*ptr=new; 
}
void add_end(ST **ptr)
{
	ST *new;
	static ST *temp;
	new=malloc(sizeof(ST));

	printf("enter rollno...enter name...enter marks...\n");
	scanf("%d%s%f",&new->rollno,new->name,&new->t_marks);
	new->next=0;

	if(*ptr==0)
	{
		new->next=0;
		*ptr=new;
	}
	else
	{
		temp=*ptr;
		while(temp->next)
			temp=temp->next;
		temp->next=new;
	}
}

////////////////// add middle logic ////////////////

void add_middle(ST **ptr)
{
	ST *new,*temp;
	new=malloc(sizeof(ST));
l1:	printf("enter rollno..\n");
	scanf("%d",&new->rollno);
	temp=*ptr;
	printf("enter name...\n");
	scanf("%s",new->name);
	printf("enter t_marks...\n");
	scanf("%f",&new->t_marks);
	new->next=0;
	if(*ptr==0|| new->rollno<(*ptr)->rollno)
	{
		new->next=*ptr;
		*ptr=new;
	}
	else
	{
		temp=*ptr;
		while(temp)
		{
			if(temp->next==0 || temp->next->rollno>new->rollno)
			{
				new->next=temp->next;
				temp->next=new;
				break;
			}
			temp=temp->next;  
		}
	}
}
