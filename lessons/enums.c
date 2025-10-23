
/*
enum = a user-defined data type that consists 
       of a set of named integer constants.
       AKA Enumerations 
       
       Benefit: Replaces numbers with reasonable names 

       SUNDAY = 0;
       MONDAY = 1;
       TUESDAY = 2;
*/


#include <stdio.h>

typedef enum {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}Day;
//added typedef

enum timeOfDay{
    MIDNIGHT = 1, MORNING = 2, NOON = 3, AFTERNOON = 4, EVENING = 5
};
// enums are set {constant : value}



int main(){

    // enum Day today = MONDAY;
    Day today = MONDAY; // we can now remove enum after adding typedef 

    printf("%d", today);




    return 0;
}