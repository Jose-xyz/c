#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));

    int min = 1;
    int max = 6;
    int randomNum = (rand() % max) + min;

}

/*
Pseudo-Random

Appear random but are determined by a mathematical formula that uses
a seed value to generate a predictable sequence of numbers.

Advanced: Mersenne Twister or /dev/random
*/