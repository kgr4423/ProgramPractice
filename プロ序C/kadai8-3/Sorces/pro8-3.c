#include <stdio.h>

int main(){
        int     i,j,k;
        double  U[2][2],V[2][2],M[2][2];

        U[0][0] = 1; U[0][1] = -1;
        U[1][0] = 2; U[1][1] = -2;

        M[0][0] = 6; M[0][1] = 1;
        M[1][0] = 5; M[1][1] = 1;

        for(i = 0; i < 2; i = i+1){
                V[i][j] = 0;
                for(j = 0; j < 2; j = j+1){
                	    for(k = 0; k < 2; k = k+1){
                	    	    V[i][j] = V[i][j] + M[i][k]*U[k][j];
                	    }
                }
        }

        printf("V = (%f,%f)\n    (%f,%f)\n",
        		V[0][0],V[0][1],V[1][0],V[1][1]);
}

