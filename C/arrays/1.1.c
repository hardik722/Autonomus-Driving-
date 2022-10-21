#include<stdio.h>
void main()
{
	int a[5]={5,15,1,12,25};
	int i,j,ele,t;
	ele=sizeof(a)/sizeof(a[0]);
	printf("ele=%d\n",ele);

for(i=0;i<ele-1;i++)
{
for(j=i;j<ele-1;j++)
{
if(a[i]>a[j+1])
{
t=a[i];
a[i]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);

}
