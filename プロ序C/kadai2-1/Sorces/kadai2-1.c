#include<stdio.h>

int main(){
	int input;

	printf("Sukina suuwo irete Return-key wo osu>>>");
	fflush(stdout);

	if(input < 10){
		printf("Konosuu %d ha 10 miman dedsu\n",input);
	}
	else{
		printf("Konosuu %d ha 10 ijou desu\n",input);
	}
	if((input < 50)&&(input >= 40)){
		printf("%d ha 50 miman de 40 ijou desu\n",input);
	}
	return 0;
}
