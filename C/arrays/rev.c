#include<stdio.h>
void main()
{
	int i,j,t,a[5],ele;
	printf("enter ele...\n");

	ele=sizeof(a)/sizeof(a[0]);
/////////////////////////////////////////////////////////
	//---> scaning the ele:

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");

/////////////////////////////////////////////////////////
	//----> forword printing  
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("\n------------\n");
/////////////////////////////////////////////////////////
	//----> logic for reverse ele:

	for(i=0,j=ele-1;i!=j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;

	}
/////////////////////////////////////////////////////////
	//----> reverse printng:
	
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("\n");

}
