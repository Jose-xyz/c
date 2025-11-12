/*

Intro to pointers in C
A variable that stores the memory address of another variable.
Benefit: They help avoid wasting memory by allowing you to pass
the address of a large data structure instead of copying the entire data. 

Example: I have a lot pizza i want to give my friends. Instead of going to each of their houses,
one by one, i can instead share my address so they know where to the get the pizza. 

*/


#include <stdio.h>


void birthday(int* age);

int main() {

    int age = 25;
    //int *pAge = &age ;// * deference operator; we are going to store a pointer when declaring a variable | & = gives you the address
    // we dont need to delcare var of *pAge if we are using a function to do the samething
    
    printf("%p\n", &age); // %p = print a pointer address, & = address of operator
    // printf("%p\n", pAge); // pAge == &age when printed to stdout

    //birthday(pAge);
    birthday(&age);
    printf("You are %d years old", age);

    return 0;
}

void birthday(int* age) //our func only cares about an memory address to an integer
{
    // pass by reference 
    (*age)++;

}