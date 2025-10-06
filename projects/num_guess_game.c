#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 5;
    int answer = (rand() % (max - min + 1)) + min;

    printf(" Nums Guessing Game \n");

    do{
        printf("Guess a num between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if (guess < answer)
        {
            printf("Too low\n");
        }
        else if (guess > answer)
        {
            printf("Too High\n");
        }
        else
        {
            printf("correct\n");
        }
        
        
        
    }while(guess != answer);

    printf("the answer is %d\n", answer);
    printf("# of tries %d", tries);

    return 0;
}




// Number guessing game
