/*
array
A fixed-size collection of elements of the same data type
Similar to a variable, but it holds more than value. 
---more complex than above but for now is okay for understanding
*/

#include <stdio.h>

int main(){

    int numbers[] = {0, 10, 20, 30, 40, 50}; // must be comma seperated 
                                          // each value in an array is an element  
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    int size = sizeof(numbers) /  sizeof(numbers[0]); 

    // printf("%d\n", sizeof(numbers)); // gets and prints the size of the array in bytes
    // printf("%d\n", sizeof(numbers[0])); //get size of one element

    // printf("%d", numbers[2]); //When accessing elements do not go out of bounds. here we dont have [5]

    for (int i = 0; i < size; i++)         
    {
        printf("%d ", numbers[i]);
    }
    

    return 0;
}