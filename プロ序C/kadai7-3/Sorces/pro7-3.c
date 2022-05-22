#include <stdio.h>
float get_min(float kamoku[]);

int main(){
        int i,j,k;
        int kokugo_min_person;
        int eigo_min_person;
        float kokugo[10],eigo[10];

        for(i = 0; i < 10; i = i+1){
                scanf("%f%f",&kokugo[i],&eigo[i]);
        }

        for(j = 0; j < 10; k = k+1){
        	    if(kokugo[k] == get_min(kokugo)){
        		    kokugo_min_person = k;
        		    break;
        	}
        }
        printf("kokugo saiteiten ha %d ban da!\n",kokugo_min_person);
        for(i = 0; i < 10; i = i+1){
                if(eigo[i] == get_min(eigo)){
                    eigo_min_person = i;
                    break;
            }
        }
        printf("eigo saiteiten ha %d ban da!\n",eigo_min_person);
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
