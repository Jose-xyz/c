#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){



    // Example #1
    bool isStudent = true;

    if(isStudent){
        printf("You are a student\n");
    }
    else{
        printf("You are NOT a student\n");
    }


    // Example #2

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("You did not enter your nombre!");
    }
    else{
        printf("Hello %s", name);
    }





    return 0;
}