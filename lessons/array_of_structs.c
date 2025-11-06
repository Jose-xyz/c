/*
Array of Structs

Array where each element contains a struct {}
Helps organize and groups together related data

 Bro Code mentions if you have a lot of structs to work with and they are
the same data type you can stick them into an array. 
*/


typedef struct 
{
    char model[50];
    int year;
    int price;
}Car;


#include <stdio.h>

int main(){

    Car cars[] = {{"McLaren", 2008, 120000},
                  {"Lambo", 2011, 320000},
                  {"Ranger", 1992, 7000}};

    int number = sizeof(cars) / sizeof(cars[0]); //find the number of elements in a statically declared array

    for(int i = 0; i < number; i++){
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}

