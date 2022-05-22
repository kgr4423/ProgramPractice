#include<stdio.h>

int main(void){
	printf("I am %c.%c\n",ltou('k'),ltou('h'));
}

int ltou(int c){
	return c - 0x20;
}
