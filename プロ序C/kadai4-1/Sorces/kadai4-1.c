#include<stdio.h>

int main(){
	short i=1,j;

	while(i>0){
		j=1;
		i=i+1;
	}
	printf(" i=%hd(%hu,%#hx),j=%hd(%hu,%#hx)\n",i,i,i,j,j,j);
}
