#include<stdio.h>
#include<string.h>


int main(int argc,char *argv[]){
	int i,j,k,max1=0,max2=-1;
	char count[128]={0};

	for(i=1;i<argc;i++){
		if(max1<strlen(argv[i])){
			max1=strlen(argv[i]);
		}
	}
	printf("%d",max1);


	for(j=0;argv[max1][j]!='\0';j++){
		count[argv[max1][j]]++;
	}

	for(k=0;k<128;k++){
		if(max2<count[k]){
			max2=count[k];
		}
	}

	printf("%c %d",argv[max1][max2],count[max2]);

	return 0;

}
