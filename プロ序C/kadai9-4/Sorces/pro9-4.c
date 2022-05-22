#include<stdio.h>
void pr(void);
int flag = 1;

int main(void){
	int i;
	for(i=0;i<5;i++){
		pr();
	}
	return 0;
}

void pr(void){
	if(flag == 1){
		printf("first time \n")	;
		flag = 0;
	}
	else printf("not first time \n");
}
