#include <stdio.h>

/*
If  Statement = Do some code if a condition is true
If the condition is false, do not do it. 

aka flow control
*/

int main() {

    int age = 0;

    printf("Enter you age: ");
    scanf("%d", &age);

    if(age >= 65){
        printf("You are a senior");
    }
    else if (age >= 18){
        printf("You are a an adult");
    }
    else if (age < 0){
        printf("You havent been born");
    }
    else if (age == 0){
        printf("You are a newborn");
    }
    else{
        printf("You are a child of god");
    }

    return 0;
}