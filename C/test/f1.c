#include <stdio.h>

int main(){
	FILE *fp = fopen("data.txt", "w");
	fprintf(fp, "i=%d, j=%f\n", 10, 34.5);

}
