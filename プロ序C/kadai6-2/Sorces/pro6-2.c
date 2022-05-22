#include<stdio.h>

int main(void){
	int i,j,k;
	int x[2][2]={{5,0},{8,1}};
	int y[2][2]={{1,-1},{3,2}};
	int z[2][2];
	int a[2][2]={{2,1},{5,10}};
	int b[2][2]={{1,-4},{2,-2}};
	int c[2][2];

	mul(x,y,z);
	mul(a,b,c);

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%3d ",z[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("%3d ",c[i][j]);
			}
			printf("\n");
		}

}

void mul(const int ma[2][2],const int mb[2][2],int mc[2][2]){
	int i,j,k;

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			mc[i][j]=0;
			for(k=0;k<2;k++){
				mc[i][j]+= ma[i][k]*mb[k][j];
			}
		}
	}
}


