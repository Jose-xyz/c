#include <stdio.h>


int main(){

    for(int i = 1; i <=10; i++){

        if(i == 4){   // here will skip four, wont print it to stdout
            continue;
        }
        else if (i == 8) // well stop at at 8
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}







/*

break = break out of loop (stop
continue = skip current cycle (skip)

*/