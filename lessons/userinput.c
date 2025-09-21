#include <stdio.h>
#include <string.h> // needed for strlen()



int main(){

    // you may want to assign your variable because the use of a variable without a starting point will 
    // lead to undefined behavior

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // \0 is null terminator, will clear that space in memory 
    char name[30] = ""; // 30 byte = 30 characters, can just assign an an empty string to avoid undefined behavior 

    char name1[50] = ""; 

    printf("Enter you age:");
    scanf("%d", &age); // & mean at the memory address of age we are going to stick a value there.


    getchar(); // getchar() function will clear the input buffer for us
    printf("Enter your full name:");
    fgets(name, 30, stdin); // fgets means file gets string, fgets includes \n
    name[strlen(name) - 1] = '\0';
    printf("Enter your full name again:"); 

    fgets(name1, sizeof(name1), stdin); // we can use sizeof() function so we dont have to type in byte size everytime

    // scanf will stop reading after any white space
    
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name1);

    
}