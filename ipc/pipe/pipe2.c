#include"header.h"
struct st
{
int rollnum;
char name[10];
float f;
};
void main()
{
int p[2],q[2];
pipe(p);

if(fork())
{
struct st o1;

o1.rollnum=10;
strcpy(o1.name,"hello");
o1.f=23.45;
write(p[1],&o1,sizeof(o1));

}
else
{
struct st o2;
read(p[0],&o2,sizeof(o2));
printf("%d %s %f\n",o2.rollnum,o2.name,o2.f);




}
}
