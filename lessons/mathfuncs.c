#include <stdio.h>
#include <math.h>

//gcc mathfuncs.c -o mathfuncs -lm && ./mathfuncs


/*
the -lm flag is an explicit instruction to the linker to 
include the mathematical function 
library, which contains the definitions 
for functions like pow, sqrt, sin, and cos.
*/

int main(){

   float x = 3.14;

    //x = sqrt(x);
    //x = pow(x, 2);
    //x = round(x);
    //x = ceil(x); always round up
    //x = floor(x); always round down
    //x = abs(x); absolute value
    //x = log(x); natural logarithm
    //x = sin(x); sine
    //x = cos(x); cosine
    //x = tan(x); tangent

    printf("%f\n", x);

    return 0;



}
