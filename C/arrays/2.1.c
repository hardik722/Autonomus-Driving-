#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50} , b[5]={60,70,80,90,100};
int c[10],i,j;

for(i=0,j=0;i<5;i++)
{
c[j]=a[i];
j=j+2;
}

for(i=0,j=1;i<5;i++)
{
c[j]=b[i];
j=j+2;
}

for(i=0;i<10;i++)
printf("%d ",c[i]);
printf("\n");

}
