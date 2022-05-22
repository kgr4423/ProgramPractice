#include<stdio.h>
#include<math.h>

double calcdist(double *poi1, double *poi2, int n);

int main(void){
	double result;
	double poi1[] = {1,1,1};
	double poi2[] = {0,1,1};

	result = calcdist(poi1, poi2, 3);
	printf("%.2f\n",result);

	double poi3[] = {10,-3,-1};
    double poi4[] = {6,3,-5};

	result = calcdist(poi3, poi4, 3);
    printf("%.2f\n",result);

	double poi5[] = {10.0,3.1,5.3};
	double poi6[] = {-2.0,-3.0,5.2};

	result = calcdist(poi5, poi6, 3);
	printf("%.2f\n",result);

}

double calcdist(double *poi1, double *poi2, int n){
	int i;
	double s = 0.0;
	double k = 0.0;

	for(i=0;i<n;i++){
		k = poi1[i]-poi2[i];
		s= s+k*k;
	}
	s = sqrt(s);
}
