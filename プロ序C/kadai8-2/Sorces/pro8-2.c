#include <stdio.h>

int main(){
        char    image[21][21];
        int     i,j;

        for(j = 0; j < 21; j = j+1){
               float y = j-10;
               for(i = 0; i < 21; i = i+1){
                        float x = i-10;
                        if(x*x+y*y < 90){
                                image[j][i] = '#';
                        }else{
                                image[j][i] = '.';
                        }
                }
        }

        for(i = 6; i < 15; i = i+1){
               for(j = 6; j < 15; j = j+1){
                    	 image[j][i] = 'x';
               }
        }

        for(j = 0; j < 21; j = j+1){
                for(i = 0; i < 21; i = i+1){
                        printf("%c ",image[j][i]);
                }
                printf("\n");
        }
}
