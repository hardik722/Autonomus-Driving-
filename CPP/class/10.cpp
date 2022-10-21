#include<iostream>
using namespace std;
class A
{
int real;
int img;
public:
void set_data(int a,int b)
{
real=a;
img=b;
}
void get_data(void)
{
if(img<0)
printf("%d%dj\n",real,img);
else
printf("%d+%dj\n",real,img);
}
class A addition1(class A obj1)
{
static class A temp;
temp.real=this->real+obj1.real;
temp.img=this->img+obj1.img;
return temp;
}
};
int main()
{
class A c1,c2,c3;
c1.set_data(10,-20);
c2.set_data(20,50);
c3=c1.addition1(c2);
c1.get_data();
c2.get_data();
printf("result...\n");
c3.get_data();
}
