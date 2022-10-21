#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp = fopen("data", "r");
	FILE *fd = fopen("data1", "w");
	int n, c=0;
	char ch;
	printf("enter line no.\n");
	scanf("%d", &n);

	while((ch = fgetc(fp)) != -1){
		if(ch == '\n'){
			c++;
		}
		if(c == n-1)
		{
			while((ch = fgetc(fp)) != '\n');
			c++;
		}
		fputc(ch, fd);
	}
	fclose(fp);
	fclose(fd);
	fd = fopen("data1", "r");
	fp = fopen("data", "w");
	while((ch = fgetc(fd)) != -1){
		fputc(ch, fp);
	}
	fclose(fd);
	fd = fopen("data1", "w");

}
