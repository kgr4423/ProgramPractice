#include<stdio.h>

int main(){
	unsigned char a=9,b=12,c=7,d=7;

	printf("a=%hhu,b=%hhu,c=%hhu,d=%hhu\n",a,b,c,d);
	printf("(a/c+b/c)=%hhu,(a/b)/c=%hhu,d/c=%hhu,a%%c=%hhu\n",(a/c+b/c),(a/b)/c,d/c,a%c);

}
