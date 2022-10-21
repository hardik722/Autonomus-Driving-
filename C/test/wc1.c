#include <stdio.h>

int main(){
	FILE *fp = fopen("wc1.c", "r");
	char s[100];
	int c=0;
	fseek(fp, 0, SEEK_END);
	int l = ftell(fp);
	rewind(fp);
	while(ftell(fp) < l){
		fscanf(fp, "%s", s);
//		printf("%d", ftell(fp));
		c++;
	}
	printf("%d\n", c-1);
}
