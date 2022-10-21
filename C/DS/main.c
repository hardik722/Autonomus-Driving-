#include"header.h"
void main()
{
	ST *hptr=0;
	char op;
	int c;
	/*	do
		{
		add_middle(&hptr);
		printf("enter op->'y' or 'Y' for add node...\n");
		scanf(" %c",&op);
		}
		while(op=='y' || op=='Y');*/

/*	printf("-------read data from file..---------\n");	
	read_data(&hptr);
	print(hptr);


	printf("--------count a node..----------\n");
	c=count(hptr);
	printf("c=%d\n",c);


	printf("---------print normally..----------\n");
	print(hptr);


	printf("---------fwd print using recursion.----------.\n");
	fwd_print_rec(hptr);


	printf("------------rev_print using recursion..----------\n");
	rev_print_rec(hptr);

	printf("------------fwd print using array of pointer..-----------\n");
	fwd_print_aop(hptr);

	printf("-----------rev print using array of pointer..------------\n");
	rev_print_aop(hptr);	

	printf("---------rev print using temp pointer..-----------\n");
	rev_print_temp(hptr);
*/	
	printf("--------rev data-----------\n");
	rev_data(hptr);
	print(hptr);
	//	save(hptr);

}

