#include <stdio.h>
float get_min(float kamoku[]);

int main(){
        int i;
        float kokugo[10],eigo[10];

        for(i = 0; i < 10; i = i+1){
                scanf("%f%f",&kokugo[i],&eigo[i]);
        }
        printf("max_kokugo = %5.1f\n",get_min(kokugo));
        printf("max_eigo   = %5.1f\n",get_min(eigo));
}

float get_min(float kamoku[]){
        int        i;
        float      min;

        min = 101;
        for(i = 0; i < 10; i = i+1){
                if(min > kamoku[i]){
                        min = kamoku[i];
                }
        }
        return min;
}


