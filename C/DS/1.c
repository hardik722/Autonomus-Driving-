#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	struct st *next;
};
typedef struct st ST;
void add_bigin(ST **);
void print(ST *);
int count(ST *);
void save(ST *);
void delete_bigin(ST **);
void read_file(ST **);
void print_rec(ST *);
void rev_print_rec(ST *);
void print_aop(ST *);
void print_aop_rev(ST *);
void delete_end(ST **);
void add_end(ST **);
void delete(ST **);
void add_middle(ST **);
void push_front(ST **);
void delete_n_node(ST**);
void main()
{
	ST *hptr=0;
	int op,c=0,num=0;	
	while(1)
	{
		printf("enter option..1)add_bigin 2)print 3)count 4)save 5)delete_bigin 6)read_file 7)print_rec 8)rev_print_rec 9)print_aop 0)exit.\n");
		printf("10)print_aop_rev 11)add_end node 12)delete_end 13)delete 14)add_middle 15)push_front 16)delete_n_node..\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:add_bigin(&hptr); break;
			case 2:print(hptr); break;
			case 3:c=count(hptr); 
				   printf("total no of node = %d\n",c);
				   break;
			case 4:save(hptr); break;
			case 5:delete_bigin(&hptr); break;
			case 6:read_file(&hptr); break;
			case 7:print_rec(hptr); printf("\n"); break;
			case 0:exit(0);
			case 8:rev_print_rec(hptr); printf("\n"); break;
			case 9:print_aop(hptr); break;
			case 10:print_aop_rev(hptr); break;
			case 11:add_end(&hptr); break;
			case 12:delete_end(&hptr); break;
			case 13:delete(&hptr); break;
			case 14:add_middle(&hptr); break;
			case 15:push_front(&hptr); break;
			case 16:delete_n_node(&hptr); break;
		}
	}
}
/*void delete_n_node_bigin(ST **p)
{
int c=count(*p);
*/
void delete_n_node_end(ST **p)
{	
	int c=count(*p),n;
	printf("enter node num from last...\n");
	scanf("%d",&n);
	c=c-n;
	int i;
	ST *temp,*del;
	temp=*p;
	if(c==0)
	{
		del=temp;
		temp=temp->next;
		*p=temp;
		free(del);
	}
	else
	{
		for(i=0;i<c;i++)
		{
			del=temp;
			temp=temp->next;
		}
		del->next=temp->next;
		free(temp);
	}
}

void push_front(ST **head)
{
	ST *temp,*del;
	temp=*head;
	while(temp->next)
	{
		del=temp;
		temp=temp->next;
	}
	del->next=0;
	temp->next=*head;
	*head=temp;
}
void add_middle(ST **p)
{
	ST *new,*temp;
	new=malloc(sizeof(ST));
	printf("enter rollno...\n");
	scanf("%d",&new->rollno);
	if(*p==0 || (*p)->rollno>new->rollno)
	{
		new->next=*p;
		*p=new;
	}
	else
	{
		temp=*p;
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

void delete(ST **ptr)
{
	ST *temp,*del;
	temp=*ptr;
	int num;
	printf("enter num...\n");
	scanf("%d",&num);

	if(temp->rollno==num)
	{
		del=temp;
		*ptr=temp->next;
		free(del);
	}
	else
	{
		while(temp->next->rollno!=num)
			temp=temp->next;
		if(temp->next->next!=0)
		{
			del=temp->next;
			temp->next=del->next;
			free(del);
		}
		else
		{
			del=temp->next;
			temp->next=0;
			free(del);
		}
	}
}

void delete_end(ST **ptr)
{
	ST *temp,*del;
	temp=*ptr;
	if(temp->next)
	{
		while((temp->next->next)!=0)
			temp=temp->next;
		del=temp->next;
		temp->next=0;
		free(del);
	}
	else
	{
		del=*ptr;
		*ptr=0;
		free(del);
	}
}
void add_end(ST **ptr)
{
	ST *new,*temp;
	new=malloc(sizeof(ST));
	printf("enter rollno...\n");
	scanf("%d",&new->rollno);
	if(*ptr==0)
	{
		*ptr=new;
		new->next=0;
	}
	else
	{
		temp=*ptr;
		while(temp->next)
			temp=temp->next;
		temp->next=new;
		new->next=0;
	}
}


void print_aop_rev(ST *p)
{
	int c=count(p),i=0;
	ST **t;
	t=malloc(sizeof(ST*)*c);
	while(p)
	{
		t[i]=p;
		i++;
		p=p->next;
	}
	for(i=c-1;i>=0;i--)
	{
		printf("%d ",t[i]->rollno);
	}
	printf("\n");
}

void print_aop(ST *p)
{
	int c=count(p),i=0;
	ST **t;
	t=malloc(sizeof(ST*)*c);
	while(p)
	{
		t[i]=p;
		i++;
		p=p->next;
	}
	for(i=0;i<c;i++)
	{
		printf("%d ",t[i]->rollno);
	}
	printf("\n");
}

void rev_print_rec(ST *p)
{
	if(p)
	{
		rev_print_rec(p->next);  
		printf("%d ",p->rollno);
	} 
} 
void print_rec(ST *p)
{
	if(p)
	{
		printf("%d ",p->rollno);
		print_rec(p->next);
	}
}


void read_file(ST **p)
{
	*p=0;
	FILE *fp;
	fp=fopen("data","r");
	ST v,*temp;
	while(fscanf(fp,"%d",&v.rollno)!=-1)
	{
		ST *new=malloc(sizeof(ST));
		new->rollno=v.rollno;
		if(*p==0)
		{
			new->next=0;
			*p=new;
			temp=new;
		}
		else
		{
			new->next=0;
			temp->next=new;
			temp=new;
		}
	}
}

void delete_bigin(ST **p)
{
	if(*p==0)
	{
		printf("no data for delete at bigin...\n");
		return ;
	}
	ST *del;
	del=*p;
	*p=(*p)->next;
	free(del);
}

void save(ST *p)
{
	FILE *fp;
	fp=fopen("data","w");
	while(p)
	{
		fprintf(fp,"%d ",p->rollno);
		p=p->next;
	}
	rewind(fp);

}

int count(ST *p)
{
	int c1=0;
	while(p)
	{
		c1++;
		p=p->next;
	}
	return c1;
}

void print(ST *p)
{
	if(p==0)
	{
		printf("node not present ...\n");
		return;
	}
	while((p->next)!=0)
	{
		printf("%d ",p->rollno);
		p=p->next;
	}
	printf("%d\n",p->rollno);
}


void add_bigin(ST **ptr)
{
	ST *new=malloc(sizeof(ST));
	printf("enter rollno..\n");
	scanf("%d",&new->rollno);
	if(*ptr==0)
	{
		new->next=0;
		*ptr=new;
	}
	else
	{
		new->next=*ptr;
		*ptr=new;
	}
}


