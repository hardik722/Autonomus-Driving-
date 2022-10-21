#include<stdio.h>
void main()
{
int i,j,a[6],ele,t;
/////////////////////////////////
printf("enter ele...\n");
ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
scanf("%d",&a[i]);
/////////////////////////////////
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n------------\n");
/////////////////////////////////
for(i=0,j=1;i<ele-1;i=i+2,j=j+2)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
/////////////////////////////////
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

}

