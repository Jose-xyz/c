#include <stdio.h>
#include <stdbool.h>


//variables and format specifiers



int main() {


    int number = 33; // whole numbers,,,,,,,,,4 bytes
    float gpa = 2.5; // less percise 4 bytes
    double pi = 3.14213434534534252; // more precise 8 bytes

    char grade = 'G'; //char is used for single characters, uses single quotes, 1 byte
    char name[] = "Jose this is the way"; // does not use strings, it uses an array of characters [], varies in byte size

    bool isOnline = true; // 1 byte, requires #include <stdbool.h>


    printf("This is an int variable %d\n", number);  // decimal 
    printf("This is an int variable %3d\n", number);  // decimal 
    printf("This is an int variable %-3d\n", number);  // decimal 
    printf("This is an int variable %+3d\n", number);  // decimal 

    printf("the is float type, for less percision: %f\n", gpa); // float 
    printf("the is float type, for less percision: %.2f\n", gpa); // float 

    printf("Value of pie %lf and also a double \n", pi); // long float
    printf("Value of pie %.2lf and also a double \n", pi); // long float
    printf("Value of pie %7.2lf and also a double \n", pi); // long float


    printf("You a str8 %c, juu heard!, also this for char type\n", grade); // character
    printf("Strings like {%s}, are acutally an array of characters\n", name); // string

    printf("%d\n", isOnline); // this will print 1, false will be 0

    //bools are you more commonly inside programs such as if statements

    if (isOnline) {
        printf("Online now\n");
    }
    else {
        printf("Not Online at the moment\n");
    }
    return 0;
}