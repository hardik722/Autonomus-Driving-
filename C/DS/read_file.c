#include"header.h"
//////////////////read data from the file ///////////////
void read_data(ST **ptr)
{
	FILE *fp;
	fp=fopen("data","r");
	ST *new,v,*temp;
	new=malloc(sizeof(ST));
	while(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->t_marks)!=-1)
	{
		//	new=malloc(sizeof(ST));
		//	*new=v;
		if(*ptr==0)
		{
			new->next=0;
			*ptr=new;
			temp=new; 
		}
		else
		{
			new->next=0;
			temp->next=new;
			temp=new;
		}
		new=malloc(sizeof(ST));
	}
}	

