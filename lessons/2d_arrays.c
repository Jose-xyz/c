/*
2D array 
An array where each element is an array
array[][] = {{}, {}, {}};
*/

#include <stdio.h>



int main(){

    int numbers_1[] = {1, 2, 3}; // 1D array

    int numbers_2[][3] = {{1, 2, 3},
                          {4, 5, 6}, 
                          {7, 8, 9}};     // 2D array, good if you need a matrix or grid of data, must add [3]for number of columns
/*
    printf("%d ", numbers_2[0][0]);
    printf("%d ", numbers_2[0][1]);
    printf("%d ", numbers_2[0][2]);
*/

    // nested for loop to print 2d array
    for (int i = 0; i < 3; i++) // rows  
    { 

        for (int j = 0; j < 3; j++) // columns  
        {
        printf("%d ", numbers_2[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}