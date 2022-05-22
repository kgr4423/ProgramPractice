#include<stdio.h>

int main(int argc, char *argv[]){
	int i,j;
	for(i=argc;i>=1;--i){
		for(j=0;argv[i][j]!='/0';j++);
		for(j=strlen(argv[i]);j>=0;--j){
			printf("%c",argv[i][j]);
		}
		printf("/n");
	}
}
