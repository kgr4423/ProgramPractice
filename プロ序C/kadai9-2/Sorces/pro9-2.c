#include<stdio.h>
int get_max_person(float points[]);

int main(){
	int i;
	int n;


	scanf("%d",&n);
	float scores[n];

	for(i=0;i<n;i=i+1){
		scanf("%f",&scores[i]);
	}

	get_max_student(n,scores);
}

int get_max_student(int N, float points[]){
	int i,j,k;
	int m=0;
	float max=-1;
	int max_student[N];

	for(i=0;i<N;i=i+1){
		if(max < points[i]){
			max = points[i];
		}
	}

	for(j=0;j<N;j=j+1){
		if(points[j] == max){
			max_student[m] = j;
			m = m+1;
		}
	}

	printf("Å‚“¾“_ŽÒ‚Ì”Ô†‚Í ");
	for(k=0;k<m;k=k+1){
		printf("%d ",max_student[k]);
	}
}
