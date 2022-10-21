#include<stdio.h>
void main()
/*{
int i=260;
int *ip;
char *cp;
ip=&i;
printf("ip=%p *ip=%d\n",ip,*ip);
cp=(char*)&i;
printf("cp=%p *cp=%d\n",cp,*cp);

}*/
{
int i=260;
int *p1;
char *p2;
p1=&i;
printf("p1=%p *p1=%d\n",p1,*p1);
p2=(char*)&i;
printf("p2=%p *p2=%d\n",p2,*p2);
}
