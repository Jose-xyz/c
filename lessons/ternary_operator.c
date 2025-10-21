/*
ternary operator ? = shorthand for if-else statements

(condition) ? value_if_true : value_if_false;
*/

#include <stdio.h>

int main (){

// simple example

    int x = 7;
    int y = 6;

    int max = (x > y) ? x : y;

    printf("%d", max);

    return 0;
}