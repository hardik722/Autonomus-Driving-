#include<stdio.h>
int power(int n, int p){
	static int pow = 1;
	int temp;
	if(p>0){
		pow = pow*n;
	    return power(n,p-1);

	}else{
		temp = pow;
		pow = 1;
		return temp;
	}

}
void main()
{
	int num1,num2;
	printf("num1 n...\n");
	scanf("%d",&num1);
	printf("num2 n..\n");
	scanf("%d",&num2);
	int pow = power(num1, num2);
	printf("%d\n", pow);
	pow = power(num1, num2);
	printf("%d\n", pow);
}
