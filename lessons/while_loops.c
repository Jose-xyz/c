#include <stdio.h>
#include <stdbool.h>




int main(){

    bool isRunning = true;
    char response = '\0';

    while (isRunning)
    {
        printf("You play game \n");
        printf("Keep playing, y or n: ");
        scanf(" %c", &response);

        if(response != 'y' && response != 'Y' ){
            isRunning = false;

        }
    }
    
   printf("Exited Games");

    return 0;
}


/*
while loop
- continue some code WHILE the condition remains true
- condition must be true for us to while loop
*/