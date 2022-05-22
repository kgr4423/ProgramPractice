#include <stdio.h>

int get_min_person(float kamoku[]);

int main(){
        int i;
        float kokugo[10],eigo[10];

        for(i = 0; i < 10; i = i+1){
                scanf("%f%f",&kokugo[i],&eigo[i]);
        }
        printf("kokugono saiteiten ha %d ban da!\n",get_min_person(kokugo));
        printf("eigono saiteiten ha %d ban da!\n",get_min_person(eigo));
}


int get_min_person(float kamoku[]){
       int        i,j;
       int        min_person=0;
       float      min;

       min = 101;
       for(i = 0; i < 10; i = i+1){
               if(min > kamoku[i]){
                       min = kamoku[i];
               }
       }

       for(j = 0; j < 10; j = j+1){
    	   if(kamoku[j] == min){
        		min_person = j+1;
        	}
        }

       return min_person;
}
