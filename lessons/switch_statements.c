#include <stdio.h>


/*
switch = an alternative to using many if-else statements
more efficient w/fixed integer values

if find yourself using a bunch of if else statements "switch" is alternative 
*/

// This example used ints but character can also be used


int main(){

    int dayOfWeek = 0;
    printf("Enter a number 1 -7: "); 
    scanf("%d", &dayOfWeek);

    switch (dayOfWeek){
        case 1:
            printf("It is Monday\n");
            break;
        case 2:
            printf("It is Tuesday\n");
            break;
        case 3:
            printf("It is Wednesday\n");
            break;
        case 4:
            printf("It is Thursday\n");
            break;
        case 5:
            printf("It is Friday\n");
            break;
        case 6:
            printf("It is Saturday\n");
            break;
        case 7:
            printf("It is Sunday\n");
            break;

        default:
            printf("Only enter a number from 1 - 7");
            break; // dont need a break here but i am adding because it doesnt hurt. 
    }

    return 0;
}