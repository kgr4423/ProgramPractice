#include<stdio.h>

int main(){
	signed char a=9,b=12,c=7,d=7;

	printf("a=%hhd,b=%hhd,c=%hhd,d=%hhd\n",a,b,c,d);
	printf("(a/c+b/c)=%hhd,(a/b)/c=%hhd,d/c=%hhd,a%%c=%hhd\n"
			,(a/c+b/c),(a/b)/c,d/c,a%c);

}
