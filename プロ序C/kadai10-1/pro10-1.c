#include<stdio.h>
int step(int a);

int main(){
	int j;

	for(j=1;j<11;++j){
		printf("%d‚ÌŠKæ‚Í%d\n",j,step(j));
	}
}

int step(int a){
	int i;
	int k=1;
	for(i=1;i<a+1;++i){
		k = k*i;
	}
	return k;
}
