#include <stdio.h>
#include <stdbool.h>


void hello(char name[], int age); // This is the function prototype,
                                  // It tells the complier about the function before we define it

bool ageCheck(int age); // another func prototype




int main(){

    hello("Jose", 100);

    if (ageCheck(39)){
        printf("You old enough to work");
    }
    else{
        printf("Go play outside big dawg");
    }

    return 0;
}


void hello(char name[], int age){
    printf("Hola %s\n", name);
    printf("You are %d years young\n", age);
}


bool ageCheck(int age){
    return age >= 16;
}


/*
Function prototype 

Provide the complier with information about a functions: name,
return type, and parameters before its actual definition.
Enables type checking and allows functions to be used before theyre defined.
Improves readability, organization, and helps prevent errors. 
*/