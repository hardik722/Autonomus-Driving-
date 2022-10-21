#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50},  b[5]={60,70,80,90,100};
int c[10],i,j,k;
for(i=0;i<5;i++)
{
c[i+i]=a[i];
c[2*i+1]=b[i];
}


/*for(i=0,j=0,k=0;k<10;i++,j++)
{
c[k]=a[i];
k++;
c[k]=b[j];
k++;
}
*/
//printf("\n-----------\n");

for(i=0;i<10;i++)
printf("%d ",c[i]);
printf("\n");

}
