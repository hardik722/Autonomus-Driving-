#include<stdio.h>
void main()
{
int num,pos,r,m;
printf("enter the num...\n");
scanf("%d",&num);
for(pos=7;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");
//////////////////////////
printf("enter rotaion...\n");
scanf("%d",&r);
///////////////////////////
while(r!=0)
{
m=num>>0&1;
num=num>>1;
if(m==1)
num=num|(1<<7);
else
num=num&~(1<<7);
r--;
}

//////////////////////////
for(pos=7;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");

}
