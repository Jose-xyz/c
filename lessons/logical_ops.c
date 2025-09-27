#include <stdio.h>
#include <stdbool.h> // needed to use for bools

int main() {

    // logical operators = used to combine or modify booleans expressions.

    // && = AND
    // || = OR
    // !  = NOT


    int temp = 0;


    printf("Enter todays temp: ");
    scanf("%d", &temp);

    // example of AND
    // Both statements have to be true to execute code

    if(temp > 0 && temp < 30){
        printf("The temp is Goody\n");
    }
    else{
        printf("The temp is Horrible!\n");
    }

    // example of OR
    // One statement has to be true execute code

    if(temp <= 0 || temp >= 30){
        printf("The temp is BAD\n");
    }
    else{
        printf("The temp is GOOD!\n");
    }

    // Using NOT with bools

    bool isSuuny = true;

    if(!isSuuny){
        printf("It is CLOUDY inside");
    }
    else{
        printf("It is SUNNY inside");
    }


    return 0;
}