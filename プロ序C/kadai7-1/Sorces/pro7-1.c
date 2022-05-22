#include <stdio.h>

int main(){
	int i;
	float kokugo[10],eigo[10];
	float get_dispersion(float kamoku[]);

	for(i=0;i<10;i=i+1){
		scanf("%f%f",&kokugo[i],&eigo[i]);
	}

	printf("kokugo no bunsann = %5.1f\n",get_dispersion(kokugo));
	printf("eigo no bunsann = %5.1f\n",get_dispersion(eigo));
}


float get_dispersion(float kamoku[]){
	int i;
	float sum=0;
	float dis=0;
	float ave=0;

	for(i=0;i<10;i=i+1){
		sum = sum + kamoku[i];
	}

	ave = sum/10 ;

	for(i=0;i<10;i=i+1){
		dis = dis + ((kamoku[i]-ave)*(kamoku[i]-ave))/10;
	}
	return(dis);
}
