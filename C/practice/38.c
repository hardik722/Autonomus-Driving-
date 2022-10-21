#include<stdio.h>
struct st
{
	int rollno;
	char name[10];
	float t_marks;
};
typedef struct st ST;
ST fun1(void);
void main()
{
	ST o1=fun1();
	scanf("%d%s%g",&o1.rollno,o1.name,&o1.t_marks);
	printf("rollno=%d name=%s t_marks=%g\n",o1.rollno,o1.name,o1.t_marks);
}
ST fun1(void)
{
	ST o2;
	return o2;
}
