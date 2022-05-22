#include<stdio.h>

double calcinpro(double *vec1, double *vec2, int n);

int main(void){
	double result;
	double vec1[] = {3,1,2};
	double vec2[] = {-2,5,7};

	result = calcinpro(vec1, vec2, 3);
	printf("%.2f\n",result);

	double vec3[] = {3,-4,8};
    double vec4[] = {2,1,3};

	result = calcinpro(vec3, vec4, 3);
    printf("%.2f\n",result);

	double vec5[] = {5,-2,2};
	double vec6[] = {4,2,-1};

	result = calcinpro(vec5, vec6, 3);
	printf("%.2f\n",result);

}

double calcinpro(double *vec1, double *vec2, int n){
	int i;
	double s = 0.0;

	for(i=0;i<n;i++){
		s = s+vec1[i]*vec2[i];
	}
	return s;
}
