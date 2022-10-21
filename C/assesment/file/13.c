#inc65lude<stdio.h>
typedef struct one
{
	int rollno;
	char name[10];
	float t_marks;
}ST;
void main(int argc,char** argv)
{
	if(argc!=2)
	{
		printf("usage:./a.out fname..\n");
		return;
	}
	
	ST o1;
	printf("enter struct member...\n");
	scanf("%d%s%f",&o1.rollno,o1.name,&o1.t_marks);
	
	FILE *fp;
	
	fp=fopen(argv[1],"w+");
	fprintf(fp,"%d %s %f\n",o1.rollno,o1.name,o1.t_marks);
	rewind(fp);
	
	fscanf(fp,"%d%s%f",&o1.rollno,o1.name,&o1.t_marks);
	printf("data are..\n");
	
	printf("%d %s %f\n",o1.rollno,o1.name,o1.t_marks);
}

