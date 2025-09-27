#include <stdio.h>

/*
A function is a reusable section of code that can be invoked aka "Called"
Arguments can be sent to a function so that it can use them
*/

// Create the function out of main()


// Functions need parameter defined with the data type
void happyBirthday(char name[], int age){
 printf("\nHappy Birthday to you!");
 printf("\nHappy Birthday to you!");
 printf("\nHappy Birthday dear %s!", name);
 printf("\nHappy Birthday to you!");
 printf("\nYou are %d years old", age);
}



int main(){

    char name[] = "Jose";
    int age = 25;

    // When calling the function, the parameters need to be the same data type


    happyBirthday(name, age);
    // happyBirthday();
    // happyBirthday();




    return 0;
}