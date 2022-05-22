#include<stdio.h>

int main(void){
	unsigned short warareru;
	unsigned short waru;

	scanf("%d",&warareru);
	scanf("%hd",&waru);

	printf("%d",warareru-(warareru/waru)*waru);

	return 0;

}
