#include<stdio.h>
void print_bin(int);
void main()
{
int num;
printf("enter num=");
scanf("%d",&num);

print_bin(num);

}
void print_bin(int num)
{
 int pos;
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);

printf("\n");
}


