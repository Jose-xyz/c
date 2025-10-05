#include <stdio.h>


int main(){

    // for(int i = 1; i < 10; i++){
        // printf("%d ", i);
    // }


// Multiplicaton Table using nested loop

    for(int i = 1; i <= 12; i++){

        for(int j = 1; j <= 12; j++){
                printf("%3d ", j * i);
            }
        printf("\n"); 
    }

    return 0;
}